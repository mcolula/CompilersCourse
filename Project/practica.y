%{
  #include <math.h>
  #include "list.h"
%}
             

%{
  #define  MX 1000
  
  list * table;  
  char ans[MX];

  char * concat(char * a, char * b) {
    strcpy(ans, ""); 
    strcat(ans,  a); 
    strcat(ans,  b); 
    return strdup(ans);    
  }

  char * repeat(char * a, int    n) {
    strcpy(ans, ""); 
    int  i = 0;
    for (i = 0; i < n; i++)
      strcat(ans,   a);
    return strdup(ans);
  }

  char * remstr(char * a, char * b) {
    char *  x = strstr(a, b);
    if (!x) return strdup(a);
    int k = x - a, i = 0; 
    int m =    strlen(b); 
    strcpy(ans, "");
    for (i = 0; i <= k; i++) 
      ans[i]   =  a[i];
    ans[i - 1] =  '\0';
    strcat(ans, x + m);
    return strdup(ans);
  }

%}

%union {
  int   Integer;
  double Double;
  char * String;
}

%token <Integer> integerValue
%token <Double>  doubleValue
%token <String>  stringValue
%type  <Integer> integerExp
%type  <Double>  doubleExp
%type  <String>  stringExp
%token <String>  integerID
%token <String>  undeclrID
%token <String>  doubleID
%token <String>  stringID
%type  <Integer> assign
%type  <Integer> declr
%type  <String>  invExp
%type  <Integer> redeclr
%type  <String>  typeError
%type  <String>  assignError

%token typeInteger
%token typeString
%token typeDouble

%left '+' '-'
%left '*' '/' '%'
%left umin
%left  '('     
%left  '^'
%left  '='

%%
             
input:  
                   | input line             
;

line:              '\n'
                   | integerExp  ';' '\n'                       { printf("ans = %d\n",   $1);      } 
                   | doubleExp   ';' '\n'                       { printf("ans = %f\n",   $1);      }
                   | stringExp   ';' '\n'                       { printf("ans = '%s'\n", $1);      }                   
                   | declr       ';' '\n'                       { printf("Definición  exitosa\n"); }
                   | assign      ';' '\n'                       { printf("Asignación  exitosa\n"); }
                   | invExp      ';' '\n'                       { printf("Expresión  inválida\n"); }
                   | typeError   ';' '\n'                       { printf("Tipos   incorrectos\n"); }
                   | redeclr     ';' '\n'                       { printf("Variable  existente\n"); }
                   | assignError ';' '\n'                       { printf("Error en asignación\n"); }

                   | integerExp      '\n'                       { printf("Error falta ;\n"); }
                   | doubleExp       '\n'                       { printf("Error falta ;\n"); }
                   | stringExp       '\n'                       { printf("Error falta ;\n"); }                   
                   | declr           '\n'                       { printf("Error falta ;\n"); }
                   | assign          '\n'                       { printf("Error falta ;\n"); }
                   | invExp          '\n'                       { printf("Error falta ;\n"); }
                   | typeError       '\n'                       { printf("Error falta ;\n"); }
                   | redeclr         '\n'                       { printf("Error falta ;\n"); }
;                                                              


// Gramatica para expresiones tipo int
integerExp:          integerValue                              { $$ =  $1;          }
                   | integerExp '+' integerExp                 { $$ =  $1 + $3;     }
                   | integerExp '-' integerExp                 { $$ =  $1 - $3;     }
                   | integerExp '*' integerExp                 { $$ =  $1 * $3;     }
                   | integerExp '/' integerExp                 { $$ =  $1 / $3;     }
                   | integerExp '%' integerExp                 { $$ =  $1 % $3;     }
                   | integerExp '^' integerExp                 { $$ =  pow($1, $3); }
                   | '-' integerExp %prec umin                 { $$ = -$2;          }
                   | '('    integerExp     ')'                 { $$ =  $2;          }
                   | integerID                                 { $$ =  atoi(search(table, $1)->data); }
