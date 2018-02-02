#include <iostream>
#include <string>
using namespace std;

//MAX ARRAY SIZE
const unsigned MAX = 10;
typedef string TArray [MAX];

// - For passing structs always use & but use const if the value is not changed.
// - You can't use cin, cout, ==, etc. for the whole array.

//USING STRUCTS TO MANAGE ARRAY SIZE
struct TDatos{
    TArray Datos;
    unsigned nDatos;
};

void PrintArray(){
    //Iterate from 0 to nDatos
    for (int i = 0 ; i < nDatos; i++){
        cout << Datos[i];
    }
}

void SaveinArray(){
    //Declare struct and string
    TDatos Datos;
    string Pal;
    //Set items to 0
    Datos.nDatos = 0;

    do{
        cin >> Pal;
        Datos.Datos[nDatos] = Pal;
        //nDatos as a counter
        Datos.nDatos++;
    //Don't want to overflow array
    } while (Pal != "FIN" && nDatos < MAX);
}

// - For passing structs always use & but use const if the value is not changed.
// - A struct should not be used in a return, a void function is more accurate.
// - You can't use cin, cout, ==, etc. for the whole struct.

//MULTIDIMENSIONAL ARRAYS

const unsigned filas = 3;
const unsigned columnas = 5;

//Way 1:
typedef int TColumnas [columnas];
typedef TColumnas TMatriz [filas];

//Way 2:
typedef int TMatriz [filas][columnas];

//Get values (y,x)
cout << Matriz[fila][columna];


//USING STRINGS
#include <string>

string nombre = "Pepe Garcia";

//Assing same content
cadena1 = cadena2;
//String size
cadena.size()
//Compare strings
nombre == "jose"
nombre != "jose"

nombre1 > nombre2
"jose" < nombre
...

//name.compare()
res = nombre.compare(nombre2)
    res < 0 if nombre < nombre2
    res = 0 if nombre = nombre2
    res > 0 if nombre > nombre2

//Concatenation
//Adds a space
cadena += " ";
//Joining pieces
nmb = cadena + ' ' + "Garcia";
nmb = "Pepe" + "Luis"; //ERROR!

//Getting a value (starts with index 0)
lastletter = cadena[cadena.size()-1];

//Substrings
pedro = "Jose Miguel"
//i = start to cut
//t = how many chars
pedro.substr(i,t);
pedro.substr(5, 6) --> Miguel

//Getting strings from the user
//Gets words separated by spaces
cin >> cadena;
//Read the whole line
getline(cin, cadena);
//Read until ;
getline(cin, cadena, ;);

// - Use & and const & just like arrays or structs
// - Not recommended with return













