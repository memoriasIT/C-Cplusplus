
//Diseña una función mayorPrimo que recibe como parámetro un array de tamaño
//TAM (una constante definida) relleno de números naturales y devuelve el mayor
//número primo almacenado. En caso de que no haya números primos, la función
//devolverá el valor 0. Nota: el número 1 no se considera primo.
//Importante: No debes modificar el código ya proporcionado en el campus
//virtual (ejercicio1.cpp) para probar la función. Debes completar el código de
//la función mayorPrimo. Si para su diseño necesitas más procedimientos o
//funciones, puedes añadirlos. Si el código no funciona correctamente la
//puntuación de este problema será de 0 puntos.
//La ejecución del código suministrado una vez diseñada la función mayorPrimo
//mostrará por pantalla lo siguiente:
//El contenido del array 1 de prueba es: 6 4 12 0 8 9 46 15 21 12
//En el array no hay ningún primo
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
