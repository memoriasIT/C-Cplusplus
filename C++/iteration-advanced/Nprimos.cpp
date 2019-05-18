#include <iostream>
using namespace std;

//------DECLARACIÓN DE FUNCIONES-----//
int KInput(); //Introducir valores
void CalcPrimo(unsigned N); //Mostrar los primos
bool Primo(unsigned NumSube); //Calcular si es primo


//------FUNCIÓN PRINCIPAL-----//
int main ()
{
    unsigned N;
    N = KInput();

    cout << "Los primeros N primos son: ";
    CalcPrimo(N);
}

//------INTRODUCIR VALORES-----//
int KInput()
{
    unsigned N;
    cout << "Introduce la cantidad de números primos que quieres mostrar: ";
    cin >> N;
    return N;
}

//------SI ES PRIMO IMPRIMIR-----//
void CalcPrimo(unsigned N)
{
    unsigned NumSube = 0, contador=0;

    while (contador < N)  //Contador = 0 así que entra // 1 = 1 No entra
    {
        NumSube++; //1
        if (Primo(NumSube)== true)  //Mirar si 1 es primo
        {
            contador++; //Contador =1 numero primo
            cout << NumSube << ", "; //Se imprime el numero que sube
        }
    }
}
//------CALCULO DE PRIMO-----//
bool Primo(unsigned NumSube)
{
int divisor = 1, divisores = 0;
do
{
    if(NumSube % divisor == 0)
    {
        divisores++;
    }
    divisor++;
} while(divisor <= NumSube);
if(divisores == 2)
{
    return true;
}
else
{
    return false;
}
}





