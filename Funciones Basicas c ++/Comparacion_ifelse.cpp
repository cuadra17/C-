#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a=0, b=0, c=0;

    cout<<"Introduce a:";
    cin>> a;
    cout<<"Introduce b:";
    cin>>b;
    cout<<"introduce c:";
    cin>>c;

    if (a == (b*c))
    {
    cout<<"El primer numero es igual a la multiplicacion del segundo con el tercero";
    }else if (b == (a*c))
    {
    cout<<"El segundo numero es igual a la multiplicacion del primero con el tercero";
    }else if (c == (a*b))
    {
    cout<<"El tercer numero es igual a la multiplicacion del primero con el segundo";
    }else{
    cout<<"Ningun caso especial se cumple";
    }

    return 0;  
}