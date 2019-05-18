#include <iostream>
using namespace std;

int main(){

//************ DO != *************//
int cont = 0;
do{
    cont++;
}while (cont != 10); //Lo hace 10 veces

//************ DO < *************//
cont = 0;
do{
    cont++;
}while (cont < 10); //Lo hace 10 veces

//************ DO <= *************//
cont = 0;
do{
    cont++;
}while (cont <= 10); //Lo hace 11 veces

//************ FOR <= *************//
for (cont=0; cont <=10; cont++){} //Lo hace 11 veces

//************ FOR < *************//
for (cont=0; cont <10; cont++){} //Lo hace 10 veces

cout << cont;


}
