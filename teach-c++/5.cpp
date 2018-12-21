#include <iostream>
using namespace std;


void imprimir(string &nombre) {

  cout << nombre;
  nombre = "jesus";
}



int main(){
  string nombre = "Pedro";


  imprimir(nombre);
  cout << nombre;
}
