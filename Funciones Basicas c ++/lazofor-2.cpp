#include <iostream>

using namespace std;

int main(){
    int n =0, i=0;

    cout<<"Ingrese un numero";
    cin >> n;
    for (i = 2; i < n; i = i+2)
    {
    cout<< i;
    }
    
    return 0;
}