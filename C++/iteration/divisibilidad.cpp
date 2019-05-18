#include <iostream>
using namespace std;


int main (){

int num1, num2;

cout << "Introduzca valor 1: " << endl;
cin >> num1;

cout << "Introduzca valor 2: " << endl;
cin >> num2;


if (num2 % num1){
    cout << "Es divisible";
} else {
    cout << "No es divisible";
}

}
