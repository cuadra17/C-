#include <iostream>

using namespace std;

int main (){
    int n, res;
    cout<<"Ingrese numero entero: ";
    cin>> n;

    res = n % 2;

 switch (res)
 {
 case 1:
    cout<< n << " es numero impar";
    break;
 case 0:
  cout<< n << " es numero par";
  break;
 default:
  cout<< "Datos incorrectos";
 }

 return 0;
}
