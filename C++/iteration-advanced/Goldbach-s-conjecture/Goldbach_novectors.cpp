/************************************************************************
* Title: Testing Goldbach's conjecture                                  *
* Version: 0.1                                                          *
* Date: 9/12/2017                                                       *
* Purpose: Testing the Goldbach's conjecture in an interval given       *
* Author: Memorias de un informatico                                    *
* Twitter/Github: @MemoriasIT                                           *
************************************************************************/


// He hecho otra versión que muestra las operaciones que hace usando vectores, se puede encontrar aquí:
// https://github.com/memoriasIT/CPP-Practice/blob/master/iteration-advanced/Goldbach-s-conjecture/using-vectors.cpp


#include <iostream>
using namespace std;

void kinput(int& limiteinf, int& limitesup); // Keyboard input
bool Goldbach(int contador); // Check if Goldbach works
bool primo(int i); // Check if it's a prime number
void resultado(int contador, int limitesup); // Print outcome in screen

// ---- FUNCION PRINCIPAL ---- //
int main(){
    int limitesup, limiteinf, contador;

    // Get intervals
    kinput(limiteinf, limitesup);

    // Apply the conjecture x times starting in even number
    contador = limiteinf;
    if (contador%2 !=0){
        contador = limiteinf + 1;
    }
    while (contador < limitesup && Goldbach(contador) == true){
        contador +=2;
    }

    // Print outcome
    resultado(contador, limitesup);
}

// ---- CONSEGUIR INTERVALOS PARA GOLDBACH ---- //
void kinput(int& limiteinf, int& limitesup){
    do{
    cout << "Introduce limite inferior: ";
    cin >> limiteinf;

    cout << "Introduce limite superior: ";
    cin >> limitesup;
    cout << endl;
    } while (limiteinf > limitesup || limiteinf <= 2);
}
// ---- FUNCIONA GOLDBACH? ---- //
bool Goldbach(int contador){
    bool funciona = false;

    for (int i = 1; i < contador; i++){
        if (primo(i) && primo(contador-i)){
            funciona = true;
        }
    }
    return funciona;
}

// ---- COMPROBAR SI PRIMO ---- //
bool primo (int i){
    bool primo = true;
    for (int a = 2; a <= i/2; a++){
        if (i%a==0){
            primo = false;
        }
    }
}

// ---- IMPRIMIR RESULTADO ---- //
void resultado(int contador, int limitesup){
    if (contador < limitesup){
        cout << "No se cumple la conjetura.";
    } else {
        cout << "Todos los pares en el rango elegido cumplen la conjetura";
    }
}
