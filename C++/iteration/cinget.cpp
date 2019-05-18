#include <iostream>

using namespace std;
int main(){
    char c;
    unsigned comas = 0, caracteres = 0;
    cout << "Introduzca el texto terminado en un punto:\n";
    do {
        // cin >> c; asi no se cuentan los espacios en blanco
        cin.get(c);
        caracteres++;
        if (c == ',') {
            comas++;
        }
    } while (c != '.');
    caracteres--; // no contamos el punto terminador del texto
    cout << "Caracteres: " << caracteres << endl;
    cout << "De ellos, son comas: " << comas << endl;
    return 0;
}