;                                                              
                                                              
// Gramatica para expresiones tipo double                                                             
doubleExp:           doubleValue                               { $$ =  $1;          }
                   | doubleExp  '+' doubleExp                  { $$ =  $1 + $3;     }
                   | doubleExp  '-' doubleExp                  { $$ =  $1 - $3;     }
                   | doubleExp  '*' doubleExp                  { $$ =  $1 * $3;     }
                   | doubleExp  '/' doubleExp                  { $$ =  $1 / $3;     }
                   | doubleExp  '^' doubleExp                  { $$ =  pow($1, $3); }
                   | doubleExp  '+' integerExp                 { $$ =  $1 + $3;     }
                   | doubleExp  '-' integerExp                 { $$ =  $1 - $3;     }
                   | doubleExp  '*' integerExp                 { $$ =  $1 * $3;     }
                   | doubleExp  '/' integerExp                 { $$ =  $1 / $3;     }
                   | doubleExp  '^' integerExp                 { $$ =  pow($1, $3); }
                   | integerExp '+' doubleExp                  { $$ =  $1 + $3;     }
                   | integerExp '-' doubleExp                  { $$ =  $1 - $3;     }
                   | integerExp '*' doubleExp                  { $$ =  $1 * $3;     }
                   | integerExp '/' doubleExp                  { $$ =  $1 / $3;     }    
                   | integerExp '^' doubleExp                  { $$ =  pow($1, $3); }
                   | '-' doubleExp %prec umin                  { $$ = -$2;          }
                   | '('    doubleExp     ')'                  { $$ =  $2;          }
                   | doubleID                                  { $$ =  atof(search(table, $1)->data); }
;                                                              

// Gramatica para expresiones tipo string
stringExp:           stringValue                               { $$ = $1;             }  
                   | stringExp '+' stringExp                   { $$ = concat($1, $3); }
                   | stringExp '*' integerExp                  { $$ = repeat($1, $3); }
                   | stringExp '-' stringExp                   { $$ = remstr($1, $3); }
                   | '('    stringExp     ')'                  { $$ = $2;             }
                   | stringID                                  { $$ = search(table,  $1)->data; }
;                                                              
                                                              
// Gramatica para expresiones con identificadores no definidos
invExp:              undeclrID                                 { printf("Variable '%s' no existe\n", $1);  } 
                   | integerExp '+' invExp                     {  }
                   | integerExp '-' invExp                     {  }
                   | integerExp '*' invExp                     {  }
                   | integerExp '/' invExp                     {  }
                   | integerExp '%' invExp                     {  }
                   | integerExp '^' invExp                     {  }
                   | invExp '+' integerExp                     {  }
                   | invExp '-' integerExp                     {  }
                   | invExp '*' integerExp                     {  }
                   | invExp '/' integerExp                     {  }
                   | invExp '%' integerExp                     {  }
                   | invExp '^' integerExp                     {  }
                   | doubleExp '+' invExp                      {  }
                   | doubleExp '-' invExp                      {  }
                   | doubleExp '*' invExp                      {  }
                   | doubleExp '/' invExp                      {  }
                   | doubleExp '%' invExp                      {  }
                   | doubleExp '^' invExp                      {  }
                   | invExp '+' doubleExp                      {  }
                   | invExp '-' doubleExp                      {  }
                   | invExp '*' doubleExp                      {  }
                   | invExp '/' doubleExp                      {  }
                   | invExp '%' doubleExp                      {  }
                   | invExp '^' doubleExp                      {  }
                   | stringExp '+' invExp                      {  }
                   | stringExp '-' invExp                      {  }
                   | stringExp '*' invExp                      {  }
                   | stringExp '/' invExp                      {  }
                   | stringExp '%' invExp                      {  }
                   | stringExp '^' invExp                      {  }
                   | invExp '+' stringExp                      {  }
                   | invExp '-' stringExp                      {  }
                   | invExp '*' stringExp                      {  }
                   | invExp '/' stringExp                      {  }
                   | invExp '%' stringExp                      {  }
                   | invExp '^' stringExp                      {  }
                   | invExp '+' invExp                         {  }
                   | invExp '-' invExp                         {  }
                   | invExp '*' invExp                         {  }
                   | invExp '/' invExp                         {  }
                   | invExp '%' invExp                         {  }
                   | invExp '^' invExp                         {  }
                   | '-' invExp %prec umin                     {  }
                   | '('    invExp      ')'                    {  }
                   | typeInteger undeclrID '=' invExp          {  }
                   | typeDouble  undeclrID '=' invExp          {  }
                   | typeString  undeclrID '=' invExp          {  }
                   | undeclrID '=' integerExp                  {  }
                   | undeclrID '=' stringExp                   {  }
                   | undeclrID '=' doubleExp                   {  }
                   | integerID '=' invExp                      {  }
                   | doubleID  '=' invExp                      {  }
                   | stringID  '=' invExp                      {  }
                   | undeclrID '=' invExp                      {  }                  
