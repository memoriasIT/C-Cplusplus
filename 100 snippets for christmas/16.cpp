//Para realizar operaciones con números complejos, podemos definir el siguiente tipo:
//struct TComplejo {
//double p_real, p_imaginaria;
//}
//Escribe procedimientos que realicen las operaciones de suma, resta, multiplicación y
//división de números complejos definidos con el tipo anterior:
//void sumar(TComplejo &resultado, const TComplejo &a, const TComplejo &b)
//void restar(TComplejo &resultado, const TComplejo &a, const TComplejo &b)
//void multiplicar(TComplejo &resultado, const TComplejo &a, const TComplejo &b)
//void dividir(TComplejo &resultado, const TComplejo &a, const TComplejo &b)
//Crea asimismo una función main que permita comprobar el correcto funcionamiento de los
//mismos

#include <iostream>
using namespace std;

struct TComplejo{
    double p_real, p_imaginaria;
};

void sumar(const TComplejo &num1, const TComplejo  &num2, TComplejo& res);
void restar(const TComplejo &num1, const TComplejo  &num2, TComplejo& res);
void multiplicar(const TComplejo &num1, const TComplejo  &num2, TComplejo& res);
void dividir(const TComplejo &num1, const TComplejo  &num2, TComplejo& res);
void ImprimirRes(TComplejo num1, TComplejo num2, TComplejo res);
void PedirDatos(TComplejo& num1, TComplejo& num2);

int main(){
    unsigned eleccion;
    TComplejo num1, num2, res;
    PedirDatos(num1, num2);

    cout << "Seleccione modo: \n\t1. Suma\n\t2. Resta\n\t3. Multiplicacion\n\t4.Division";
    cin >> eleccion;
    switch(eleccion){
    case 1:
        sumar(num1, num2, res);
        break;
    case 2:
        restar(num1, num2, res);
        break;
    case 3:
        multiplicar(num1, num2, res);
        break;
    case 4:
        dividir(num1, num2, res);
        break;
    }

    ImprimirRes(num1, num2, res);
    return 0;
}


void PedirDatos(TComplejo& num1, TComplejo& num2){
    cout << "Introduce valor real 1: ";
    cin >> num1.p_real;
    cout << "Introduce valor imaginario 1: ";
    cin >> num1.p_imaginaria;

    cout << "Introduce valor real 2: ";
    cin >> num2.p_real;
    cout << "Introduce valor imaginario 2: ";
    cin >> num2.p_imaginaria;
}

void ImprimirRes(TComplejo num1, TComplejo num2, TComplejo res){
    cout << "\nNum1: " << num1.p_real << " " << showpos << num1.p_imaginaria << " i\n";
    cout << "Num2: " << noshowpos << num2.p_real << " " << showpos << num2.p_imaginaria << " i\n";
    cout << "Resultado: " << noshowpos << res.p_real << " " << showpos << res.p_imaginaria << " i\n\n";
}

void sumar(const TComplejo &num1, const TComplejo  &num2, TComplejo& res){
    res.p_real = num1.p_real + num2.p_real;
    res.p_imaginaria = num1.p_imaginaria + num2.p_imaginaria;
}

void restar(const TComplejo &num1, const TComplejo  &num2, TComplejo &res){
    res.p_real = num1.p_real - num2.p_real;
    res.p_imaginaria = num1.p_imaginaria - num2.p_imaginaria;
}

void multiplicar(const TComplejo &num1, const TComplejo  &num2, TComplejo &res){
    res.p_real = num1.p_real * num2.p_real + (-(num1.p_imaginaria * num2.p_imaginaria));
    res.p_imaginaria = (num1.p_imaginaria * num2.p_real) + (num1.p_real * num2.p_imaginaria);

}

void dividir(const TComplejo &num1, const TComplejo  &num2, TComplejo &res){

}
