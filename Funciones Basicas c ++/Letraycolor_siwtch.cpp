#include <iostream>

using namespace std;

int main (){
    char color;
    cout<<"Ingrese una letra ";
    cin>> color;

    switch (color)
    {
    case 'R':
    cout<<"El color es rojo ";
    break;
    case 'Y':
    cout<<"El color es amarillo";
    break;
    case 'B':
    cout<<"El color es azul";
    break;
    case 'W':
    cout<<"El color es blanco";
    break;
    case 'K':
    cout<<"El color es negro";
    break;
    case 'C':
    cout<<"El color es cian";
    break;
    case 'G':
    cout<<"El color es verde";
    break; 
    default:
    cout<<"No es ningun color";
    }
  
    return 0;
}