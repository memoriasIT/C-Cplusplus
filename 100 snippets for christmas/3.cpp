
#include <iostream>
using namespace std;

// ---- PROCEDIMIENTOS Y FUNCIONES ---- //
void Pedirdatos(unsigned& x, unsigned& y); //Paso por referencia (Vamos a modificar)
bool May10(unsigned x, unsigned y);

// ---- FUNCION PRINCIPAL ---- //
int main(){
    unsigned x, y;

    Pedirdatos(x, y);

    if (May10(x, y)){
        cout << "Es mayor que 10";
    } else {
        cout << "No es mayor que 10";
    }
}

// ---- PROCEDIMIENTOS PEDIR DATOS ---- //
void Pedirdatos(unsigned& x, unsigned& y){ //PROCEDIMIENTO - +1 valor
    cout << "Introduzca valor para x";
    cin >> x;
    cout << "Introduzca valor para y";
    cin >> y;
}
// ---- ES MAYOR QUE 10 ---- //
bool May10 (unsigned x, unsigned y){    //Funcion booleana
    bool EsMayor = false;               //Declarar variable booleana true/false
    if (x > 10 && y > 10){              //Procedimiento para comprobar lo que sea
        EsMayor = true;                 //Si se cumple se cambia la variable
    }
    return EsMayor;                     //Devolvemos la variable bool
}
