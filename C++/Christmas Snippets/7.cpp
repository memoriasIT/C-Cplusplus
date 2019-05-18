#include <iostream>
using namespace std;


//Diseña una función que recibe como parámetros de entrada un array de números enteros a y un
//número entero num, y devuelve true si el número num está contenido en a, y false en otro
//caso.


// ----- DECLARAR VARIABLES ---- //
const int MAX = 10;
typedef int TArray[MAX];
struct TDatos{
    TArray ArrayDatos;
    int Busqueda;
};

// ----- DECLARAR FUNCIONES ---- //
void Pedirdatos(TDatos& Datos);
bool LinearSearch(TDatos Datos);

// ----- FUNCION PRINCIPAL ---- //
int main (){
    TDatos Datos;
    Datos.ArrayDatos;
    Datos.Busqueda;

    Pedirdatos(Datos);
    if (LinearSearch(Datos)){
        cout << "Encontrado";
    } else {
        cout << "No encontrado";
    }
}

// ----- PEDIR DATOS ---- //
void Pedirdatos(TDatos& Datos){
    for (int i = 0; i < MAX; i++){
        cout << "Introduce valor para la posición " << i << endl;
        cin >> Datos.ArrayDatos[i];
    }
    cout << "Introduce valor a buscar";
    cin >> Datos.Busqueda;
}

// ----- LINEAR SEARCH ---- //
bool LinearSearch(TDatos Datos){
    bool encontrado = false;
    int index = 0;

    while ((index < MAX) && (Datos.ArrayDatos[index] != Datos.Busqueda)){
        index++;
    }
    return (index < MAX);
}
