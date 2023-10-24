#include <iostream>

using namespace std;

int main()
{
    double precio, descuento, preciofinal, preciofinaldescuento;
    int cantidad;

    cout<<"Cual es el precio del producto que vas a comprar? ";
    cin>>precio;
    cout<<"Cuanta cantidad de producto vas a comprar? ";
    cin >>cantidad;
    cout<<"Ingrese el porcentaje de descuento que quiera aplicar: ";
    cin>>descuento;
 //En este caso el descuento equivale al preciofinal, no a cada producto. 
    descuento = descuento/100;
    preciofinal = precio*cantidad;
    preciofinaldescuento = preciofinal - (preciofinal*descuento);
    
    cout<<"Con el descuento, usted tiene que pagar: "<<preciofinaldescuento;

   return 0;
}