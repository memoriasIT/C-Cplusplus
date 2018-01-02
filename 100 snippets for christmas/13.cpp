#include <iostream>
using namespace std;
const unsigned MAX = 10;
typedef float TArray[MAX];


int main()
{
    TArray a = {0};

    for (int i = 0 ; i < MAX; i++){
        cout << a[i];
    }
}
