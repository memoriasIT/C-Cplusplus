/*
Confecciona un bucle que lea de teclado un texto car�cter a car�cter hasta localizar un punto, y
que al final d� como salida el n�mero de comas encontradas, y el n�mero de caracteres le�dos.
*/

#include <iostream>

using namespace std;

int main() {
    char c;
    unsigned ncar = 0, ncom = 0;
    cout << "Introduzca un texto finalizado en .: \n";
    cin >> c;

    while (c != '.') {
	    cin.get(c);
	        if(c == ',') {
	            ncom ++;
	        }
	        else {
	            ncar ++;
	        }
    }

    cout << "N�mero de comas: " << ncom << "    N�mero de car�cteres totales: "<< ncar+ncom;
	return 0;
}

