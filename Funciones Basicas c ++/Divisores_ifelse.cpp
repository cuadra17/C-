#include <iostream>
#include <math.h>

using namespace std;

int main(){
   int n=0;

   cout<<"Introduce un numero:";
   cin>> n;

   if (n % 2 == 0)
   {
    cout<< n << " es multiplo de 2";
   }else if (n % 3 ==0)
   {
    cout<< n << " es multiplo de 3";
   }else if (n % 5 ==0)
   {
    cout<< n << " es multiplo de 5";
   }else if (n % 7 ==0)
   {
    cout<< n << " es multiplo de 7";
   }else if (n % 11 ==0)
   {
    cout<< n << " es multiplo de 11";
   }else if (n % 13 ==0)
   {
    cout<< n << " es multiplo de 13";
   }else if (n % 17 ==0)
   {
    cout<< n << " es multiplo de 17";
   }else
   {
    cout<< n << " no es multiplo de ningun numero que el programa puede determinar";
   }
    
 return 0;
}