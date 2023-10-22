#include <iostream>

using namespace std;

//la funcion factorial ayudara a definir el numero factorial del numero ingresado
int factorial(int n){
    int factorial=1, i=0;
    //en este caso se necesita el for para sacar el factorial de un numero
    for (i = 1; i <= n; i++)
    {
     factorial = factorial *i;
    }
  return factorial;   
}
//cuerpo principal
int main(){
   //definicion de variables
   int n;

   cout<<"Ingrese un numero: ";
   cin>>n;

   //finalizacion del codigo utilizando la funcion
   cout<<"El factorial del numero es: "<<factorial(n);

   return 0;
}