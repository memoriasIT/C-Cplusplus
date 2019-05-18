#include <iostream>
using namespace std;

int main() {
  int decision;

  cout << "Introduce numero del 0 al 4: ";
  cin >> decision;

  switch (decision) {
    case 0:
      cout << "0";
      break;
     case 1:
      cout << "1";
      break;       
     case 2:
      cout << "2";
      break;
     case 3:
      cout << "3";
      break;
     case 4:
      cout << "4";
      break;       
     default:
      cout << "Numero no valido";
      
  }

}
