import scala.collection.mutable.Stack
import scala.collection.Searching._

/********************************************************
* Compilación: scalac AFNE.scala Main.scala             *
*                                                       *
* Ejecución: scala Main archivoAutomata archivoCadenas  *
*                                                       *
* Autor: Pérez Colula Miguel Ángel                      *
*                                                       *
* grupo: 3cv1                                           *
*********************************************************/
class AFNE(states: Array[Int], alphabet: Array[Char], start: Int) {
  
  require(states.contains(start), "Estado inicial inválido")
  
  // Lista de adyacencia
  private val nodes  = Array.fill(states.size) { List[(Int, Int)]() }
  // Estado de aceptación
  private val accept = Array.fill(states.size) { false }
  // Indice del epsilon
  private val eps    = findIndex('E')
  
  /**************************************************
  * Objetivo: establecer un estado de aceptación    *
  *                                                 *
  * Párametros: estado                              *
  **************************************************/
  def setFinalState(n: Int) = accept(findIndex(n)) = true
  
  /**************************************************
  * Objetivo: Agregar una transición al grafo       *
  *                                                 *
  * Párametros: nodo base, nodo destino, símbolo    *
  **************************************************/
  
  def addTransition(u: Int, v: Int, s: Char) =
    nodes(findIndex(u)) ::= findIndex(v) -> findIndex(s)
  /**************************************************
  * Objetivo: obtener todos los caminos que aceptan *
  *           una cádena válida.                    *
  *                                                 *
  * Párametros: cádena a validar                    *
  *                                                 *
  * Retorno: caminos encontrados                    *
  **************************************************/
  def acceptedPaths(string: String) = {
    if (hasCycle())
      throw new IllegalArgumentException("El automata contiene un ciclo")
    // Mapea cadena a indices
    val syms = Array.tabulate(string.size) { i => findIndex(string(i)) }
    // Caminos encontrados
    var answ = List[String]()
    // Camino actual
    var path = Stack[(Int, Char)]()
    
    /**************************************************
    * Objetivo: hacer una búsqueda de los caminos que *
    *           aceptan una cedena valida.            *
    *                                                 *
    * Párametros: nodo actual, caracter actual        *
    **************************************************/
    def dfs(s: Int, i: Int): Unit = {
      if (i == string.size && accept(s))
        answ ::= " => " + start + " -> " +  path.reverse.mkString(" -> ")
      for ((node, sym) <- nodes(s)) {
        if (sym == eps) {
          path.push(states(node) -> 'E')
          dfs(node, i + 0)
          path.pop
        }
        else if (i < string.size && sym == syms(i)) {
          path.push(states(node) -> string(i))
          dfs(node, i + 1)
          path.pop
        }
      }
    }
    
    dfs(findIndex(start), 0)
    answ
  }
  
  /**************************************************
  * Objetivo: Valida la existencia de un ciclo con  *
  *           con epsilon en el automata            *
  *                                                 *
  * Retorno: si existe un ciclo con epsilon         *
  **************************************************/
  def hasCycle() = {
  
    val marked = Array.fill(states.size) { false }
    val linked = Array.fill(states.size) { false }
    var cycle  = false
    
    def dfs(s: Int): Unit = {
      marked(s) = true
      linked(s) = true
      for ((node, sym) <- nodes(s)) {
        if (sym == eps)
          if (!marked(node)) 
            dfs(node)
          else if (linked(node))
            cycle = true
      }
      linked(s) = false
    }
    
    for (idx <- nodes.indices; if !cycle)
      if (!marked(idx))
        dfs(idx)
    
    cycle
  }
  
  
  /**************************************************
  * Objetivo: encontrar el índice de un estado.     *
  *                                                 *
  * Párametros: estado                              *
  *                                                 *
  * Retorno: indice del estado                      *
  **************************************************/
  private def findIndex(n: Int) = states.search(n) match {
    case Found(i) => i
    case _ => throw new IllegalArgumentException("Estado inválido: "  + n)
  } 
  
  /**************************************************
  * Objetivo: encontrar el índice de un símbolo.    *
  *                                                 *
  * Párametros: símbolo                             *
  *                                                 *
  * Retorno: indice del símbolo                     *
  **************************************************/
  private def findIndex(s: Char) = alphabet.search(s) match {
    case Found(i) => i
    case _ => throw new IllegalArgumentException("Símbolo inválido: " + s)
  }
  
}