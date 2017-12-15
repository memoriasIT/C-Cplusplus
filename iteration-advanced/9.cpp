#include <iostream>
using namespace std;

//Los alumnos de inform�tica desean celebrar una comida un d�a del presente mes en el que
//puedan acudir todos. Se pide realizar un algoritmo que recoja de cada alumno los d�as que le
//vendr�a bien ir a la comida, e imprima las fechas concordantes para todos los alumnos. Los
//datos se introducir�n por teclado. Primero se introducir� el n�mero de alumnos que
//intervienen. Despu�s, por cada alumno se introducir� una �nica l�nea con los n�meros de los
//d�as libres separados por espacios (un 0 para terminar).


//OBJETIVOS:
//-* Recoger d�as que le vienen bien
//-* Imprimir fechas concordantes para TODOS los alumnos
//-* Datos introducidos por teclado
//    -* Primero pedir numero de alumnos que intervienen
//    -* Se introducen los d�as posibles

// ----- CONSTANTES Y REGISTROS ----- //
const int MAX = 31+1; //Tama�o del array
typedef int TFrec [MAX]; // Declarar el array de tama�o "MAX"

// ----- FUNCIONES Y PROCEDIMIENTOS ----- //
void Pedirdatos(int& numalumnos, int frec[MAX]);
void Imprimir(int frec[MAX], int numalumnos);

// ----- FUNCION PRINCIPAL ----- //
int main(){
    TFrec frec= {0};
    int numalumnos;

    Pedirdatos(numalumnos, frec);

    Imprimir(frec, numalumnos);
}

void Pedirdatos(int& numalumnos, int frec[MAX]){
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

void Imprimir(int frec[MAX], int numalumnos){
    int maximo;

    cout << "Los resultados de la encuesta fueron los siguientes: \n";
    for (int i = MAX - 1; i > 0; i--){ //Printing array
        if (frec[i] != 0){
            cout << "Dia " << i << " :  "<< frec[i]<<endl;
            if (frec[i] == numalumnos){
                cout << "** POSIBLE GANADOR **\n";
            }
        }

    }
}
