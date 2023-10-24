#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a=0, b=0, c=0, determinante;
    double resultado1, resultado2, raiz;

    //a=0;
    //b=-4;
    //c=-2;
   
    cout<<"Introduce a:";
    cin>> a;
    cout<<"Introduce b:";
    cin>>b;
    cout<<"introduce c:";
    cin>>c;

    determinante = (b*b)-(4*a*c);

    if (a==0){
     raiz = (-b)/c;
     cout<<"La ecuacion es lineal" << raiz;
    
    }
     else if (determinante>0){
    
     resultado1 = ((-b)+sqrt(determinante))/(2*a);
     resultado2 = ((-b)-sqrt(determinante))/(2*a);

     cout<<"La raices de esta ecuacion cuadratica son " << resultado1  <<"  y " << resultado2;
    }
    else{
     cout<<"la respuesta no existe, ya que daria raices imaginarias";
    }
 return 0;
}