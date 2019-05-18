#include <iostream>
using namespace std;


int main(){

unsigned num = 0;
char sec;

cout << "Introduzca un número DISTINTO DE CERO";
while(num == 0){
    cin >> num;
}

cout << "Introduzca una secuencia de números FINALIZANDO EN CERO";
cout << num;
cin.get(sec);
cout << sec;
while(sec != 0){
    cin.get(sec);
    if(sec == num){
        cout << "Si aparece en la secuencia";
    }
}
cout << "No aparece en la secuencia";
}
