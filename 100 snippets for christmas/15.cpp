//La denominada Criba de Eratóstenes es un método para determinar los números primos
//entre 1 y N, siguiendo los siguientes pasos:
// Se escriben los números naturales entre 1 y N.
// Se tacha el 1.
// Se deja el 2 y se tachan todos los demás números pares.
// Se deja el 3 y se tachan todos sus múltiplos.
// Como el 4 ya está tachado, pasamos al 5, que se deja y se tachan todos sus múltiplos
//(los del 5).
// Etc.
//Así, cuando pasemos del 13, estarán tachados 14, 15 y 16, con lo que seguimos el proceso
//en el 17. El proceso acaba cuando llegamos a la raíz cuadrada de N. Los números que
//queden sin tachar, serán primos. La siguiente figura muestra este método aplicado del 1 al
//100. Aparecen en blanco los números no marcados y que, por tanto, son primos.
//1 2 3 ×4 5 ×6 7 ×8/\ ×9 ××10 11 ××12 13 ×14× ××15 ××16 17 ××18 19 ××20 ××21 ××22 23 ××24 ××25 ××26 ××27 ××28
//29 ××30 31 ××32 ××33 ××34 ××35 ××36 37 ××38 ××39 ××40 41 ××42 43 ××44 ××45 ××46 47 ××48 ××49 ××50 ××51 ××52
//53 ××54 ××55 ××56 ××57 ××58 59 ××60 61 ××62 ××63 ××64 ××65 ××66 67 ××68 ××69 ××70 71 ××71 73 ××74 ××75 ××76
//××77 ××78 79 ××80 ××81 ××82 83 ××84 ××85 ××86 ××87 ××88 89 ××90 91×× ××92 ××93 ××94 ××95 ××96 97 ××98 ××99
//××× 100
//Se pide crear un procedimiento denominado eratostenes que, mediante la criba descrita
//y haciendo uso de arrays, debe tomar como parámetro un natural N (menor o igual que una
//constante dada MAXIMO) e imprimir por pantalla todos los números primos del 1 al N.
//Crea también una función main para comprobar que el procedimiento se ha codificado
//correctamente

#include <iostream>
#include <cmath>
using namespace std;

const unsigned MAX = 100;
typedef bool TArray[MAX];

struct TPrimos{
    TArray Array;
    unsigned limsup;
};

unsigned PedirDatos(){
    unsigned n;
    cout << "Introduce limite superior";
    do{
        cin >> n;
    }while (n > MAX);
    return n;
}

void inicializar(TPrimos& Primos){
    for (int i = 0; i < MAX; i++){
        Primos.Array[i] = true;
    }
}

void EliminarMultiplos(TPrimos& Primos, int primo){
    for (int i = 2*primo;i < Primos.limsup; i += primo){
        Primos.Array[i] = false;
    }
}

void EncontrarPrimos(TPrimos& Primos){
    for (int i = 2; i <= sqrt(Primos.limsup);i++){
        if(Primos.Array[i]){
            EliminarMultiplos(Primos, i);
        }
    }
}

void ImprimirPrimos(TPrimos Primos){
    for (int i = 0; i < Primos.limsup; i++){
        if (Primos.Array[i] == true){
            cout << i <<"\t";
        }
    }
}

void erastotenes(TPrimos& Primos){
    EncontrarPrimos(Primos);

    ImprimirPrimos(Primos);
}

int main(){
    TPrimos Primos;

    Primos.limsup = PedirDatos();
    inicializar(Primos);

    erastotenes(Primos);
}
