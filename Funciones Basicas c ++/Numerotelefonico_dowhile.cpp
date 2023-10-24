#include <iostream>

using namespace std;

int main(){
    //definicion de variables
    int i=0;
    string numero; 
    cout<<"Ingrese un numero telefonico: ";
    cin>>numero;
    
    //esta condicion sirve para verificar si el numero tiene 8 caracteres
    if (numero.length() <=8 )
    {
        //while sirve para crear un bucle que 
       while (i<8)
    {
     cout<<numero[i]<<endl;
     i++;   
    }  
    }else{
        cout<<"Error, el valor ingresado no cumple con las condiciones de un numero telefonico";
    }
    
 return 0;
}