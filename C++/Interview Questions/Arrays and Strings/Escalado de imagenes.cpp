//Deseamos simular el proceso de “Escalado de Imágenes” que muchos dispositivos
//(ej. televisiones) llevan a cabo para aumentar o disminuir la resolución de las
//mismas. Pensemos la imagen como una matriz M de F filas y C columnas y cuyo
//contenido en cada celda es un número natural mayor o igual que 1 (representando un
//determinado color). Para aumentar la resolución de la imagen, se construye una
//nueva matriz T con el doble de filas de M y con el mismo número de columnas. Para
//rellenar las 2*F filas de la matriz T se realiza el siguiente proceso:
// Primero se calcula la media entera (sin decimales) de todos los valores de M.
//Llamemos a este valor mediaM.
// Las filas de M pasan a ser las filas pares de T (la fila 0 de M se copia en la fila 0 de
//T, la fila 1 de M se copia en la fila 2 de T y así sucesivamente.
// Las filas impares de T se inicializan a 0. Posteriormente, se calculan los valores a
//almacenar en cada celda de cada fila impar de T de la siguiente manera: se recorre la
//fila de izquierda a derecha y en cada celda se almacena la media entera de los
//valores de los vecinos de esa celda (si alguno de esos vecinos es un 0, se toma como
//valor de ese vecino la media mediaM antes calculada. Ver tercer paso del ejemplo
//mostrado a continuación).
//Nota: Las celdas de las esquinas tienen sólo 3 vecinos; las de los bordes que no son
//esquinas tienen 5 y las restantes tienen 8. Hay que controlar bien esos cálculos.
//Veamos un ejemplo:
//Matriz M Matriz T
//3 2 5 3 2 5
//6 5 3 4 4 3
//6 5 3
//5 4 4
//Pasos para conseguir T
// Calculamos mediaM = 4 ((3+2+5+6+5+3) / 6 = 4)
// Tras copiar las filas de M a las filas pares de T e inicializar las impares a 0 la
//matriz T queda de la siguiente forma:
//3 2 5
//0 0 0
//6 5 3
//0 0 0
// La primera fila impar de T se calcula de la siguiente forma:
//o La celda (1,0) se calcula a partir de sus vecinos que son 5 (3, 2, 0, 6, 5).
//Tras sustituir el 0 por 4 (que es mediaM), sumarlos y dividir el
//resultado entre 5 nos da el valor 4 ((3+2+4+6+5) / 5 = 4). En la celda
//(1,0) ponemos por tanto un 4.
//La celda (1,1) tiene 8 vecinos de los cuales uno es 0, que se sustituye
//por 4; la suma de todos es 32; que dividido entre 8 vecinos resulta
//32/8=4. En la celda (1,1) ponemos por tanto un 4.
//o Para la celda (1,2) se suman sus 5 vecinos y el valor resultante es 3
//((2+5+4+5+3) / 5 = 3).
//Tras estos cálculos la matriz T queda:
//3 2 5
//4 4 3
//6 5 3
//0 0 0
// Realizando un proceso similar para la otra fila impar, terminamos la matriz T:
//3 2 5
//4 4 3
//6 5 3
//5 4 4
//Diseña un algoritmo que, para dos constantes dadas F y C, lea de teclado el
//contenido de la matriz M (F filas y C columnas), construya la matriz T (2*F filas y
//C columnas) y muestre por pantalla el contenido de la matriz T. Así, la ejecución
//del algoritmo para F = 2, C = 3 y la matriz M ejemplo que hemos usado antes,
//mostraría por pantalla:
//Introduzca la matriz M (2x3):
//3 2 5
//6 5 3
//La matriz T (4x3) es la siguiente:
//3 2 5
//4 4 3
//6 5 3
//5 4 4
//Notas:
// Se recomienda no utilizar el tipo unsigned, sino el tipo int para trabajar con
//valores de tipo entero y natural.
// Se recomienda ir probando la ejecución del algoritmo conforme se van
//acometiendo los diferentes pasos de la construcción de la matriz T.

#include <iostream>
using namespace std;

const unsigned F = 2;
const unsigned C = 3;
typedef int TOriginal [F] [C];
typedef int TReescalado [2*F] [C];

void LlenarMatriz (TOriginal& original){
    for (int y = 0 ; y < F ; y++){
        for (int x = 0; x < C ; x++){
            cout << "Introduce valor para la fila " << y+1 << " columna " << x+1<< " \n";
            cin >> original [y][x];
        }
    }
}

