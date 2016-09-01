import scala.util.Success
import scala.util.Failure
import java.util.Arrays
import scala.util.Try


/********************************************************
* Compilación: scalac AFNE.scala Main.scala              *
*                                                       *
* Ejecución: scala Main archivoAutomata archivoCadenas  *
*                                                       *
* Autor: Pérez Colula Miguel Ángel                      *
*                                                       *
*                                                       *
*********************************************************/

object Main extends App {
  print(Console.BOLD)
  Try {
    // Lee archivo del automata
    var source = scala.io.Source.fromFile(args(0))
    // Filtra líneas vacías
    var lines  = source.getLines filter { _.length > 0 }

    // Extrae estados, alfabeto y símbolo inicial
    val states = lines.next.split(",").map(_.toInt).sorted
    val alphabet = lines.next.split(",").map(s => s(0)).sorted
    val start = lines.next.toInt

    // Crea nuevo automata
    val automata = Try(new AFNE(states, alphabet, start)) match {
      case Success(afn) => afn
      case Failure(e) => {
        println(s"[Error] ${e.getMessage}\n")
        new AFNE(states, alphabet,  states(0))
      }
    }

    // Establece conjunto de estados finales
    for (i <- lines.next.split(",") map { _.toInt })
      Try(automata.setFinalState(i)) match {
        case Failure(e) => println(s"[Error] ${e.getMessage}\n") 
        case Success(_) => ()
      }

    // Establece transiciones
    for (line <- lines) {
      val data = line.split(",")
      val u = data(0).toInt
      val v = data(2).toInt
      val s = data(1)(0)
      Try(automata.addTransition(u, v, s)) match {
        case Failure(e) => println(s"[Error] ${e.getMessage}\n") 
        case Success(_) => ()
      }
    }

    // Lee archivo de cadenas
    source = scala.io.Source.fromFile(args(1))
    // Filtra líneas vacías
    lines  = source.getLines filter { _.length > 0}

    // Valida cadenas
    for (line <- lines)
      Try(automata.acceptedPaths(line)) match {
        case Success(accepted) if accepted.size  > 0 => {
          print(Console.GREEN + "Cadena válida: " + Console.WHITE + line + "\n  ")
          print(accepted.mkString("\n  "))
          println("\n")
        }
        case Success(accepted) if accepted.size == 0 =>
          println(Console.RED + "Cadena inválida: " + Console.WHITE + line + "\n")
        case Failure(e) =>
          println(s"[Error] ${e.getMessage}\n")
      }

  } match {
    case Failure(_) => println("[Error] Archivo inválido")
    case Success(_) => ()
  }
  print(Console.RESET)
}
