
//Dise�a una funci�n mayorPrimo que recibe como par�metro un array de tama�o
//TAM (una constante definida) relleno de n�meros naturales y devuelve el mayor
//n�mero primo almacenado. En caso de que no haya n�meros primos, la funci�n
//devolver� el valor 0. Nota: el n�mero 1 no se considera primo.
//Importante: No debes modificar el c�digo ya proporcionado en el campus
//virtual (ejercicio1.cpp) para probar la funci�n. Debes completar el c�digo de
//la funci�n mayorPrimo. Si para su dise�o necesitas m�s procedimientos o
//funciones, puedes a�adirlos. Si el c�digo no funciona correctamente la
//puntuaci�n de este problema ser� de 0 puntos.
//La ejecuci�n del c�digo suministrado una vez dise�ada la funci�n mayorPrimo
//mostrar� por pantalla lo siguiente:
//El contenido del array 1 de prueba es: 6 4 12 0 8 9 46 15 21 12
//En el array no hay ning�n primo
//El contenido del array 2 de prueba

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


const unsigned TAM  = 10;
typedef int TArray [TAM];


int esPrimo (int a){
    bool es = true;
    unsigned n = 2;

    while (n <= sqrt(a) && es == true){
        if (a % n == 0){
            es = false;
        }
        n++;
    }

    return es;
}

int mayorPrimo (const TArray Datos){
    bool encontrado = false;
    int Primo = 0;


    for (int i = 0 ; i < TAM; i++){ //Para todos los numeros del array

        if (esPrimo(Datos[i])){

            if (Datos[i] > Primo){

                Primo = Datos[i];
                encontrado = true;
            }
        }
    }

    if ((encontrado == false)){
        return 0;
    } else {
        return Primo;
    }
}

int main(){
    TArray Datos= {8, 22, 3,6, 2, 7, 56, 11, 5, 9};       //Array lleno de numeros primos
    //TArray Datos= {1,1,1,1,1,1,1,1,1,1};       //Array lleno de numeros primos
    int Primo;

    Primo = mayorPrimo(Datos);  //Buscar mayor numero primo

    if (Primo == 0 || Primo == 1){    //si 0 no hay numeros primos (1 no es primo)
        cout << "En el array no hay ningun primo";
    } else {            //si !=0 imprimir mayor numero primo
        cout << "El mayor primo del array es: " << Primo;
    }

}
