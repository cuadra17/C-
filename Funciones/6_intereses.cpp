#include <iostream>
#include <cmath>
using namespace std;

float interes_simple(float monto, float periodo, float tasa){
    float interessimple, interes;
    interes = 1 + (tasa/100 * periodo);
    interessimple = monto * interes;
    return interessimple;
}

float interes_compuesto(float monto, float periodo, float tasa){
    float interescompuesto = 0;
    interescompuesto = 1 + tasa/100;
    interescompuesto = pow(interescompuesto, periodo);
    interescompuesto = monto * interescompuesto;
    return interescompuesto;
}

int main(){
    int opcion;
    float monto, periodo, tasa, tasafinal, interessimple, interescompuesto;
   do
   {
    cout<<"Que desea realizar: "<<endl;
    cout<<"1. Calcular interes simple"<<endl;
    cout<<"2. Calcular interes compuesto "<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Su opcion es: ";
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        cout<<"Ingrese monto a invertir $";
        cin>>monto;
        cout<<"Ingrese Tasa de interes anual (%): ";
        cin>>tasa;
        cout<<"Ingrese numero de anios de la inversion: ";
        cin>>periodo;

        cout<<"Calculo de interes simple: "<<endl;

        for (int i = 1; i <= periodo; i++)
        {
            tasafinal = (tasa *10)*i;
            interessimple = interes_simple(monto, i, tasa);
            cout<<"Capital inicial: $   "<<monto<<"     Interes obtenido al final del anio "<<i<<"   $"<<tasafinal<<"    Valorfuturo:$   "<<interessimple<<endl;
        }
        
        break;
     case 2:
        cout<<"Ingrese monto a invertir ";
        cin>>monto;
        cout<<"Ingrese Tasa de interes anual (%): ";
        cin>>tasa;
        cout<<"Ingrese numero de anios de la inversion: ";
        cin>>periodo;

        cout<<"Calculo de interes compuesto: "<<endl;
        
        for (int i = 1; i <=periodo; i++)
        {
            interescompuesto = interes_compuesto(monto, i, tasa);

            cout<<"Capital inicial: $   "<<monto<<"     Interes obtenido al final del anio "<<i<<"   $    Valorfuturo:$   "<<interescompuesto<<endl;
        }
        

        
        break;
     case 3: 
        cout<<"Saliendo... Gracias!!!";
        break;
    default:
        cout<<"Error, no hay ninguna funcion definida con ese numero ";
        break;
    }
   } while (opcion != 3);
    
  return 0;
}