#include <iostream>
using namespace std;

const unsigned MAX=31;
typedef unsigned TDias[MAX];

void inicializar(TDias& frec){
    for(unsigned i=0; i<MAX; i++){
        frec[i]=0;
    }
}

void numAlumnos(unsigned& x){
    cout<< "Introduzca el numero de alumnos que va a participar: ";
    cin>>x;
}

void diasDisponibles(const unsigned x, TDias& frec){ //No uses paso por referencia cuando no sea necesario
    unsigned dia;
        for(unsigned i=1; i<=x; i++){
            cout<< "Dias del alumno "<< i << ": ";
            do{
                cin>> dia;
                frec[dia]++;
            }while(dia!=0);
        }

}

void Moda(const unsigned x, TDias frec){ //No uses paso por referencia cuando no sea necesario
    unsigned moda=0;
        for(unsigned i=0; i<MAX; i++){
            if(moda<frec[i]){
                moda=frec[i];
            }
        }
        if(moda==x){
            cout<< "Hay dias en comun"<<endl;
        }else if (moda!=x){
            cout<< "No hay dias en comun"<<endl;
        }
}

int main(){
    TDias frec;
    unsigned x;
        numAlumnos(x);
        inicializar(frec);
        diasDisponibles(x,frec);

        for (int i = 0; i < MAX; i++){
            cout << frec[i] << "\n";
        }

        Moda(x,frec);

return 0;
}