;                                               


// no sale lo siguiente
// int var1 = 1;
// string var2 = "Hola";
// var1 = var2 + 5;

// Gramatica para expresiones con errores de tipo                                                              
typeError:           stringExp '+' integerExp                  {  }
                   | stringExp '-' integerExp                  {  }
                   | stringExp '/' integerExp                  {  }
                   | stringExp '%' integerExp                  {  }
                   | stringExp '^' integerExp                  {  }
                   | integerExp '+' stringExp                  {  }
                   | integerExp '-' stringExp                  {  }
                   | integerExp '*' stringExp                  {  }
                   | integerExp '/' stringExp                  {  }
                   | integerExp '%' stringExp                  {  }
                   | integerExp '^' stringExp                  {  }
                   | stringExp '+' doubleExp                   {  }
                   | stringExp '-' doubleExp                   {  }
                   | stringExp '*' doubleExp                   {  }
                   | stringExp '/' doubleExp                   {  }
                   | stringExp '%' doubleExp                   {  }
                   | stringExp '^' doubleExp                   {  }
                   | doubleExp '+' stringExp                   {  }
                   | doubleExp '-' stringExp                   {  }
                   | doubleExp '*' stringExp                   {  }
                   | doubleExp '/' stringExp                   {  }
                   | doubleExp '%' stringExp                   {  }
                   | doubleExp '^' stringExp                   {  }
                   | '-' stringExp %prec umin                  {  }
;                                                             

// Gramatica para expresiones con errores de redefinición
redeclr:             typeString stringID                       {  }
                   | typeString doubleID                       {  }
                   | typeString integerID                      {  }
                   | typeDouble stringID                       {  }
                   | typeDouble doubleID                       {  }
                   | typeDouble integerID                      {  }
                   | typeInteger stringID                      {  }
                   | typeInteger doubleID                      {  }
                   | typeInteger integerID                     {  }
                   | typeString stringID  '=' integerExp       {  }
                   | typeString stringID  '=' doubleExp        {  }
                   | typeString stringID  '=' stringExp        {  }
                   | typeString stringID  '=' invExp           {  }
                   | typeString doubleID  '=' integerExp       {  }
                   | typeString doubleID  '=' doubleExp        {  }
                   | typeString doubleID  '=' stringExp        {  }
                   | typeString doubleID  '=' invExp           {  }
                   | typeString integerID '=' integerExp       {  }
                   | typeString integerID '=' doubleExp        {  }
                   | typeString integerID '=' stringExp        {  }
                   | typeString integerID '=' invExp           {  }
                   | typeDouble stringID  '=' integerExp       {  }
                   | typeDouble stringID  '=' doubleExp        {  }
                   | typeDouble stringID  '=' stringExp        {  }
                   | typeDouble stringID  '=' invExp           {  }
                   | typeDouble doubleID  '=' integerExp       {  }
                   | typeDouble doubleID  '=' doubleExp        {  }
                   | typeDouble doubleID  '=' stringExp        {  }
                   | typeDouble doubleID  '=' invExp           {  }
                   | typeDouble integerID '=' integerExp       {  }
                   | typeDouble integerID '=' doubleExp        {  }
                   | typeDouble integerID '=' stringExp        {  }
                   | typeDouble integerID '=' invExp           {  }
                   | typeInteger stringID  '=' integerExp      {  }
                   | typeInteger stringID  '=' doubleExp       {  }
                   | typeInteger stringID  '=' stringExp       {  }
                   | typeInteger stringID  '=' invExp          {  }
                   | typeInteger doubleID  '=' integerExp      {  }
                   | typeInteger doubleID  '=' doubleExp       {  }
                   | typeInteger doubleID  '=' stringExp       {  }
                   | typeInteger doubleID  '=' invExp          {  }
                   | typeInteger integerID '=' integerExp      {  }
                   | typeInteger integerID '=' doubleExp       {  }
                   | typeInteger integerID '=' stringExp       {  }
                   | typeInteger integerID '=' invExp          {  }
