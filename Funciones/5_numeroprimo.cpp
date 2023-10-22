#include <iostream>

using namespace std;

//definicion de funciones, en este caso es una funcion bool, ya que se busca determinar si la condicion es true or false
bool primo(int n1){
 for (int i = 2; i < n1/2; i++)
 {
    if (n1 % i == 0)
    {
        return false;
    }
 }
 return true;
}

//cuerpo principal
int main(){
    //definicion de variables 
    int n1=0, numero;
    
    cout<<"Ingrese un numero para saber si es primo o no: ";
    cin>>n1;

    //variable para guardar el true or false
    numero = primo(n1);

  //esta condicion es para que el programa imprima si es el numero primo o no
  if (numero == true)
      {
        cout<<"El numero: "<<n1<<" es primo"<<endl;
      }else{
         cout<<"El numero: "<<n1<<" no es primo"<<endl;
      }

    //finalizacion del programa
   return 0;
}
