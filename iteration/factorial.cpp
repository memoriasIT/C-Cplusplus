#include <iostream>
using namespace std;

int main(){
int fact, numero;

fact = 6;
numero = fact-1;
for (numero; numero > 0; numero--){
    fact *=numero;
}
cout << fact;

}
