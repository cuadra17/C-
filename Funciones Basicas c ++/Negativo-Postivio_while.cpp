#include <iostream>

using namespace std;

int main()
{
    int n;
    cout <<"Ingrese un numero: ";
    cin >>n;

    while (n!=0)
    {
     if (n>0)
     {
     cout<<"El numero es positivo "<<endl;
     }else{
     cout<<"El numero es negativo "<<endl;
     }

    cout <<"Ingrese un numero: ";
    cin >>n;
    }
    return 0;
}