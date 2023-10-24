// La ingeniera me indico realizar este ejercicio en vez del del número de Pell pseudoprimo debido a su dificultad
#include <iostream>

using namespace std;

int main (){
    //definiendo varianles con el precio que se encontrara en el menu
    double palomitas=5.00, nachos=3.25, sodas=1.50, entradas=4.99, dulces=1.25, preciofinal, precifofinalDescuento; 
    int cantidadP, cantidadN, cantidadS, cantidadE, cantidadD, estudianteUca;

   cout<<"Bienvenido al cine:) ";
   cout<<"Cuantas entradas quiere? ";
   cin>>cantidadE;
   
   //Para entrar al cine necesitas entradas, es por eso que este condicional sirve para establecer si el usuario va a entrar al cine o no.
   if (cantidadE ==0)
  {
    cout<<"No podes entrar al cine sin comprar entradas ";
   }else{
    // se pregunta cuanta cantidad de objetos uno quiere
   cout<<"Cuantas palomitas? ";
   cin>>cantidadP;
   cout<<"Cuantas sodas quiere? ";
   cin>>cantidadS;
   cout<<"Cuantos nachos quiere? ";
   cin>>cantidadN;
   cout<<"Cuantos dulces quiere? ";
   cin>>cantidadD;
  preciofinal = (entradas*cantidadE)+(palomitas*cantidadP)+(sodas*cantidadS)+(nachos*cantidadN)+(dulces*cantidadD);
  
  cout<<"Eres estudiante UCA? Si tenes el carnet presente presiona 1 y sino 2";
  cin>>estudianteUca;

  //Al ser estudiante UCA, existe un 25% de descuento para el cine . Es por eso que se utiliza switch
  switch (estudianteUca)
  {
  case 1:
    precifofinalDescuento = preciofinal - (preciofinal*0.25);
    break;
  case 2: 
    precifofinalDescuento = preciofinal;
    break;
  }

  
  //Al final del codigo se muestra el precio final
  cout<<"Tu precio final es: "<< precifofinalDescuento << " . Disfruta del cine ";
  }

   return 0;
 
}