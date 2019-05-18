/***********************************************************
* Title: ROTOBO - AI                                       *
* Version: 1.0                                             *
* Date: 4/11/2017                                          *
* Purpose: Guess a number following different algorithms   *
* Author: Memorias de un informatico                       *
* Twitter/Github: @MemoriasIT                              *
************************************************************/

#include <iostream>             // Cin cout
#include <windows.h>            // gotoxy() y Sleep
#include <iomanip>              // espacio y formato

using namespace std;

COORD cordenada = {0,0};  //Determinar la coordenada 0,0 en la pantalla -- necesario windows.h

void gotoxy(int x, int y){ //Crear función para el uso del gotoxy
    HANDLE identificador;
    identificador = GetStdHandle(STD_OUTPUT_HANDLE);

    cordenada.X = x;
    cordenada.Y = y;
    SetConsoleCursorPosition(identificador, cordenada);
}

void inicio(){ // Pantalla de inicio
    HANDLE identificador;
    identificador = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(identificador, 10);

    gotoxy(15,2);
    cout<<"8 888888888o.      ,o888888o. 8888888 8888888888 ,o888888o.     8 888888888o       ,o888888o."<<endl; gotoxy(15,3);
    cout<<"8 8888    `88.  . 8888     `88.     8 8888    . 8888     `88.   8 8888    `88.  . 8888     `88."<<endl; gotoxy(15,4);
    cout<<"8 8888     `88 ,8 8888       `8b    8 8888   ,8 8888       `8b  8 8888     `88 ,8 8888       `8b"<<endl; gotoxy(15,5);
    cout<<"8 8888     ,88 88 8888        `8b   8 8888   88 8888        `8b 8 8888     ,88 88 8888        `8b"<<endl; gotoxy(15,6);
    cout<<"8 8888.   ,88' 88 8888         88   8 8888   88 8888         88 8 8888.   ,88' 88 8888         88"<<endl; gotoxy(15,7);
    cout<<"8 8888.   ,88' 88 8888         88   8 8888   88 8888         88 8 8888.   ,88' 88 8888         88"<<endl; gotoxy(15,8);
    cout<<"8 888888888P'  88 8888         88   8 8888   88 8888         88 8 8888888888   88 8888         88"<<endl; gotoxy(15,9);
    cout<<"8 8888 `8b.    `8 8888       ,8P    8 8888   `8 8888       ,8P  8 8888      88 `8 8888       ,8P"<<endl; gotoxy(15,10);
    cout<<"8 8888   `8b.   ` 8888     ,88'     8 8888    ` 8888     ,88'   8 8888    ,88'  ` 8888     ,88'"<<endl; gotoxy(15,11);
    cout<<"8 8888     `88.    `8888888P'       8 8888       `8888888P'     8 888888888P       `8888888P'"<<endl; gotoxy(96,13);
    cout<<"@MemoriasIT " <<char(169);

    SetConsoleTextAttribute(identificador, 12);
    gotoxy(25,15);
    cout<<"**************************************************************"<<endl; gotoxy(40,17);
    cout<<"PULSA ENTER PARA EMPEZAR A JUGAR"<<endl; gotoxy(25,19);
    cout<<"**************************************************************"<<endl;

    cin.get();
    system("cls");
	}

void encuadre_arriba(){ //Parte de arriba del encuadre
		char linea;
		linea = cout.fill((char)205);
		cout << (char)201 << setw(110)<< (char)187 << endl;
		cout.fill(linea);
}

void encuadre_abajo(){ //Parte de abajo del encuadre
		char linea;
		linea = cout.fill((char)205);
		cout << (char)200 << setw(110)<< (char)188 << endl;
		cout.fill(linea);
}

void encuadre_medio(){ //La parte de los lados
	cout << (char)186<< endl;
}

void encuadre(){ //Compendio de todo y repetición de los lados
    encuadre_arriba();
    for (int i=1; i<25; ++i) {
        encuadre_medio();
        gotoxy(110,i);
        encuadre_medio();
    }
    encuadre_abajo();
}

