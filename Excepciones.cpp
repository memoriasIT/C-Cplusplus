#include <iostream>
using namespace std;
int main()
{
 char operador;
 int operando1,operando2;
 cout << "Introduzca la operación a realizar (+,-,*,/) (& para terminar): ";
 cin >> operador;
 while (operador != '&'){
 if ((operador != '+') && (operador != '-') &&
 (operador != '*') && (operador != '/')){
 throw "ERROR: operación no valida";
 }else{
 cout << "Introduzca operando1: ";
 cin >> operando1;
 cout << "Introduzca operando2: ";
 cin >> operando2;
 switch (operador){
 case '+' :
 cout << "El resultado es: " << operando1 + operando2 << endl;
 break;
 case '-' :
 cout << "El resultado es: " << operando1 - operando2 << endl;
 break;
 case '*' :
 cout << "El resultado es: " << operando1 * operando2 << endl;
 break;
 case '/' : if (operando2 == 0){
 throw "ERROR: no es posible la división por cero";
 }else{
 cout << "El resultado es: " << operando1 /
operando2 << endl;
 }
break;
 }
 }
 cout << "Introduzca la operación a realizar (+,-,*,/) (& para terminar): ";
 cin >> operador;
 }
 cout << "FIN DEL PROGRAMA" << endl;
 return 0;
}
