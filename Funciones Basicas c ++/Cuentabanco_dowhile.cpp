#include <iostream>

using namespace std;

//definicion de variables
int main(){
    int pin, n;
    double cuenta, retiro;

//este es el valor de la cuenta, se lo asigne a un valor definido por mi mismo para definir cuanto dinero ya existe en el cajero
    cuenta = 5345.89;
//el do while sirve para crear un bucle donde se siga pidiendo el pin hasta que la persona decida salirse que en este caso, eso pasa al digitar el 0
    do
    {
     cout<<"Cual es el pin de su cuenta: ";
     cin>>pin;
     //dentro del bucle hay una condicion que sirve para verificar si el pin es correcto o no
     if (pin == 170207)
     {
        //si se escribe el pin correcto, se mostrara el monto total de la cuenta y se preguntara cuanto dinero se va a retirar.
        cout<<"Su cuenta tiene "<<cuenta<< "$"<<endl;
        cout<<"Cuanto dinero quiere retirar: ";
        cin>>retiro;

        cuenta -= retiro;
     //despues se muestra el nuevo valor de la cuenta al sobreescribir la variable
        cout<<"Actualmente tiene "<<cuenta<< "$"<<endl;
     }else{
        cout<<"Incorrecto"<<endl;
     }
     //Aqui es cuando el usuario decide si dejar de utilizar el cajero o seguir utilizandolo
     cout<<"Quiere volver a ingresar u pin? Presione cualquier numero menos 0 si desea ingresear otro pin y 0 si desea salirse del cajero automatico: ";
     cin>>n;

    } while (n !=0);

 //finalizacion del codigo
  cout<<"Muchas gracias, que tenga una feliz tarde :)";

 return 0;    
}