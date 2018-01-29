#include <iostream>
using namespace std;

const unsigned MAX = 10;
typedef int TArray [MAX];

struct TDatos {
    TArray sec;
    unsigned tam;
};

void leer (TDatos& datos){
    cout << "Introduzca una secuencia de numeros (maximo 50 y para terminar 0): ";
    datos.tam = 0;
    int a;
    do {
       cin >> datos.sec[datos.tam];
       datos.tam++;

       cout << "El tamanio es " << datos.tam << " tiene un valor de " <<datos.sec[datos.tam-1]<<endl;
    }while (datos.tam < MAX && datos.sec[datos.tam-1] != 0);

    cout << datos.tam;
    /*for (unsigned i = 0; i < datos.tam; i++){
        cout << datos.sec[i] << endl;
    }*/
}

int main () {
    TDatos datos;
    leer (datos);
    return 0;
}
