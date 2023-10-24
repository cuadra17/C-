#include <iostream>

using namespace std;

int main (){
    //Es necesario definir una variable de temperatura para despues utilizarla en el switch
    double celcius, conversion;
    char temperatura;
    cout<<"Ingrese la temperatura a celcius: ";
    cin>>celcius;
    cout<<"Lo quieres convertir a Fahrenheit o Kelvin? Ingrese F por Fahrenheit o K por Kelvin ";
    cin>> temperatura;

    switch (temperatura)
    {
    case 'F':
    conversion =(celcius * 1.8)+32;
    cout<<"La temperatura en Fahrenheit es: "<<conversion;
    break;
    case 'K':
    conversion = celcius+273.15;
    cout<<"La temperatura en Kelvin es: "<<conversion;
    break;
    default:
    cout<<"Error - no existe temperatura a convertir";
    }
 return 0;
}
