#include <vector>
#include <iostream>
using namespace std;

int main(){
int value = 30, numvalue = 0;

vector<int> values;
while (numvalue<100){
    numvalue= numvalue + 10;
    values.push_back(numvalue);
    cout << numvalue<< endl;
}

}