int MediaOriginal(const TOriginal& original){
    int suma = 0, posiciones;
    for (int y = 0 ; y < F; y++){
        for (int x = 0; x < C; x++){
            suma+= original[y][x];
        }
    }
    posiciones = F*C;
    return suma/posiciones;
}

void FilasImpares (const TOriginal& original, TReescalado& MReescalada){
    for (int y = 0; y < F; y++){
        for (int x = 0; x < C; x++){
            MReescalada[2*y][x] = original[y][x];
        }
    }
}

int MediaIzqAbajo (TReescalado& MReescalada, int x, int y){ //ready
    int media, suma;
    suma = MReescalada[y][x+1] + MReescalada[y-1][x+1]+ MReescalada[y-1][x];
    media = suma /3;

    return media;

}
int MediaIzqLado (TReescalado& MReescalada,int x, int y){ // ready
    int media, suma;
    suma = MReescalada[y+1][x]+ MReescalada[y+1][x+1]+ MReescalada[y][x+1]+ MReescalada[y-1][x+1]+ MReescalada[y-1][x];
    media = suma /5;

    return media;
}
int MediaDrchaAbajo (TReescalado& MReescalada,int x, int y){ //ready
    int media, suma;
    suma = MReescalada[y-1][x-1]+ MReescalada[y][x-1]+ MReescalada[y-1][x];
    media = suma /3;

    return media;

}
int MediaLadoDrcho (TReescalado& MReescalada, int x, int y){ //ready

    int media, suma;
    suma = MReescalada[y-1][x-1]+ MReescalada[y][x-1]+ MReescalada[y+1][x-1]+ MReescalada[y+1][x]+ MReescalada[y-1][x];
    media = suma /5;

    return media;
}
int MediaMedio (TReescalado& MReescalada, int x, int y){
    int media, suma;
    suma = MReescalada[y-1][x-1]+ MReescalada[y][x-1]+ MReescalada[y+1][x-1]+ MReescalada[y+1][x]+ MReescalada[y+1][x+1]+ MReescalada[y][x+1]+ MReescalada[y-1][x+1]+ MReescalada[y-1][x];
    media = suma /8;

    return media;
}

void FilasPares (TReescalado& MReescalada){
    for (int y = 1; y < 2*F ; y+=2){
        for (int x = 0; x < C; x++){
            MReescalada[y][x] = 4;
        }
    }

    for (int y = 1; y < 2*F ; y+=2){
        for (int x = 0; x < C; x++){
            if (x == 0){
                if (y == 2*F-1){
//                    3 vecinos izquierda abajo
                     MReescalada[y][x] =MediaIzqAbajo(MReescalada, x, y);
                }else {
//                    5 vecinos izquierda lado
                     MReescalada[y][x] =MediaIzqLado(MReescalada, x, y);

                }
            } else if (x == C-1){
                if (y == 2*F-1){
//                    3 vecinos derecha abajo
                     MReescalada[y][x] =MediaDrchaAbajo(MReescalada, x, y);
                }else {
//                    5 vecinos lado derecho
                     MReescalada[y][x] =MediaLadoDrcho(MReescalada, x, y);
                }
            } else {
//                8 vecinos medio
                    MReescalada[y][x] = MediaMedio(MReescalada, x, y);
            }



        }
    }

}

void Reescalar (const TOriginal& original, TReescalado& MReescalada){
    int media;
    media = MediaOriginal(original);
    FilasImpares(original, MReescalada);
    FilasPares(MReescalada);


}

void Imprimir(const TOriginal& original){
    for (int y = 0; y < F; y++){
        for (int x = 0; x < C; x++){
            cout << original[y][x] << " ";
        }
        cout << "\n";
    }

}

void ImprimirReescalada(const TReescalado& MReescalada){

    for (int y = 0; y < 2*F; y++){
        for (int x = 0; x < C; x++){
            cout << MReescalada[y][x] << " ";
        }
        cout << "\n";
    }
}


int main(){
    TOriginal original; //={{3,2,5}, {6,5,3}};
    TReescalado MReescalada = {0};

    LlenarMatriz(original);
    cout << "\n\n";


    Reescalar(original, MReescalada);


    cout << "Esta es la matriz original: \n";
    Imprimir(original);
    cout << "Esta es la matriz reescalada: \n";
    ImprimirReescalada(MReescalada);

}
