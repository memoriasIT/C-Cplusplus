#include <iostream>
using namespace std;

// DECLARACIONES DE FUNCIONES
string pregunta();
void procesarnumero(string numero, int longitud);

int main()
{
  // 8735 → 5378 
  // Preguntar numero
  string numero = pregunta();

  int longitud = numero.size();
  cout << "La longitud de " << numero << " es de " << longitud <<endl;

  procesarnumero(numero, longitud);

  return 0;
}


string pregunta() {
  string resultado;
  cout << "Introduce valor entero: ";
  cin >> resultado;

  return resultado;
}

void procesarnumero(string numero, int longitud){
   for (int cont = 0; cont < longitud; cont++){
     int letraanumero = ((int) numero[cont]) - '0';
     cout << letraanumero;
   } 

  for (int cont = 0; cont <= longitud; cont++){
    cout << numero[longitud-cont];
  } 
}
