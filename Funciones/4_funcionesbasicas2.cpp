#include <iostream>

using namespace std;

//definicion de funciones de las operaciones, todas son flotantes, ya que se busca retornar un valor flotante
float suma(int n1, int n2) {
    float suma=0;
    suma = n1 +n2;
    return suma;
 }

 float resta(int n1, int n2){
    float resta=0;
    resta = n1 - n2;
    return resta;
 }

 float multiplicacion(int n1, int n2){
    float multiplicacion=0;
    multiplicacion = n1 * n2;
    return multiplicacion;
 }

 //cuerpo principal
 int main(){
    //definicion de variables
    int n1=0, n2=0, mate;
  
  //Este do while sirve para crear un bucle, el cual se terminara hasta que uno escriba la opciones de salirse del programa (4)
 do
 {
    //encabezados donde se piden los valores
    cout<<"BIENVENIDO A TU CALCULADORA DE SUMA, RESTA y MULTIPLICACION"<<endl;
    cout<<"Ingrese el primer numero: ";
    cin>>n1;
    cout<<"ingrese el segundo numero: ";
    cin>>n2;

    cout<<"----OPERACIONES POSIBLES----"<<endl;
    cout<<"1) Suma"<<endl;
    cout<<"2) Resta"<<endl;
    cout<<"3) Multiplicacion"<<endl;
    cout<<"4) Salirse del programa"<<endl;
    cout<<"Ingrese el numero de la operacion que quiera realizar: ";
    cin>>mate;
    
    //dependiendo del numero que uno escriba, se va a realizar un caso distinto. Si se escribe 4, el bucle terminara
    switch (mate)
    {
    case 1:
        cout<<"La suma de los dos numeros es: "<<suma(n1,n2)<<endl;
        break;
    case 2:
        cout<<"La resta de los dos numeros es: "<<resta(n1, n2)<<endl;
        break;
    case 3:
        cout<<"La multiplicacion de los dos numeros es: "<<multiplicacion(n1, n2)<<endl;
        break;
    case 4:
        cout<<"Adios! Hasta la proxima!"<<endl;
        break;
    default: cout<<"Error, no hay ninguna operacion que coincide con ese numero"<<endl;
        break;
    }
 } while (mate != 4);

  //finalizacion del codigo
    return 0;

 }