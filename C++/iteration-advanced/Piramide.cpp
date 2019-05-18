#include <iostream>
using namespace std;

int PedirDatos();
void Imprimir(unsigned filas);
void ImprimirFila();
void ImprimirColumna();

int main(){
unsigned filas=0;

filas = PedirDatos();

Imprimir(filas);

}


int PedirDatos(){
unsigned filas;

cout << "Introduce numero de filas: ";
cin >> filas;
return filas;

}

void Imprimir(unsigned filas){

for(unsigned i= 1; i <= filas; i++){
  for(unsigned j = 1; j <= (filas - i); j++){
   cout << " ";
  }
  for(unsigned j= 1; j <= i; j++){
   cout << j;
  }
  for(unsigned h = (i-1); h >= 1; h-- ){
   cout << h;
  }

  cout << endl;
 }
}





