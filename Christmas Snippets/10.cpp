//Escriba un programa que efectúe la conversión de un número natural en base 10 a otra
//determinada base, sabiendo que el resultado no sobrepasará los 50 dígitos. El usuario introducirá
//primero el número en base 10 y después la base a la que convertirlo (el programa debe
//asegurarse de que la base no sea ni menor de 2 ni mayor de 9)
//
//Nota: Recordemos que para obtener la representación en una base b de un número en
//decimal, dividimos entre b primero el número y después sucesivamente los diferentes
//cocientes que se vayan obteniendo hasta que el cociente sea cero. Los diferentes restos
//obtenidos en esas sucesivas divisiones constituyen la representación en dicha base b (pero
//en orden inverso a como se han ido calculando). Por ejemplo, para el número decimal 26 en
//base 2 es 11010.
//26 | 2
// 0  13 | 2
//    1    6 | 2
//         0   3 | 2
//             1   1 | 2
//                 1   0

#include <iostream>
using namespace std;

//--- DECLARE CONSTANTS AND DATATYPES ---//
const int MAX = 50;
typedef int TArray[MAX];

struct TDatos{
    TArray resultados;
    int tam;
};

//--- FUNCTIONS ---//
void PedirDatos(TDatos& Datos, int& base,int& numero);
void Dividir(TDatos& Datos, int base, int numero);
void Imprimir(TDatos& Datos);
//--- MAIN FUNCTION ---//
int main (){
    int base, numero;
    TDatos Datos;

    PedirDatos(Datos, base);
    Dividir(Datos,base,numero);
    Imprimir(Datos);
}


void PedirDatos(TDatos& Datos, int& base,int& numero){
    cout << "Introduzca valor para la base";
    cin >> base;
    cout << "Introduzca valor inicial";
    cin >> numero;
}


void Dividir(TDatos& Datos, int base, int numero){
    int resultado;
    do{
        Datos.resultados[i]= numero%base;
        resultado = resultado/base;
        Datos.tam++;
    }while (resultado != 0);
}

void Imprimir(TDatos& Datos){
    for (int i = 0; i < Datos.tam; i++){
        cout <<
    }
}



 MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMmddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyhhhhhhhhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyhhhhhhyhhhhhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyhhhhy+/////+shhhyyhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyhhs/:::::::::/shhhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyhhhh+:::::::::::::ohhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyhy+:::::::::::::::shhhhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyhh+::::::::::::::::+hhhhhhhhhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyhy:::::::::::::::::+o+++++oosyyhhhhhhhhhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyhy/::::::::::::::::::::::::::://+oosyyyyyhhhhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyhhy/:::::::::::::::::::::::::::::::::::///++osyyyyhhyyyyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyhhs/::::::::::::::::::::::::::::::::::::::::://+oosyyyyyyhhhyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyhhhhs+:::::::::::::::::::::::::::::::::::::::::::::::://+shyhyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyhhhyo/::::::::::::::::::::::::::::::::::::::::::::::::/hhhyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyhhhyo/:::::::::::::::::::::::::::::::://::::::::::::+hyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyhhhs/::::::::::::::::::::::::::/osyhhysso+/::::/oyh/+yyhyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyhyhhhhs/:::::::::::::::::::::::oshhhyyyyyyyyyso/::/oo/yyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyhhhs/::::::::::::::::::::/shhhhyyyyyyyyyyhyso/+oyhyhhyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyhhhs+::::::::::::::::::+yhhhhyyyyyyyyyyyhhs:::/yhhhyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyhhhhs/::::::::::::::::/sdhyyyyyyyyyyyyyyhs::::+hyhyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhs/:::::::::::::::+hhhhyyyyyyyyyyyyhy///::ohyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhyo/::::::::::::::sysyhyyyyyyyyyhyy+:::::shhyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhhoso:::::::::::::::::+shhyyyyyyyh+:::::+hyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyhyyhhhoos+:::::::::::::::::++:::::::///:::/yhyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhs+os/:::::::::::::::::::::::::::::/yhhhyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhhho/oo+:::::::::::::::::::::::::::ohhhyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhyo/+so+//////++++++////////::/oyhyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhyho+ssooo+++++++++//+oyhhyyhhyyyhyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy+:oy+++oo++/::::::::/oyhhyyyhyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyho:+s+:::/+oso/::::::::/+syyyhyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhyyhs//oo/::::/oyyo/:::::::::/+osyhhyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhys//oo/:::::+syyso+//:::::::/+syyhyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhyyy+:/oso/::::/syhhyyyso+/::::::/+syyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhyo/:/yyo/::::/oyhyhyhhyyso+/::::+yyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhy/:yhhyso/:::/oyhyyyhyyhhyyso+:ohyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhysyhyyhhys+/:::+yhyyyyyyyyhhhsyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhyyyhyyyyhhyo+::/yyyyyyyyyyyyhhhyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhhhy+/syyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhyhyyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmhyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyysysssssyyyssysssssssssyyyyyyyyhyyyyyyyyyyyyyyyyyyyyyyyyhmMMMM
MMMMmddddddddddddddddddddddddddddddddd//oo+oo+s+o+o++o+o+/o+:/dddddddddddddddddddddddddddddddddmMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmNNNNmNmNmmNNNmmNmmNNmNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMhdNhNMMMNydMMMMMNMMMMMNNMMMMMMNNmmMMMMNhMMNNMMMMMhmMMNNMMMdmMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMhdyymhsym+omyhMMsmdyhmyohdmyhdodyoMNyhmoMMohyydyysyhhsdMNyyyyhMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMdNNdddhhmhhNhmMMNdMhmmdhmhmddNhNhhMMhmNhMM+mmhmmhhdhmhNMMhddhmMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMyy+MshdsyyhohhMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
