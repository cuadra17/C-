#include <iostream>

using namespace std;

int main(){
  int n =0, i=0, modulo;
  bool primo=true;
  cout<<"Ingrese un numero ";
  cin >> n;

  for (i = n -1 ; i >=2; i--)
  {
  modulo = n%i;
  if ( modulo == 0)
  {
  primo = false;
  break;
  }
    
  }
  if (primo)
  {
  cout<<"Si es primo";
  }else{
  cout<<"No es primo";
  }
  
 return 0;
}