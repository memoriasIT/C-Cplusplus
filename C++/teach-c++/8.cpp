#include <iostream>
using namespace std;

void imprimir( int n );

int main()
{
  int n = 4;
  
  cout << "FELIZ NAVIDAD"<< endl;
  imprimir(n);


  return 0;
}


void imprimir( int n ) {
  for (int altura = 1; altura <= n; altura++){

    // Imprimir espacios inicio de linea
    for (int espacios = n; espacios >= altura; espacios--){
      cout << " ";
    }
    


    // Imprimir asteriscos en linea
    for (int asteriscos = 1; asteriscos <= altura; asteriscos++){
      if (altura == 1){
         cout << "@";
      } else {
         cout << "**";
      } 
          }


    // Acabar linea
    cout << "\n";
  }   
}
