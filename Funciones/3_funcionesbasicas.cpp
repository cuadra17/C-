#include <iostream>

using namespace std;

//Estableciendo las funciones de suma, resta, multiplicacion y division
int suma(int valor1, int valor2) {
    int suma=0;
    suma = valor1 +valor2;
    return suma;
 }

 int resta(int valor1, int valor2){
    int resta=0;
    resta = valor1 - valor2;
    return resta;
 }

 float multiplicacion(int valor1, int valor2){
    float multiplicacion=0;
    multiplicacion = valor1 * valor2;
    return multiplicacion;
 }
 
 float division( int valor1, int valor2){
    float division=0;
    division = valor1 / valor2;
    return division;
 }

//cuerpo principal para realizar las operaciones llamando las funciones establecidas anteriormente
int main(){
//variables definidas
 int valor1=0, valor2=0;

 cout<<"Ingrese el primer valor: ";
 cin>>valor1;
 cout<<"Ingrese el segundo valor: ";
 cin>>valor2;

//finalizacion del codigo
 cout<<"La suma de estos numeros es: "<<suma(valor1,valor2)<<endl;
 cout<<"La resta de estos numeros es: "<<resta(valor1,valor2)<<endl;
 cout<<"La multiplicacion de estos numeros es: "<<multiplicacion(valor1,valor2)<<endl;
 cout<<"La division de estos numeros es: "<<division(valor1, valor2)<<endl;

 return 0;

}