void aleatorio(){ //modo de juego random
    int limsup=0, liminf=0, rango=0, num=0, intento=1;
    float prob;

    string kinput1, kinput2("si");
    encuadre();

    gotoxy(40,5);
    cout<< ">>  Introduzca los valores indicados  <<"<<endl;gotoxy(40,6);
    cout<< "__________________________________________"<<endl;

    gotoxy(5,9);
    cout<< char(254) << "   Limite superior"<<endl;
    gotoxy(5,10);
    cin>>limsup;

    gotoxy(5,11);
    cout << char(254)<< "   Limite inferior"<<endl;
    gotoxy(5,12);
    cin>>liminf;

    if (liminf > limsup){
        system("CLS");
        aleatorio();
    }
    rango = limsup - liminf + 1;
    num = liminf + rand() % (rango);

    prob = 1/float(rango);
    gotoxy(25,25);
    cout<< "Probabilidad: " << prob;
    gotoxy(5,13);
    cout<< char(254) << "   Es su valor: " << num << " ? (si o no)"<<endl;
    gotoxy(5,14);
    cin >> kinput1;
    gotoxy(5,25);
    cout<< "Intento: " << intento;
    while (kinput1.compare(kinput2) != 0){
        num = liminf + rand() % (rango);
        gotoxy(5,13);
        cout<< char(254) << "   Es su valor: " << num << " ? (si o no)"<<endl;
        gotoxy(5,14);
        cin >> kinput1;
        intento++;
        gotoxy(5,25);
        cout<< "Intento: " << intento;
        }
    gotoxy(5,16);
    cout<< ">> FIN DEL JUEGO <<";
    Sleep(10000);
}

void sumando(){ //num++
    int limsup=0, liminf=0, rango=0, num=0, intento=1;

    string kinput1, kinput2("si");
    encuadre();

    gotoxy(40,5);
    cout<< ">>  Introduzca los valores indicados  <<"<<endl;gotoxy(40,6);
    cout<< "__________________________________________"<<endl;

    gotoxy(5,9);
    cout<< char(254) << "   Limite superior"<<endl;
    gotoxy(5,10);
    cin>>limsup;

    gotoxy(5,11);
    cout << char(254)<< "   Limite inferior"<<endl;
    gotoxy(5,12);
    cin>>liminf;

    if (liminf > limsup){
        system("CLS");
        sumando();
    }

    num = liminf;

    gotoxy(5,13);
    cout<< char(254) << "   Es su valor: " << num << " ? (si o no)"<<endl;
    gotoxy(5,14);
    cin >> kinput1;
    gotoxy(5,25);
    cout<< "Intento: " << intento;
    while (kinput1.compare(kinput2) != 0){
        gotoxy(5,14);
        cout<< "                         ";
        num++;
        gotoxy(5,13);
        cout<< char(254) << "   Es su valor: " << num << " ? (si o no)"<<endl;
        gotoxy(5,14);
        cin >> kinput1;
        intento++;
        gotoxy(5,25);
        cout<< "Intento: " << intento;

        if (num == limsup){
            gotoxy(5,16);
            cout<< ">> SU NUMERO NO ESTA ENTRE LOS LIMITES <<";
        }

        }
    gotoxy(5,16);
    cout<< ">> FIN DEL JUEGO <<";
    Sleep(10000);

}

void limites(){ // < o >
int limsup=0, liminf=0, rango=0, num=0, intento=1;
    float prob;
	char linea;
	char kinput1;

    encuadre();

    gotoxy(40,5);
    cout<< ">>  Introduzca los valores indicados  <<"<<endl;gotoxy(40,6);
    cout<< "__________________________________________"<<endl;

    gotoxy(5,9);
    cout<< char(254) << "   Limite superior"<<endl;
    gotoxy(5,10);
    cin>>limsup;

    gotoxy(5,11);
    cout << char(254)<< "   Limite inferior"<<endl;
    gotoxy(5,12);
    cin>>liminf;

    if (liminf > limsup){
        system("CLS");
        aleatorio();
    }
    rango = limsup - liminf + 1;
    num = liminf + rand() % (rango);

    prob = 1/float(rango);
    gotoxy(25,25);
    cout<< "Probabilidad: " << prob;
    gotoxy(5,13);
    cout<< char(254) << "   Es su valor: " << num << " ? (>, < o =)"<<endl;
    gotoxy(5,14);
    cin >> kinput1;
    gotoxy(5,25);
    cout<< "Intento: " << intento;

    while (kinput1 != '='){
            gotoxy(5,14);
            cout<< " ";
        switch (kinput1){
        case '>' :
            liminf = num;
            rango = limsup - liminf + 1;
            num = liminf + rand() % (rango);
            gotoxy(5,13);
            cout<< char(254) << "   Es su valor: " << num << " ? (>, < o =)"<<endl;
            gotoxy(5,17);
            cout << "Su numero es mayor que " << liminf << " y menor (o igual) que "<< limsup << "       ";
            prob = 1/float(rango);
            gotoxy(25,25);
            cout << "Probabilidad: " << prob  << (char)205 << (char)205 <<(char)205 <<(char)205 <<(char)205 <<(char)205 <<(char)205 <<endl;
            gotoxy(5,14);
            cin >> kinput1;
            intento++;
            gotoxy(5,25);
            cout<< "Intento: " << intento;
            break;
        case '<' :
            limsup = num;
            rango = limsup - liminf + 1;
            num = liminf + rand() % (rango);
            gotoxy(5,13);
            cout<< char(254) << "   Es su valor: " << num << " ? (>, < o =)"<<endl;
            gotoxy(5,17);
            cout << "Su numero es mayor (o igual) que " << liminf << " y menor que "<< limsup<< "       ";
            prob = 1/float(rango);
            gotoxy(25,25);
            cout << "Probabilidad: " << prob << (char)205 << (char)205 <<(char)205 <<(char)205 <<(char)205 <<(char)205 <<(char)205 <<endl;
            cout.fill(linea);
            gotoxy(5,14);
            cin >> kinput1;
            intento++;
            gotoxy(5,25);
            cout<< "Intento: " << intento;
            break;
        }
    }
    gotoxy(25,25);
    cout << ">> FIN DEL JUEGO << SU NUMERO ES:" << num;
    Sleep(10000);
}

