#include <iostream>
using namespace std;

// ---- PROCEDIMIENTOS Y FUNCIONES ---- //
const int MAX = 'Z' - 'A' + 'z' - 'a' + 2;
typedef int TArray[MAX];

void Pedirdatos(char& a, TArray& Frecuencia); //Paso por referencia (Vamos a modificar)
void GuardarArray(char& a, TArray& Frecuencia);
void Frecuencia (TArray Frecuencia);
void Imprimir(TArray Frecuencia);

// ---- FUNCION PRINCIPAL ---- //
int main(){
    char a;
    TArray Frecuencia = {0}; //Inicializar el array en 0

    Pedirdatos(a, Frecuencia);
    Imprimir(Frecuencia);
}

// ---- PROCEDIMIENTOS PEDIR DATOS ---- //
void Pedirdatos(char& a,TArray& Frecuencia){ //PROCEDIMIENTO - +1 valor
    cin.get(a);
    while (a != '.'){
        GuardarArray(a, Frecuencia);
        cin.get(a);
    }
}
// ---- GUARDAR DATOS EN EL ARRAY SEGÚN POSICIÓN ---- //
void GuardarArray(char& a, TArray& Frecuencia){
    if (a >= 'A' && a <= 'Z'){
        Frecuencia[int(a) - 'A']++;
    } else if(a >= 'a' && a <= 'z'){
        Frecuencia[int(a) - 'a'+26]++;
    }
}
// ---- IMPRIMIR DATOS ARRAY ---- //
void Imprimir(TArray Frecuencia){
    for (int i = 0; i < MAX; i++){
        if (Frecuencia[i] != 0){
            if (i >= 0 && i <= 'Z'- 'A'){
              cout << char(65+i) << ": "<<Frecuencia[i]<<endl;
            }
            if (i >= 'Z'- 'A' + 1 && i <= 'z'){
              cout << char(71 + i) << ": " <<Frecuencia[i]<<endl;
            }
        }
    }
}
