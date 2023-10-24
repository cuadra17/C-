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

    if ((a > b) && (b < c)) {
    cout<<"El numero menor es: " << b;
    }else if ((b > a) && (a < c))
    {
    cout<<"El numero menor es: "<< a;
    }else if ((a > c) && (c < b))
    {
    cout<<"El numero menor es: "<< c;
    }else{
    cout<<"Los numeros no son distintos";

    }
    
    return 0;
}