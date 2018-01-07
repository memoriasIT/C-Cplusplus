#include <iostream>
using namespace std;

//Diseña un algoritmo que permita invertir el contenido de un array. El algoritmo no podrá
//utilizar arrays auxiliares. Impleméntalo de forma iterativa y de forma recursiva.
//Array Original: 24 12 45 90 7 9 15.
//Array Invertido: 15 9 7 90 45 12 24.

//- Dos variables valor 1, valor 2
//- Array


//--- DECLARE TYPES AND CONST ---//
const int MAX = 5;
typedef int TArray[MAX];


//--- DECLARE FUNCTIONS ---//
void PedirDatos(TArray& Array1);
void Intercambiar(TArray& Array1, int& V1, int& V2);

//--- MAIN FUNCTION ---//
int main (){
    TArray Array1;
    int V1, V2; //Valores muletilla para el intercambio

    PedirDatos(Array1);


    cout << "Array original: ";
    for (int i = 0; i < MAX; i++){
        cout << Array1[i] << " ";
    }

    Intercambiar(Array1, V1, V2);


    //PRINT OUTPUT
    cout << "\nArray cambiado: ";
    for (int i = 0; i < MAX; i++){
        cout << Array1[i] << " ";
    }
}


//--- FILL ARRAYS ---//
void PedirDatos(TArray& Array1){
    cout << "--- INTRODUCIR VALORES ARRAY 1 ---\n";
    for (int i = 0; i < MAX; i++){
        cout << "Introduzca valor para la posición " << i << " .\n";
        cin >> Array1[i];
    }
}

//--- INTERCAMBIAR ITERATIVA ---//
void Intercambiar(TArray& Array1, int& V1, int& V2){
    for (int i = 0; i < MAX/2; i++){
        V1 = Array1[i];
        V2 = Array1[MAX-i-1];

        Array1[i] = V2;
        Array1[MAX-i-1] = V1;
    }

}
