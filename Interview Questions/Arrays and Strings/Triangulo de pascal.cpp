//El triángulo de Pascal es un triángulo de números naturales, infinito y simétrico. Se
//empieza con un 1 en la primera fila, y en las filas siguientes los números de los
//extremos son un 1 y cada uno de los restantes números se calcula como la suma de
//los dos números que tiene encima. Así, el triángulo con 7 filas sería:
//         1
//        1 1
//       1 2 1
//      1 3 3 1
//     1 4 6 4 1
//   1 5 10 10 5 1
//  1 6 15 20 15 6 1
//El triángulo de Pascal se puede almacenar en una matriz cuadrada girado 45º en el
//sentido contrario a las agujas del reloj, de forma que cada elemento de la primera
//fila y la primera columna de la matriz es un 1, los elementos a la derecha de la
//diagonal secundaria o inversa son un 0 y cada uno de los restantes números se
//calcula como la suma de los dos números que tiene a su izquierda y encima. Así, el
//triángulo anterior quedaría almacenado de la siguiente forma en una matriz 7x7:
//
//1 1 1 1 1 1 1
//1 2 3 4 5 6 0
//1 3 6 10 15 0 0
//1 4 10 20 0 0 0
//1 5 15 0 0 0 0
//1 6 0 0 0 0 0
//1 0 0 0 0 0 0
//
//Diseña un algoritmo que, para una constante dada TAM, construya el triángulo de
//Pascal en una matriz cuadrada TAMxTAM y muestre por pantalla el contenido de
//dicha matriz (los valores 0 no se muestran). Así, la ejecución del algoritmo para
//TAM = 7, mostraría por pantalla los siguientes números:
//
//1 1 1 1 1 1 1
//1 2 3 4 5 6
//1 3 6 10 15
//1 4 10 20
//1 5 15
//1 6
//1

#include <iostream>
#include <string>
using namespace std;

const unsigned TAM = 7;
typedef unsigned TArray [TAM][TAM];

void LLenarFila(TArray& ArTriangulo){
    for (int i = 0 ; i < TAM ; i++){
        ArTriangulo[0][i] = 1;
    }
}

void LlenarColumna(TArray& ArTriangulo){
    for (int i = 1 ; i < TAM ; i++){
        ArTriangulo[i][0] = 1;
    }
}

void Triangulo(TArray& ArTriangulo){
    LLenarFila(ArTriangulo);
    LlenarColumna(ArTriangulo);


    for (unsigned x = 1; x < TAM ; x++){
        for (unsigned y = 1; y < TAM ; y++){
            if (x+y != TAM){
                ArTriangulo[x][y] = ArTriangulo[x-1][y] + ArTriangulo[x][y-1];
            }

        }

    }
}

void Imprimir(const TArray& ArTriangulo){
    for (int y = 0 ; y < TAM ; y++){
        for (int x = 0; x < TAM ; x++){
            if ( ArTriangulo[y][x] != 0){
                cout << ArTriangulo[y][x] <<" ";
            }
        }
        cout << "\n";
    }
}

int main(){
    TArray ArTriangulo = {0};
    Triangulo(ArTriangulo);
    Imprimir(ArTriangulo);
}
