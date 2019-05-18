#include <iostream>
using namespace std;

int main() {
  // Declaracion de variables
  int entero;
  float flotante1, flotante2;
  bool boleano;
  const float pi = 3.14159;

  // Asignación de valores a variables
  entero = 3;
  flotante1 = 14.53;
  boleano = false;
  bool boleano2 = 1;
  string nombre = "pedrojesusalcantara";

  // Imprimir variables
  cout << "entero: "    << entero    << endl;
  cout << "flotante1: " << flotante1 << endl;
  cout << "flotante2: " << flotante2 << endl;
  cout << "boleano: "   << boleano   << endl;
  
  // Boleano sin inicializar 
  cout << "boleano2: "  << boleano2  << endl;
  
  // Strings
  cout << "string: "    << nombre  << endl;
  nombre += "delosrios";
  cout << "String Concatenado: " << nombre << endl;

  // true = 1
  boleano2 = true;
  cout << "trueboleano2: " << boleano2 << endl;

  cout << "pi: " << pi <<endl;
}
