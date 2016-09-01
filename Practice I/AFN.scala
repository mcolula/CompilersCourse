import scala.collection.mutable.Stack
import scala.collection.Searching._

class AFN(states: Array[Int], alphabet: Array[Char], start: Int) {
  
  require(states.contains(start), "Estado inicial inválido")
  // Lista de adyacencia
  private val nodes  = Array.fill(states.size) { List[(Int, Int)]() }
  // Estado de aceptación
  private val accept = Array.fill(states.size) { false }
  
  def setFinalState(n: Int) = accept(findIndex(n)) = true
  
  def addTransition(u: Int, v: Int, s: Char) = 
    nodes(findIndex(u)) ::= findIndex(v) -> findIndex(s)
  
  def acceptedPaths(string: String) = {
    // Mapea cadena a indices
    val syms = Array.tabulate(string.size) { i => findIndex(string(i)) }
    // Caminos encontrados
    var answ = List[String]()
    // Camino actual
    var path = Stack[(Int, Char)]()
    
    def dfs(s: Int, i: Int): Unit = {
      if (i == string.size && accept(s))
        answ ::= " => " + start + " -> " +  path.reverse.mkString(" -> ")
      for ((node, sym) <- nodes(s))
        if (i < string.size && sym == syms(i)) {
          path.push(states(node) -> string(i))
          dfs(node, i + 1)
          path.pop
        }
    }
    
    dfs(findIndex(start), 0)
    answ
  }
  
  private def findIndex(n: Int) = states.search(n) match {
    case Found(i) => i
    case _ => throw new IllegalArgumentException("Estado inválido: "  + n)
  } 
  
  private def findIndex(s: Char) = alphabet.search(s) match {
    case Found(i) => i
    case _ => throw new IllegalArgumentException("Símbolo inválido: " + s)
  }
  
}