#include <iostream>

using namespace std;

int main(){
 char caracter; //la variable char es necesarial definirla para poder ingresar el caracter deseado
 int numero, i=0;  //definicion de variables 

//se pide el caracater y el numero de veces que se quiere que se repita el caracter para formar la cadena
 cout<<"Ingrese un caracter: ";
 cin>>caracter;
 cout<<"Ingrese el numero de cuantas veces se va a repetir el caracter ";
 cin>>numero;
 
 //Se va imprimir el caracter las veces hasta que se cumpla la condicion i <= numero (el pedido anteriormente).
 //Es importante iniciar la variable en 1 para que el codigo funcione
 for (i = 1; i <=numero; i++)
 {
  cout<< caracter;
 }
 
 return 0;
}