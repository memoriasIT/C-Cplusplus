/*
Confecciona un bucle que lea de teclado un texto car�cter a car�cter hasta localizar un punto, y
que al final d� como salida el n�mero de comas encontradas, y el n�mero de caracteres le�dos.
*/

#include <iostream>

using namespace std;

int main() {
    char c;
    unsigned ncar, ncom;
    cout << "Introduzca un texto finalizado en .";
    cin >> c;

    while (c != '.') {
	    cin.get(c);
	        if(c = ',') {
	            ncom ++;
	        }
	        else {
	            ncar ++;
	        }
    }

    cout << ncom << ncar;
	return 0;
}

