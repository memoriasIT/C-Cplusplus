//Diseña una función booleana que dados dos registros de tipo Vector como parámetros,
//devuelva TRUE si son iguales y FALSE en otro caso. Dos vectores son iguales si contienen los
//mismos elementos y en el mismo orden relativo, suponiendo que el primer elemento sigue al
//último. Por ejemplo, si los arrays fueran:
//[‘A’,’C’,’D’,’F’,’E’]
//[‘D’,’F’,’E’,’A’,’C’]
//la función devolvería TRUE.
//Supón, además, que cada carácter aparece a lo sumo una vez.

#include <iostream>
using namespace std;

//--- DECLARE CONSTANTS AND DATATYPES ---//
const int MAX = 10;
typedef char TArray[MAX];
struct TDatos {
    TArray Array;
    int tam;
};


//--- DECLARE FUNCTIONS ---//
void PedirDatos(TDatos& Array1, TDatos& Array2);
bool iguales(TDatos& Array1, TDatos& Array2);

//--- MAIN FUNCTION ---//
int main (){
    TDatos Array1;
    TDatos Array2;


    PedirDatos(Array1, Array2);

    if (iguales(Array1, Array2)){
        cout << "Son iguales";
    } else {
        cout << "No son iguales";
    }
    return 0;

}

void PedirDatos(TDatos& Array1, TDatos& Array2){
    cout << "Introduce secuencia de letras terminada en punto y como máximo " << MAX << " .\n";
    Array1.Array;
}

bool iguales(const TDatos& Array1, const TDatos& Array2){
    bool SonIguales = false;


    return SonIguales;
}
