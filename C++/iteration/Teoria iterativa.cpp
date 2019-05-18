#include <iostream>
using namespace std;

const bool encendido = true;

int main() {
bool interruptor;

/*
CONVERSIONES AUTOMÁTICAS A VARIABLES MÁS GRANDES
------------------------------------------------
char, short, enum
int
unsigned int
long
unsigned long
float
double
long double
*/
cout << "INTERRUPTOR BOOLEANO" << endl;
interruptor = false; // se puede usar true/false o un numero 0/<0
cin >> interruptor;

if (interruptor) {
    cout << "El interruptor está encendido" << endl;
} else {
    cout << "El interruptor está apagado" << endl;
}

char a = 'a'; //Char se puede poner como letra o numero
char b = 75;
char c = 'a' +2;

int entero = 65;
double real = 23.23;

cout << "CARACTERES" << endl;
cout << a << endl;
cout << b << endl;
cout << c << endl;

cout << "CONVERSION DE TIPOS" << endl;
cout << "Entero --> " << double(entero) << " Real"<< endl;
cout << "Real (double o float) --> " << int(real) << " Entero (int)"<< endl;


cout << "ASIGNACION ESPECIALES" << endl;
entero++; //+1 o -1
entero--;

real += entero; // Operacion a la misma variabble con otra
real *= entero;
entero %= entero; // Solo se puede con dos mismo tipo
real -= entero;
real += entero;



cout << sizeof(encendido) << endl; // Tamaño en memoria


/*
cin.get(c);  CUENTA ESPACIOS, NO FUNCIONA POR ALGUN MOTIVO

==  igual
!=  no igual

<   menor
<=  menor o igual
>   mayor
>=  mayor o igual
*/

entero = 5;
real = 7;

if (entero == 6 && real ==7){ // Se tienen que cumplir las dos
    cout << "Se ejecuta" << endl;

} else {
    cout << "No se ejecuta" << endl;
}


if (entero == 6 || real ==7){ //Con una basta
    cout << "Se ejecuta" << endl;

} else {
    cout << "No se ejecuta" << endl;
}

}
