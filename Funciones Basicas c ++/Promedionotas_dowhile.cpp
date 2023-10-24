#include <iostream>

using namespace std;

int main()
{
    //definicion de variables
    float promedio = 0;
    int n=1; //n es una variable que sirve como contador y ademas nos auxilia para crear un rango con un limite de las veces que este bucle se va a repetir.
    double notas=0, suma=0;
    
    //do while para crear un bucle y asi lograr eficazmente preguntar las 10 notas que has sacado y asi poder sacar el promedio de esas notas.
    do
    {
     cout<<"Ingrese la nota " << n << ": ";
     cin>>notas;

    //Esta condicion sirve por si el usuario decide poner una nota que no este en el rango de 1 y 10
     if ((notas >=0)&& (notas <=10))
     {
        suma = suma + notas; //Al comienzo suma es 0, despues se va cambiando dependiendo de la nota
        n = n+1; 
     }else{
        cout<<"Error " ; 
     }
     
    } while (n <=10); //cuando n llegue a 10, este bucle dejara de pedir notas y el programa continuara
    
  promedio = suma/10;//formula para sacar el promedio

  cout<<"El promedio de tus notas es: "<<promedio;

  return 0;
}