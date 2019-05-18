//
//Un partida de ajedrez se almacena en una matriz de 8x8 caracteres, donde cada
//carácter representa una ficha o ausencia de ellas:
//'R': rey blanco, 'r': rey negro,
//'D': dama blanca, 'd': dama negra,
//'T': torre blanca, 't': torre negra,
//'A': alfil blanco, 'a': alfil negro,
//'C': caballo blanco, 'c': caballo negro,
//'P': peón blanco, 'p': peón negro,
//'V': casilla vacía.
//Define el tipo adecuado para la matriz y diseña una función contarFichas que
//recibe como parámetro de entrada una matriz mat con una partida de ajedrez y
//devuelve el número de fichas situadas en casillas de color negro sobre el tablero y
//que no ocupen las filas o columnas de cualquiera de los 4 bordes del tablero. (Nota:
//la casilla [0][0] es blanca).

#include <iostream>
using namespace std;

const unsigned L = 8;
typedef char TArray [L][L];

void contarFichas (const TArray& mat, unsigned& FichasNegro, unsigned& FichasBlanco){
    for (unsigned y = 1; y < L-1; y++){
        for (unsigned x = 1; x < L-1; x++){
            if ((x+y) % 2 == 0){ // Par Blanca
                if (mat[y][x] != 'V'){
                    FichasBlanco++;

                }
            } else {
                if (mat[y][x] != 'V'){
                    FichasNegro++;
                }
            }
        }
    }
}

void RellenarArray(TArray& mat){
    for (int y = 0 ; y < L ; y ++){
        for (int x = 0 ; x < L; x++){
        cin >> mat[y][x];
        }

    }
}


int main (){
    TArray mat;
    unsigned FichasNegro = 0, FichasBlanco = 0;

    RellenarArray(mat);
    contarFichas(mat, FichasNegro, FichasBlanco);
    cout << "Hay " << FichasNegro << " fichas negras y " << FichasBlanco << " fichas blancas.";
}
