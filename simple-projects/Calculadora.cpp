#include <iostream>
using namespace std;

int main(){
char operacion;
double num1, num2, resultado;

cout << "Introduce un numero" << endl;
cin >> num1;
cout << "Introduce un operador" << endl;
cin >> operacion;
cout << "Introduce otro numero" << endl;
cin >> num2;

switch (operacion){
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '/':
        resultado = num1/num2;
        break;
    case '%':
        resultado = num1%num2;
    case
    default:
        cout << "Not working bro" << endl;
        break;
}

cout << "EL RESTULTADO ES: " << resultado;

}
