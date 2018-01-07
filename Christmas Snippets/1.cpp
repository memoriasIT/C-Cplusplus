#include <iostream>
using namespace std;

// ---- PROCEDIMIENTOS Y FUNCIONES ---- //
void Pedirdatos(unsigned& num); //Paso por referencia (Vamos a modificar)
int FuncPedirdatos(unsigned& num);
void SiPar(unsigned num);

// ---- FUNCION PRINCIPAL ---- //
int main(){
    unsigned num;

//  Pedirdatos(num);
    num = FuncPedirdatos(num);

    //Comprobar si es par
    SiPar(num);

}

// ---- PROCEDIMIENTOS PEDIR DATOS ---- //
//void Pedirdatos(unsigned& num){ //PROCEDIMIENTO - +1 valor
//    cout << "Introduzca valor para num";
//    cin >> num;
//}

// ---- FUNCION PEDIR DATOS ---- //
int FuncPedirdatos(unsigned& num){ //FUNCION - 1 valor
    cout << "Introduzca valor para num";
    cin >> num;

    return num;
}

void SiPar(unsigned num){
    if (num % 2 == 0){ //Modulo de dos para saber si es par
        cout << "Es par";
    } else {
        cout << "No es par";
    }
}