;                                                             
                                                              
// Gramatica para asignaciones
assign:              stringID  '=' stringExp                   { update(table, $1,  $3);                                 }
                   | integerID '=' integerExp                  { sprintf(ans, "%d", $3);         update(table, $1, ans); }
                   | doubleID  '=' doubleExp                   { sprintf(ans, "%f", $3);         update(table, $1, ans); }
                   | integerID '=' doubleExp                   { sprintf(ans, "%d",    (int)$3); update(table, $1, ans); }
                   | doubleID  '=' integerExp                  { sprintf(ans, "%f", (double)$3); update(table, $1, ans); }
;           

assignError:         stringID  '=' integerExp                  {  }
                   | stringID  '=' doubleExp                   {  }
                   | doubleID  '=' stringExp                   {  }
                   | integerID '=' stringExp                   {  }
                   | stringID  '=' typeError                   {  }
                   | doubleID  '=' typeError                   {  }
                   | integerID '=' typeError                   {  }
                   | typeString  undeclrID '=' integerExp      {  }
                   | typeString  undeclrID '=' doubleExp       {  }
                   | typeInteger undeclrID '=' stringExp       {  }
                   | typeDouble  undeclrID '=' stringExp       {  }
                   | typeString  undeclrID '=' typeError       {  }
                   | typeInteger undeclrID '=' typeError       {  }
                   | typeDouble  undeclrID '=' typeError       {  }
;
                                                                                                                 
// Gramatica para declaraciones
declr:               typeInteger  undeclrID '=' integerExp     { sprintf(ans,  "%d",            $4); insert(table, "integer", $2, ans); }
                   | typeDouble   undeclrID '=' doubleExp      { sprintf(ans,  "%f",            $4); insert(table, "double",  $2, ans); }
                   | typeInteger  undeclrID '=' doubleExp      { sprintf(ans,  "%d",       (int)$4); insert(table, "integer", $2, ans); }
                   | typeDouble   undeclrID '=' integerExp     { sprintf(ans,  "%f",    (double)$4); insert(table, "double",  $2, ans); }
                   | typeString   undeclrID '=' stringExp      { insert(table, "string",  $2,   $4); }
                   | typeInteger  undeclrID                    { insert(table, "integer", $2,  "0"); }
                   | typeDouble   undeclrID                    { insert(table, "double", $2, "0.0"); }
                   | typeString   undeclrID                    { insert(table, "string", $2,    ""); }
;

%%

int yyerror(char * s) {
  printf("%s\n", s);
}

int main() {
  table = (list*) malloc(sizeof(list));
  if (yyparse())
     fprintf(stderr, "Successful parsing.\n");
  else
     fprintf(stderr, "error found.\n");
}
