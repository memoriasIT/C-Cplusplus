#include <iostream>
using namespace std;

//Los alumnos de informática desean celebrar una comida un día del presente mes en el que
//puedan acudir todos. Se pide realizar un algoritmo que recoja de cada alumno los días que le
//vendría bien ir a la comida, e imprima las fechas concordantes para todos los alumnos. Los
//datos se introducirán por teclado. Primero se introducirá el número de alumnos que
//intervienen. Después, por cada alumno se introducirá una única línea con los números de los
//días libres separados por espacios (un 0 para terminar).


//OBJETIVOS:
//-* Recoger días que le vienen bien
//-* Imprimir fechas concordantes para TODOS los alumnos
//-* Datos introducidos por teclado
//    -* Primero pedir numero de alumnos que intervienen
//    -* Se introducen los días posibles

// ----- CONSTANTES Y REGISTROS ----- //
const int MAX = 31+1; //Tamaño del array
typedef int TFrec [MAX]; // Declarar el array de tamaño "MAX"

// ----- FUNCIONES Y PROCEDIMIENTOS ----- //
void Pedirdatos(int& numalumnos, TFrec& frec);
void Imprimir(TFrec frec, int numalumnos);

// ----- FUNCION PRINCIPAL ----- //
int main(){
    TFrec frec= {0};
    int numalumnos;

    Pedirdatos(numalumnos, frec);

    Imprimir(frec, numalumnos);
}

void Pedirdatos(int& numalumnos, TFrec& frec){
    unsigned dia, cont = 0;
    cout << "Introduzca numero de alumnos que intervienen: ";
    do{
        cin >> numalumnos;
    }while (numalumnos == 0);

    cout << "Introduzca dias que podria acudir acabando en 0.\n";
    cout << "--- ALUMNO " << cont+1 << " ---\n";
//    cin >> dia;
    while (cont != numalumnos){
        cin >> dia;
        frec[dia]++;
        if (dia == 0){
            cont++;
            if (cont != numalumnos){
            cout << "--- ALUMNO " << cont+1 << " ---\n";
            }
        }
    }

    cout << "\n\n";
}

void Imprimir(TFrec frec, int numalumnos){
    int maximo;
    bool noganador = true;
    
    cout << "Los resultados de la encuesta fueron los siguientes: \n";
    for (int i = MAX - 1; i > 0; i--){ //Printing array
        if (frec[i] != 0){
            cout << "Dia " << i << " :  "<< frec[i]<<endl;
            if (frec[i] == numalumnos){
                cout << "** POSIBLE GANADOR **\n";
                noganador = false;
            }
        }
    
    }
    if (noganador == true){
        cout << "No existe dia posible para TODOS los alumnos.";
    }
}