void instrucciones(){
int esperar;
encuadre();
cout << "Introduzca cualquier valor para reinciar el juego."; gotoxy(5,5);
cout <<char(176)<< char(177)<< char(178)<< " INSTRUCCIONES " << char(178) << char(177)<<char(176); gotoxy(5, 7);
cout<<"Roboto es un juego desarrollado por @MemoriasIT en el cual mediante el uso de una serie de algoritmos"; gotoxy(5, 8);
cout<<"se adivina un numero pensado por el usuario."; gotoxy(5, 9);
cout<< "El numero no es introducido en la consola, pero segun el modo de juego seleccionado sera necesario"; gotoxy(5, 10);
cout<< "introducir valores."; gotoxy(5, 12);
cout<< "MODO ALEATORIO: se muestran numeros generados mediante la funcion rand(), el usuario debera introducir";gotoxy(5,13);
cout<< "si el numero es correcto o no. Ademas se muestran datos como el n.intentos o la probabilidad.";gotoxy(5,15);
cout<< "MODO SUMANDO: se muestran numeros generados en orden mediante n++, el usuario debera introducir";gotoxy(5,16);
cout<< "si el numero es correcto o no. Ademas se muestran datos como el n.intentos.";gotoxy(5,18);
cout<< "MODO LIMITES: se muestran numeros generados mediante la funcion rand(), a diferencia del modo ALEATORIO";gotoxy(5,19);
cout<< "se introducira si el numero pensado es mayor o menor, haciendo asi el conjunto de posibilidades mas";gotoxy(5,20);
cout<< "pequenio. Finaliza cuando se obtiene el numero pensado. Se proporciona ademas una probabilidad variable";gotoxy(5,21);
cout<< "y un n.intentos" << endl; gotoxy(0,28);
cin >> esperar;
system("cls");
system("start ./Roboto.exe");
system("exit");
}

void modojuego(){ //seleccion del modo de juego
    unsigned modo;

    gotoxy(40,5);
    cout<< ">>  SELECCIONE MODO DE JUEGO  <<"<<endl;gotoxy(40,6);
    cout<< "________________________________"<<endl;

    gotoxy(5,9);
    cout<< char(254) << "   Aleatorio"<<endl;

    gotoxy(5,11);
    cout << char(254)<< "   Sumando"<<endl;

    gotoxy(5,13);
    cout<< char(254) << "   Cerrando los limites"<<endl;

    gotoxy(5,15);
    cout<< char(254) << "   Instrucciones"<<endl;

    gotoxy(5,17);
    cout<< "Seleccione modo (1, 2, 3, 4)*: ";
    gotoxy(5,25);
    cout<< " * Valor por defecto = 4 ";
    gotoxy(35,17);
    cin >> modo;

    switch(modo){
    case 1:
        gotoxy(5,20);
        cout << "Ha sido seleccionado ALEATORIO, sera redirigido en 3 s";
        Sleep(3000);
        system("cls");
        aleatorio();
        break;
    case 2:
        gotoxy(5,21);
        cout << "Ha sido seleccionado SUMANDO, sera redirigido en 3 s";
        Sleep(3000);
        system("cls");
        sumando();
        break;
    case 3:
        gotoxy(5,21);
        cout << "Ha sido seleccionado CERRANDO LIMITES, sera redirigido en 3 s";
        Sleep(3000);
        system("cls");
        limites();
        break;
    default:
        gotoxy(5,21);
        cout << "Ha sido seleccionado INSTRUCCIONES, sera redirigido en 3 s";
        Sleep(3000);
        system("cls");
        instrucciones();
        break;

    }
}

int main(){

    inicio();
    encuadre();
    modojuego();

}

//system("pause>consolelog"); // El código de abajo no me gusta así que lo mando a un archivo externo llamado consolelog
