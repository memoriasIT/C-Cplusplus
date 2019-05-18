/*
Tres caracteres --> numero natural

Datos de entrada correctos
*/

#include <iostream>

using namespace std;

float esperar;

int main(int, char **)
{
    char valor1, valor2, valor3;
    cout << "Introduzca tres caracteres:";
    cin >> valor1 >> valor2 >> valor3;
    int v1 = valor1;
    int v2 = valor2;
    int v3 = valor3;
    cout << "El primer caracter '" << valor1 << "' tiene un codigo ASCII de: " << v1 << endl;
    cout << "El segundo caracter '" << valor2 << "' tiene un codigo ASCII de: " << v2 << endl;
    cout << "El tercer caracter '" << valor3 << "' tiene un codigo ASCII de: " << v3 << endl;

    if (47 > v1 < 58) {
        cout >> ""
    }

    cin >> esperar;
    return 0;
}
