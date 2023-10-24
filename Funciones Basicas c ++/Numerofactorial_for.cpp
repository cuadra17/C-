#include <iostream>

using namespace std;

int main(){
    int n=0, i=0, factorial=1;

    cout<<"Ingrese un numero ";
    cin >> n;

    for (i = 1; i <=n; i++)
    {
     factorial = factorial * i;
     cout<< "Valor de resultado cuando i es "<< i << ": "<<  factorial << endl;
    }
   cout<<"El numero factorial de: "<< n <<" es: "<<factorial;

   return 0;
}