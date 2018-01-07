#include <iostream>
using namespace std;

// ---- PROCEDIMIENTOS Y FUNCIONES ---- //
void Pedirdatos(unsigned& num); //Paso por referencia (Vamos a modificar)
void CalcularPrecio(unsigned num);

const unsigned Unidad1 = 100;
const unsigned Unidad2 = 95;
const unsigned Unidad3 = 90;
const unsigned Unidad4 = 85;


// ---- FUNCION PRINCIPAL ---- //
int main(){
    unsigned num;

    Pedirdatos(num);

    CalcularPrecio(num);
}

// ---- PROCEDIMIENTOS PEDIR DATOS ---- //
void Pedirdatos(unsigned& num){ //PROCEDIMIENTO - +1 valor
    cout << "Introduzca valor para num";
    cin >> num;
}

void CalcularPrecio(unsigned num){
    unsigned precio;

    if (num == 1){
        precio = num * Unidad1;
        cout << "El precio total es " << precio;
    } else if (num == 2){
        precio = num * Unidad2;
        cout << "El precio total es " << precio;
    } else if (num == 3){
        precio = num * Unidad3;
        cout << "El precio total es " << precio;
    }  else if(num >= 4){
        precio = num * Unidad4;
        cout << "El precio total es " << precio;

    }
}
