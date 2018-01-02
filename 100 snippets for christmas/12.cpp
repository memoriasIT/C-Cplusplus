//Un histograma es una gráfica que muestra la frecuencia con que aparecen en una lista dada
//los distintos valores que la pudieran formar. Por ejemplo, si los valores de una lista pueden
//estar comprendidos entre 0 y 9, y la lista es:
//6 4 4 1 9 7 5 6 4 2 3 9 5 6 4
//entonces su histograma es:
//        *
//        *   *
//        * * *     *
//  * * * * * * *   *
//0 1 2 3 4 5 6 7 8 9
//Esto indica que los dígitos 0 y 8 no aparecen ninguna vez, que 1, 2, 3 y 7 aparecen una vez, 5 y
//9 dos veces, etc. Escribe un programa que lea una lista de números comprendidos entre 0 y 9
//separados por espacios (la lista acabará cuando se lea un número negativo, y a priori no se
//puede determinar cuántos números contiene) e imprima por pantalla un histograma como el
//anterior. Para ello deben usarse funciones y arrays.

#include <iostream>
using namespace std;

const int MAX = 10; //valores que puede tomar 0-9
typedef int TArray[MAX];

void PedirDatos(TArray& Frecuencia){
    int n;

    do{
        cin >> n;
        if (n >= 0 && n < 9){
            Frecuencia[n]++;
        }
    } while (n >= 0);
}

int Vmaximo(TArray Frecuencia){
    int maximo = Frecuencia[0];
    for (int i = 0; i < MAX; i++){
        if (Frecuencia[i] > maximo){
            maximo = Frecuencia[i];
        }
    }
    return maximo;
}

void Asteriscos(TArray Frecuencia, unsigned linea){
    for (int i = 0; i < MAX; i++){
        if (Frecuencia[i] >= linea){
            cout << "* ";
        } else{
            cout << "  ";
        }
    }
    cout << "\n";
}

void historiograma(TArray Frecuencia){
    int maximo;
    maximo = Vmaximo(Frecuencia);

    for (unsigned linea = maximo; linea >= 1; linea--){
        Asteriscos(Frecuencia, linea);
    }

    for (int i = 0; i < MAX; i++){ //imprimir numeros 0 - 9
        cout  << i<< " ";
    }
}

int main(){
    TArray Frecuencia = {0};//inicializar el array frecuencia en 0

    PedirDatos(Frecuencia); //pedir datos hasta numero negativo (no se puede saber cuantos numeros tiene)

    historiograma(Frecuencia);
}


