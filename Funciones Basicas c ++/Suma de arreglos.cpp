#include <iostream>

using namespace std;

int main(){
    //definicion de varible auxiliar y arreglos
    int contador;
    string ArregloA[10] = {"gato", "perro", "serpiente", "cerdo", "caballo", "rata", "mariposa", "serpiente", "vaca", "oso"};
    string ArregloB[10] = {"galleta", "pastel", "pie de manzana", "chocolate", "cheesecake", "calabaza", "dulce", "gomitas", "crepa", "helado"};
    //Este arreglo servira para sumar los otros dos arreglos y poner todos los datos en un mismo arreglo
    string ArregloC[20];
    
    //este for sirve para agarrar los datos del arreglo A y meterlos en los primeros 10 datos del arreglo C
    for (int i = 0; i < 10; i++)
    {
        ArregloC[i] = ArregloA[i];  
    }
    
    //este for sirve para agarrar los datos del arreglo B y meterlos en los ultimos 10 datos del arreglo C. Es por eso que se utiliza la variable contador para que no se vuelvan a sobreescribir los datos puestos en el primer for.
    for (int i = 0; i < 10; i++)
    {
       contador = i + 10;
       ArregloC[contador] = ArregloB[i];
    }
    
    cout<<"Los 20 datos del arreglo C son: "<<endl;
    //este for siver para mostrar los 20 datos del arreglo C en la pantalla
    for (int i = 0; i < 20; i++)
    {
        cout<<ArregloC[i]<<endl;
    }
    //finalizacion de codigo
    
    return 0;

}