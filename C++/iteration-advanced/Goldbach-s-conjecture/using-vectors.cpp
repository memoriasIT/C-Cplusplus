/************************************************************************
* Title: Testing Goldbach's conjecture                                  *
* Version: 0.1                                                          *
* Date: 7/12/2017                                                       *
* Purpose: Testing the Goldbach's conjecture in an interval given       *
* Author: Memorias de un informatico                                    *
* Twitter/Github: @MemoriasIT                                           *
************************************************************************/

#include <iostream> //Console i/o
#include <vector> //Storing errors in conjecture
#include <string.h> //For mem manipulation
#include <algorithm> //binary search
using namespace std;

void intervalos(int& intervalosup, int& intervaloinf);
void getprimeerastothenes(int intervalosup, int intervaloinf,  vector<int>& primos,int& nprimos);
void getnpares(int intervaloinf,int intervalosup, int& npares, vector<int>& pospares);
void goldbach(int n, vector<int> primos);

// ------- MAIN FUNCTION ------- //
int main(){
    int intervaloinf, intervalosup, npares, nprimos,comprobacion=0;
    vector <int> pospares;
    vector <int> primos;

    intervalos(intervalosup, intervaloinf);

    getprimeerastothenes(intervalosup,  intervaloinf,   primos, nprimos); //conseguir primos hasta limsuperior
    getnpares( intervaloinf, intervalosup,  npares,  pospares);

    for (int i = 0; i <= npares;i++){ //hacer la operacion npares de veces
    goldbach(pospares[i], primos);
    }

    if (pospares.size() == npares && pospares.size()!=0){
        cout << "\n\nTodos los pares en el rango elegido cumplen la conjetura.\nnunununununununununununununununununununununununununununununun\n";
    }
    return 0;
}

// ------- GOLDBACH'S CONJECTURE ------- //
void goldbach(int n, vector<int> primos){
    int resta;
    for (int i = 0; primos[i] <= (n/2); i++){
        resta = n - primos[i];
        if (binary_search(primos.begin(), primos.end(), resta))
        {
            cout << primos[i] << " + " << resta << " = " << n << endl;
            return;
        }
    }
}

// ------- SIEVE OF ERASTOTHENES ------- //
void getprimeerastothenes(int intervalosup, int intervaloinf,  vector<int>& primos,int& nprimos){ //Using sieve of Erastothenes
    bool prime[intervalosup+1]; //Bolean Array starting in 2
    memset(prime, true, sizeof(prime)); //Setting all addresses to true

    for (int p=2; p*p<=intervalosup; p++){ //Multiples for erastothenes starting in first prime number
        if (prime[p] == true){ //If number has still not been changed then...
            for (int i=p*2; i<=intervalosup; i += p){ //Find first number that is not marked and then set to false all
                prime[i] = false;
            }
        }
    }

    for (int p=intervaloinf-1; p<=intervalosup; p++) //Saving values set in array as true in vector and counting how many of them there are
       if (prime[p]){
          primos.push_back(p);
          nprimos++;
        }
}
// ------- GET NUMBER OF PAIR ------- //
void getnpares(int intervaloinf,int intervalosup, int& npares, vector<int>& pospares){
    int i = intervaloinf;
    npares = 0;
    for (i;i <= intervalosup; i++){
        if (i % 2 == 0){
                npares++;
                pospares.push_back(i);
        }
    }
}
// ------- GET INTERVALS ------- //
void intervalos(int& intervalosup, int& intervaloinf){
    do{
    cout << "\nnunununununununununununununununununununununununununununununun\nIntroduce intervalo inferior: ";
    cin >> intervaloinf;

    cout << "\nIntroduce intervalo superior: ";
    cin >> intervalosup;
    }while(intervaloinf > intervalosup || intervaloinf <= 2);

}
