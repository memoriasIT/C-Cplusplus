#include <iostream>
using namespace std;
void leer(unsigned& N, unsigned& i)
{
    int auxN, auxi;
    do
    {
        cout << "Introduzca Número y posición: ";
        cin >> auxN >> auxi;
    }
    while ((auxN <= 0) || (auxi <= 0));
    N = auxN;
    i = auxi;



}
float digito(unsigned N, unsigned i)
{
    int resultado;
    unsigned resto, cont;

    cont = 0;
    while ((cont < i) && (N > 0) && (i < N))
    {
        cont++;
        resto = N % 10;
        N = N / 10;
    }


    if (cont < i)
    {
        resultado = -1;
    }
    else
    {
        resultado = resto;
    }

    cout << "Resultado en función: " << resultado<< endl;
    return resultado;
}
void escribir(unsigned N, unsigned i, unsigned dig)
{
    cout << "El dígito que ocupa la posición " << i
         << " del número " << N << " es: "
         << dig << endl;
}
int main()
{
    unsigned N,i,res;
    leer(N,i);
    res = digito(N,i);
    cout << "res en main: " << res<< endl;
    escribir(N,i,digito(N,i));
    return 0;
}
