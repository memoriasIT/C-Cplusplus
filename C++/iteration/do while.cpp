#include <iostream>
using namespace std;

int main (){

int numero, busqueda;

cout << "Introduzca valor a buscar: ";
cin >> numero;

cout << "Introduzca cadena de numeros separados por espacio y acabado en '0': ";
cin >> busqueda;

do{
     cin >> busqueda;
} while (numero != busqueda && busqueda != 0);

if (numero == busqueda){
    cout << "Numero encontrado";
} else {
    cout << "ERROR 404 - Numero not found";
}

}
