//- Diseña un algoritmo que lea de teclado un texto, y muestre por pantalla un listado
//de todas las palabras del texto cuyos caracteres estén ordenados alfabéticamente en
//orden creciente. Puede haber más de una ocurrencia del mismo carácter en una
//palabra. En la salida no habrá palabras repetidas.
//Ejemplo:
//Entrada:
//Introduzca el texto (FIN para terminar):
//ELLOS CANTAN EL HIMNO DE SU EQUIPO DE FUTBOL CON
//PASION Y YO NO CANTO EL HIMNO FIN
//Salida:
//Las palabras cuyos caracteres estan ordenados son:
//ELLOS EL HIMNO DE SU Y NO
//NOTAS:
// El texto contiene un número indefinido de palabras
//El texto termina con la palabra FIN.
// Cada palabra tiene un número indefinido pero limitado de caracteres (todos
//alfabéticos mayúsculas).
// En el texto aparecerán un número máximo MAX_PAL_DIST (una
//constante) de palabras distintas.
// El carácter separador de palabras es el espacio en blanco.

#include <iostream>
#include <string>
using namespace std;

const unsigned MAX_PAL_DIST = 10;
typedef string TArray [MAX_PAL_DIST];

struct TDatos{
    TArray PalRepetidas;
    unsigned nPal = 0;
};

bool ordenada (string palabra){
    bool estaordenada = false;

    for (int i = 0 ; i < palabra.size()-1; i++){
         if (int(palabra[i]) < int(palabra[i+1])){
            estaordenada = true;
        }

    }

    return estaordenada;
}

bool noesta(string palabra, const TDatos Datos){
    bool encontrada = false;

    for (int i = 0; i < Datos.nPal; i++){
        if (palabra == Datos.PalRepetidas[i]){
            encontrada = true;
        }
    }

    return encontrada;
}


int main (){
    string palabra;
    TDatos Datos;
    cout << "Introduzca el texto (FIN para terminar): ";

    do{
        cin >> palabra;
        if (ordenada(palabra) && !noesta(palabra, Datos)){
            Datos.PalRepetidas[Datos.nPal] = palabra;
            Datos.nPal++;
        }
    } while (palabra != "FIN");


    cout << "Las palabras cuyos caracteres estan ordenados son: ";
    for (int i = 0; i < Datos.nPal-1 ; i++){
        cout << Datos.PalRepetidas[i] << " ";

    }
}
