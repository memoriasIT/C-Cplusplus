
#include <iostream>
using namespace std;

// ---- PROCEDIMIENTOS Y FUNCIONES ---- //
void Pedirdatos(char& a); //Paso por referencia (Vamos a modificar)
bool Mayusc(char a);

// ---- FUNCION PRINCIPAL ---- //
int main(){
    char a;

    Pedirdatos(a);

    if (Mayusc(a)){
        cout << "Es Mayusc";
    } else {
        cout << "No es Mayusc";
    }
}

// ---- PROCEDIMIENTOS PEDIR DATOS ---- //
void Pedirdatos(char& a){ //PROCEDIMIENTO - +1 valor
    cout << "Introduzca valor para a  ";
    cin >> a;
}
// ---- ES MAYOR QUE 10 ---- //
bool Mayusc(char a) {                  //Funcion booleana
    bool Mayusc = false;               //Declarar variable booleana true/false
    if (int(a) >= 'A' && a <= 90){    //Procedimiento para comprobar lo que sea
        Mayusc = true;                 //Si se cumple se cambia la variable
    }
    return Mayusc;                     //Devolvemos la variable bool
}
