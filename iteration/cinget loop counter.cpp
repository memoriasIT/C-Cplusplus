/*
Confecciona un bucle que lea de teclado un texto carácter a carácter hasta localizar un punto, y
que al final dé como salida el número de comas encontradas, y el número de caracteres leídos.
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

    cout << "Número de comas: " << ncom << "    Número de carácteres totales: "<< ncar+ncom;
	return 0;
}

