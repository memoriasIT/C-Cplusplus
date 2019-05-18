#include <iostream>
using namespace std;


int main()
{
  int num = 0;


  // BUCLE WHILE 
  while (num < 20) {
    num = num +2;
  }
  
  cout << num << endl;


  // BUCLE FOR
  num = 0;

  for (int contador = 0; contador < 20; contador++){
    num++; 
  }
  
  cout << num << endl;


  // DO WHILE
  num = 0;
  do {
   cout << num;
  
  } while (num != 0);









  return 0;
}
