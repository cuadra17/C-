#include <iostream>

using namespace std;

int main(){
 int base, exponente, i=1, valorfinal=1;  //se definen las variables necesarias para el ejercicio

 cout<<"Ingrese el numero que es la base: ";
 cin>>base;
 cout<<"Ingrese el numero que es el exponente: ";
 cin>>exponente;
 
//Se crea un for para que el valor final siempre se este multiplicando por la base hasta que la i indique.
 for (i = 1; i <= exponente; i++)
 {  
    valorfinal = valorfinal *base;
 }
 cout<<"El valor es : "<<valorfinal;

 return 0;
}