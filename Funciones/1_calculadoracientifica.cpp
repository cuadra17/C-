#include <iostream>

using namespace std;

//definicion de funciones de cada una de las operaciones. Todas son funciones flotantes menos la del numero primo que se utiliza un bool, ya que el objetivo no es sacar un numero, sino obtener si la afirmacion es verdadera o falsa. 

float suma(int valor1, int valor2) {
    float suma=0;
    suma = valor1 +valor2;
    return suma;
 }

 float resta(int valor1, int valor2){
    float resta=0;
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

int factorial(int valor1){
    int factorial=1, i=0;
    for (i = 1; i <= valor1; i++)
    {
     factorial = factorial *i;
    }
    
  return factorial;   
}

float comparacion(int valor1, int valor2){
  float valormenor =0;
  if (valor1 > valor2)
  {
   valormenor = valor2;
  }else if (valor2 > valor1)
  {
   valormenor = valor1;
  }else{
    valormenor = valor1;
  }
  return valormenor;
}

bool primo(int valor1){
//se utiliza un for para crear un bucle que nos confirme si el numero solo se puede dividir por si mismo y por 1, lo cual significa que es un numero primo.
 for (int i = 2; i < valor1/2; i++)
 {
    if (valor1 % i == 0)
    {
        return false;
    }
 }
 return true;
}

//cuerpo principal
int main(){
    //definicion de variables
    float valor1, valor2, suma1, resta1, multiplicacion1, division1, factorial1, factorial2, menor;
    int operacion;
    bool primo1, primo2;

    cout<<"BIENVENIDO A TU CALCULADORA CIENTIFICA"<<endl;

    cout<<"Ingrese el primer numero: ";
    cin>>valor1;

    cout<<"Ingrese el segundo numero: ";
    cin>>valor2;
    //encabezado con menu para las opciones
    cout<<"-------Posibles operaciones-------"<<endl;
    cout<<"1) Suma"<<endl;
    cout<<"2) Resta"<<endl;
    cout<<"3) Multiplicacion"<<endl;
    cout<<"4) Division"<<endl;
    cout<<"5) Factorial"<<endl;
    cout<<"6) Comparacion"<<endl;
    cout<<"7) Numero primo"<<endl;

    cout<<"Ingrese el numero de la operacion que quiere realizar: ";
    cin>>operacion;
    //cada operacion distinta es un caso distinto que se utiliza en el switch
    switch (operacion)
    {
    case 1:
        suma1 = suma(valor1, valor2);
        cout<<"La suma de los numeros es: "<<suma1;
        break;
    case 2:
        resta1 = resta(valor1, valor2);
        cout<<"La resta de los numeros es: "<<resta1;
        break;
    case 3:
        multiplicacion1 = multiplicacion(valor1, valor2);
        cout<<"La multiplicacion de los numeros es: "<<multiplicacion1;
        break;
     case 4:
        division1 = division(valor1, valor2);
        cout<<"La dividison de los numeros es: "<<division1;
        break;
    case 5:
       factorial1 = factorial(valor1);
       factorial2 = factorial(valor2);
       cout<<"El factorial del numero: "<<valor1<<" es: "<<factorial1<< "  y el factorial del numero: "<<valor2<<" es: "<<factorial2<<endl;
       break;
    case 6:
       menor = comparacion(valor1, valor2);
       cout<<"El numero menor es: "<<menor;
     break;
     case 7:
      primo1 = primo(valor1);
      primo2 = primo(valor2);
      
      if (primo1 == true)
      {
        cout<<"El numero: "<<valor1<<" es primo"<<endl;
      }else{
         cout<<"El numero: "<<valor1<<" no es primo"<<endl;
      }
      
      if (primo2 == true)
      {
        cout<<"El numero: "<<valor2<<" es primo"<<endl;
      }else{
         cout<<"El numero: "<<valor2<<" no es primo"<<endl;
      }
      break;
      default: cout<<"Error, no hay ninguna operacion acorde con ese numero";
      break;
           
    }
   //finalizacion del codigo.
    return 0;
}

