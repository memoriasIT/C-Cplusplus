#include <iostream>
using namespace std;

//Se dispone de un array de 80 números enteros en el que al menos hay dos números que son
//iguales y dos que son distintos. Obtenga una función que tomando como parámetro dicho array,
//devuelva un elemento del array que sea mayor que el mínimo de éste.
//
//2 NUMEROS IGUALES
//2 DISTINTOS
//
//TOMAR UN ARRAY
//
//TOMAR UN VALOR CUALQUIERA MAYOR QUE EL MINIMO
//
// --- POSIBLES SOLUCIONES:
//            1- CALCULAR EL MAYOR DEL ARRAY
//            2- ORDENAR EL ARRAY
//            3- VER SI EL PRIMERO ES MAYOR QUE EL SEGUNDO
//            4- CALCULAR EL MINIMO Y MAXIMO

//-- DECLARAR CONSTANTES -- //
const int MAX = 10; //Deberia de ser 80 pero da palo probar 80 numeros
typedef int TArray[MAX];
struct TDatos{
    TArray ArrayDatos;
    int V1;
    int V2;
};

//-- DECLARAR FUNCIONES --//
void LlenarArray(TDatos& Datos);
void CalcularMayor(TDatos& Datos);
void CalcularMenor(TDatos& Datos);
void DistintoMayor(TDatos& Datos);
void QuickSort(TDatos& Datos);
void Imprimir(TDatos& Datos);

//-- FUNCION PRINCIPAL --//
int main (){
    TDatos Datos;
    Datos.ArrayDatos;
    Datos.V1 = 0;
    Datos.V2 = 0;

    LlenarArray(Datos);


    //METODO 1
    CalcularMayor(Datos);
    DistintoMayor(Datos);
    Imprimir(Datos);

    //METODO 2
    QuickSort(Datos);
    //METODO 3

    //METODO 4
    CalcularMayor(Datos);
    CalcularMenor(Datos);
    Imprimir(Datos);
}

void LlenarArray(TDatos& Datos){
    for (int i = 0; i < MAX; i++){
        cout << "Introduce valor para la posición " << i << "\n";
        cin>> Datos.ArrayDatos[i];
    }
}

void CalcularMayor(TDatos& Datos){
    for (int i = 0; i < MAX; i++){
        if (Datos.ArrayDatos[i] > V1){ //V1 ES VALOR MAXIMO
            Datos.V1 = Datos.ArrayDatos[i];
        }
    }
}

void CalcularMenor(TDatos& Datos){
    for (int i = 0; i < MAX; i++){
        if (Datos.ArrayDatos[i] < V2){ //V2 ES VALOR MINIMO
            Datos.V2 = Datos.ArrayDatos[i];
        }
    }
}

void DistintoMayor(TDatos& Datos){
    int i = 0;
    while(i < MAX && Datos.V2 != Datos.V1){
        if (Datos.ArrayDatos[i] =! V1){ //V1 ES VALOR MAXIMO
            Datos.V2 = Datos.ArrayDatos[i];
        }
    i++;
    }
}

void Imprimir(TDatos& Datos){
    cout << "Los resultados son: \n"<< V1 << "\n";
    cout << V2 << "\n";
}


void QuickSort(TDatos& Datos){

}
