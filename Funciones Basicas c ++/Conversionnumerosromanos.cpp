#include <iostream>

using namespace std;

int main (){
    //Es necesario definir estas variables para convertir los numeros en numeros romanos, debido a los distintos signos
    int n, millar, decenas, unidades, centenas;

    cout<<"Ingrese un numero del rango 1 a 3999: ";
    cin>>n;
   //este if es para asegurarnos que el numero que ponga esta en el rango permitido
   if (n>=1 && n<=3999)
   {
    //al sacar el mod con %, uno puede identificar cual es la unidad, decena, centena, decena, millar, etc. Despues se tiene que dividir entre 10 para seguir el proceso.
    unidades = n%10;

    n = n/10;
    decenas = n%10;

    n = n/10;
    centenas = n%10;

    millar = n/10;
    //Esta vez se utilizarn switch para los distintos casos
    switch (millar)
    {
     case 1:
     cout<<"M";break;
     case 2:
     cout<<"MM";break;
     case 3:
     cout<<"MMM";break;
    }
    switch (centenas)
    {
     case 1:
     cout<<"C";break;
     case 2:
     cout<<"CC";break;
     case 3:
     cout<<"CCC";break;
     case 4:
     cout<<"CD";break;
     case 5:
     cout<<"D";break;
     case 6:
     cout<<"DC";break;
     case 7:
     cout<<"DCC";break;
     case 8:
     cout<<"DCCC";break;
     case 9:
     cout<<"CM";break;
    }
    switch (decenas)
    {
     case 1:
     cout<<"X";break;
     case 2:
     cout<<"XX";break;
     case 3:
     cout<<"XXX";break;
     case 4:
     cout<<"XL";break;
     case 5:
     cout<<"L";break;
     case 6:
     cout<<"XL";break;
     case 7:
     cout<<"XLL";break;
     case 8:
     cout<<"XLLL";break;
     case 9:
     cout<<"XC";break;
    }
    switch (unidades)
    {
     case 1:
     cout<<"I";break;
     case 2:
     cout<<"II";break;
     case 3:
     cout<<"III";break;
     case 4:
     cout<<"IV";break;
     case 5:
     cout<<"V";break;
     case 6:
     cout<<"VI";break;
     case 7:
     cout<<"VII";break;
     case 8:
     cout<<"VIII";break;
     case 9:
     cout<<"IX";break;
    }
   }else{
    cout<<"El numero ingresado no pertenece al rango del programa";
   }
 return 0;
}