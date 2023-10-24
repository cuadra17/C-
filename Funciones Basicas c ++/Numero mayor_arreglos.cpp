#include <iostream>

using namespace std;

int main(){
    //definicion de variables y el arreglo. El arreglo estara definido con un tamanio de 20
    int numero, mayor, n;
    int Arreglo[20];

    //Este for sirve para reemplazar el arreglo y darle valor a cada una de las posiciones
    for (int i = 0; i < 20; i++)
    {
        cout<<"Ingrese el numero que quiera que quede en la posicion "<<i<<" del arreglo: ";
        cin>>numero;

        Arreglo[i] = numero;
    }
    //Probando que funcione el for anterior
    /*for (int i = 0; i < 20; i++)
    {
        cout<<Arreglo[i]<<endl;
    }*/
    
    //El primer numero siempre sera al comienzo el mayor, es por eso que definimos la variable mayor con la posicion 0 del arreglo
    mayor = Arreglo[0];

   //Este for sirve para ir validando cada numero, de tal manera que se muestre cual es el numero mayor. Esta vez empieza el for en i = 1, ya que la posicion 0 no es necesaria evaluarla
    for (int i = 1; i < 20; i++)
    {
        n = Arreglo[i];
      //Este condicional sirve para ir verificando que numero es mayor
        if (mayor<n)
        {
            mayor = n;
        }else{
            mayor = mayor;
        }
        
    }
   //finalizacion del codigo
    cout<<"El numero mayor del arreglo es: "<<mayor<<endl;
    
    return 0;


    
}