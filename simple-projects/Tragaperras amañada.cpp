/************************************************************************
* Title: Tragaperras amañada                                            *
* Version: 2.0                                                          *
* Date: 5/11/2017                                                       *
* Purpose: Rigged game, no special purpose but getting user mad.        *
* Author: Memorias de un informatico                                    *
* Twitter/Github: @MemoriasIT                                           *
************************************************************************/

#include <iostream>
using namespace std;

int main (){
    unsigned resta = 0, turno=2, usuario;
    double num, k, ordenata;

    cout << "Introduzca numero para jugar: ";
    cin >> num;

    k = (num-1)/4;
    if (k == int(k)){
        cout << "El " << num << " no me gusta, mejor empieza tu." << endl;
                  while (num != 0){
            while (turno % 2 == 0){
                    novalido2:
                    cout << "*****************************************" << endl;
                    cout << "TURNO DEL HUMANOIDE:" << endl;
                    cout << "Elija un numero del 1-3 para restar: " << endl;
                    cin >> resta;
                    switch(resta) {
                        case 1:
                            num--;
                            cout << "Resultado:" << num<< endl;
                        break;
                        case 2:
                            num = num-2;
                            cout  << "Resultado:" << num<< endl;
                        break;
                        case 3:
                             num = num-3;
                            cout << "Resultado:" << num << endl;
                        break;
                        default:
                            goto novalido2;
                            break;
                    }
                    turno++;
            }
            while (turno % 2 != 0){
                    cout << "=========================================" << endl;
                    if (num <= 0){
                        cout << "Perdiste amigo :)";
                        cin >> usuario;
                    } else {
                        cout << "TURNO DE LA MAQUINA..." << endl;
                        cout << "Asi que... " << num << " decido restar ";
                            if (int(num) % 2 != 0){
                                cout << "2." << endl;
                                num = num -2;
                            } else{
                                if (num/4 == int(num/4)){
                                    cout << "3." << endl;
                                    num = num -3;
                                } else {
                                    cout << "1." << endl;
                                    num = num -1;
                                }
                            }
                        cout<< "Resultado: " << num << endl;
                        turno++;
                        }
            }
        }


    } else{
        cout << "Empieza la casa ;)" << endl;
          while (num != 0){
            while (turno % 2 != 0){
                    novalido:
                    cout << "*****************************************" << endl;
                    cout << "TURNO DEL HUMANOIDE:" << endl;
                    cout << "Elija un numero del 1-3 para restar: " << endl;
                    cin >> resta;
                    switch(resta) {
                        case 1:
                            num--;
                            cout << "Resultado:" << num<< endl;
                        break;
                        case 2:
                            num = num-2;
                            cout  << "Resultado:" << num<< endl;
                        break;
                        case 3:
                             num = num-3;
                            cout << "Resultado:" << num << endl;
                        break;
                        default:
                            goto novalido;
                            break;
                    }
                    turno++;
            }
            while (turno % 2 == 0){
                    cout << "=========================================" << endl;
                    if (num <= 0){
                        cout << "Perdiste amigo :)";
                        cin >> usuario;
                    } else {
                        cout << "TURNO DE LA MAQUINA..." << endl;
                        cout << "Asi que... " << num << " decido restar ";
                            if (int(num) % 2 != 0){
                                cout << "2." << endl;
                                num = num -2;
                            } else{
                                if (num/4 == int(num/4)){
                                    cout << "3." << endl;
                                    num = num -3;
                                } else {
                                    cout << "1." << endl;
                                    num = num -1;
                                }
                            }
                        cout<< "Resultado: " << num << endl;
                        turno++;
                        }
            }
        }
    }
}
