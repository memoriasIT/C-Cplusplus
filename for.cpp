#include <iostream>
using namespace std;

int main(){
double suma = 0, valorinicial, valorfinal;

cout << "Introduzca un valor inicial: ";
cin >> valorinicial;

cout << "Introduzca un valor final: ";
cin >> valorfinal;

for (valorinicial; valorinicial <= valorfinal; valorinicial++){
    suma = suma + valorinicial;
}
cout << "El resultado de la suma es: "<< suma;
}
