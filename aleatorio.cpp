#include <iostream>
using namespace std;
int main(){
int limsup=0, liminf=0, rango=0, num=0, random_number;

    bool acierto = false;
    string kinput1, kinput2("si");



    cout<< ">>  Introduzca los valores indicados  <<"<<endl;
    cout<< "__________________________________________"<<endl;


    cout<< char(254) << "   Limite superior"<<endl;

    cin>>limsup;


    cout << char(254)<< "   Limite inferior"<<endl;

    cin>>liminf;

    rango = limsup - liminf + 1;
    num = rand() % rango - liminf;

    cout << liminf << endl;
    cout<< limsup;

    random_number = liminf + rand() % ((limsup - liminf ) + 1);


    cout<< char(254) << "   Es su valor: " << random_number << " ? (si o no)"<<endl;

    cin >> kinput1;
    while (kinput1.compare(kinput2) != 0){
        random_number = liminf + rand() % ((limsup - liminf ) + 1);

        cout<< char(254) << "   Es su valor: " << random_number << " ? (si o no)"<<endl;

        cin >> kinput1;
        }

    cout<< ">> FIN DEL JUEGO <<";
    }
