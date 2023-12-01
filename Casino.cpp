#include <iostream>
#include <math.h>
#include <string>  
#include <fstream> 
#include <iomanip> 

/*Para el menu de administrador ya hay unos valores quemados para el nombre de usuario y contrasenia. De esta manera no cualquiera puede ingresar, solamente los que se saben su perfil y pin
Lista de administradores con nombre de usuario y pin de administrador:
1) Fernando - nombre de usuario: fercuadra7, pin de administrador: 170207
2) Dayalin - nombre de usuario: dayalin777, pin de administrador: 123456
3) Ingeniera Elisa - nombre de usuario: elisaaldana12, pin de administrador: 567890*/

using namespace std;

//estructura del perfil de administrador
struct Administrador
{
  string username;
  int codigo;
};
//creamos una funcion que nos genere un tipo de texto informativo sobre las gancias optenidas con el total de los tickes y el bar, haciendo uso de la creacion de un archivo.
void GananciasCoyTE(){
    string nombre_archivo = "GananciasBaryTickets.txt";
    ofstream archivo;

    float totalCOyTE =0;

  //utilizacion de variables globales  
  totalCOyTE = totalTrebol + totalBar;
   
   archivo.open(nombre_archivo.c_str(), fstream::app);

   archivo << "==================================" << endl;
   archivo << "GANANCIAS DEL CASINO"<<endl;
   archivo << "***BAR AS DE CORAZON***"<<endl;
   archivo << "GANANCIAS: $"<< totalBar << endl;
   archivo << "***REY Y REINA DE TREBOLES***" <<endl;
   archivo << "GANANCIAS: $"<< totalTrebol <<endl;
   archivo << "---------------------------------"<<endl;
   archivo << "TOTAL GENERAL: $"<< totalCOyTE<<endl;
   archivo << "==================================" << endl;

   archivo.close();

    cout<<"--------------------------------------------------"<<endl;
    cout<<"El documento de las ganancias se ha generado correctamente"<<endl;

}

//funcion para crear un archivo con las ganancias del cajero, mostrando cuanto dinero se ha cambiado por fichas.
void GananciasCajero(){
    string nombre_archivo = "GananciasCajero.txt";
    ofstream archivo;

 archivo.open(nombre_archivo.c_str(), fstream::app);//busca y abre el archivo 

   archivo << "==================================" << endl;
   archivo << "GANANCIAS DEL CASINO"<<endl;
   archivo << "***CAJERO 7 DE DIAMANTES***"<<endl;
   archivo << "GANANCIAS: $"<<totalCajero<<endl;
   archivo << "==================================" << endl;

   archivo.close(); //cierra el archivo

    cout<<"--------------------------------------------------"<<endl;
    cout<<"El documento de las ganancias se ha generado correctamente"<<endl;
}

//se crea una nueva funcion, la cual nos ayudara a abrir un archivo que contine los datos de los usuarios.
void LeerUsuarios(){
  string linea;
  string nombre_archivo = "Empleados.txt";
  ifstream archivo;

  archivo.open(nombre_archivo.c_str());

  if (archivo.is_open())
  {
    while (getline(archivo, linea))
    {
        cout<<linea<<endl;
    }
    archivo.close();
  }else{
    cout<<"Error al abrir el archivo"<<endl;
  }
  
}

//funcion para buscar un usuario especifico en el txt creado con los empleados
void BuscarUsuarios(){
    string nombre_archivo = "Empleados.txt";
    ifstream archivo(nombre_archivo.c_str());
    string linea, usuario;
    
    //variables estilo booleano para crear un sitema de busquedad
    bool encontrado = false, noencontrado = true;
    
    cout<<"Ingrese el usuario que quiere buscar: ";
    cin>>usuario;

    while (getline(archivo, linea))
    {
        if (noencontrado)
        {
         if (usuario == linea)
        {
         encontrado = true;
         noencontrado = false;
         cout<< "El usuario " << linea << " esta regristrado"<<endl;
        }
        }else{
            cout<<linea<<endl;
        break;
        }

    }
           
        if (noencontrado)
        {
           
        cout<<"El usuario "<<usuario<<" no esta registrado"<<endl;
        }
    
}

/*la funcion void de el administracion, en esta funcion se puede ingresar con una contraseña que se solicita en una 
funcion diferente, el administrados podra ver la informacion almacenada de las ventas realizadas, asi como tambien la informacion de los usuarios*/
void MenuAdministrador(){
    int opcion, buscar;

   do
   {
    cout<<"1) Ver las ganancias del 'Bar As de Corazon' y 'Rey y Reina de Terboles'"<<endl;
    cout<<"2) Ver las ganancias del 'Cajero 7 de Diamantes'"<<endl;
    cout<<"3) Revisar la lista de empleados que tienen usuarios"<<endl;
    cout<<"4) Salir"<<endl;
    cout<<"Que comando quiere ingresar? ";
    cin >> opcion;
 
    //switch para crear el menu de lo que se puede hacer
    switch (opcion)
    {
    case 1:
        cout<<"Generando documento con la informacion de las ganancias obtenidas tanto por el bar como por la venta de tickets..."<<endl;

        GananciasCoyTE();

        break;
    case 2:
        cout<<"Generando documento con la informacion de las ganancias obtenidas por el cajero utilizado para comprar fichas..."<<endl;

        GananciasCajero();
        break;
    case 3:
        cout<<"--BIENVENIDO A LA LISTA DE EMPLEADOS--"<<endl;
        cout<<"1) Leer e Imprimir todos los usuarios registrados"<<endl;
        cout<<"2) Buscar un usuario en especifico"<<endl;
        cout<<"Que comando quiere realizar?";
        cin>>buscar;

        switch (buscar)
        {
        case 1:
        cout<<"---------------------------------------------"<<endl;
        cout<<"REGISTRO DE USUARIOS DE EMPLEADOS CREADOS: "<<endl;

        LeerUsuarios();
        cout<<"---------------------------------------------"<<endl;
            break;
        case 2:
        cout<<"---------------------------------------------"<<endl;
        cout<<"BUSQUEDA DE USUARIOS DE EMPLEADOS CREADOS: "<<endl;

        BuscarUsuarios();
        cout<<"---------------------------------------------"<<endl;
        }
    
        break;
    case 4:
        cout<<"Saliendo del sistema administrativo..."<<endl;
        break;
    default: cout<<"ERROR"<<endl; cout<<"(Comando no detectado)"<<endl;
        break;
    }
    //finalizacion del do while
   } while (opcion !=4);
   
}

/*la funcion de los administradores, estos ya estan definidos , los cuales ingresaran por un menu, luego pide una contraseña ya establecida, esta
son diferentes dependiendo de el administrador*/
void LogInAdministrador(){
   
   Administrador LogIn;
   int admin; 
  
    cout<<"Ingresando al sistema administrativo..."<<endl;
    cout<<"Administradores: "<<endl;
    cout<<"1) Fernando "<<endl;
    cout<<"2) Dayalin "<<endl;
    cout<<"3) Ingeniera Elisa "<<endl;
    cout<<"Presione el numero del perfil de administrador que quiera ingresar (cada perfil tiene su propio username y codigo): ";
    cin>>admin;
    
    //switch con varias condiciones para que el administrador ingrese quien es y asi puede ingresar su nombre de perfil y codigos.
    switch (admin)
      {
      case 1:
        cout<<"HOLA FERNANDO!"<<endl;
        cout<<"Ingrese su nombre de usuario: ";
        cin>> LogIn.username;
        cout<<"Ingrese su codigo de administrador: ";
        cin>> LogIn.codigo;

        if (LogIn.username == "fercuadra7"  && LogIn.codigo == 170207)
        {
            system("cls");
            cout<<"--BIENVENIDO AL SISTEMA ADMINISTRATIVO DEL CASINO FERNANDO--"<<endl;
            MenuAdministrador();

        }else if (LogIn.username == "fercuadra7"  && LogIn.codigo != 170207)
        {
            cout<<"El codigo de adnimistrador fue incorrecto "<<endl;
        }else if (LogIn.username != "fercuadra7"  && LogIn.codigo == 170207)
        {
            cout<<"El nombre de usuario fue incorrecto "<<endl;
        }else {
            cout<<"Tanto el nombre de usuario como el codigo de administrador fue incorrecto "<<endl;
        }
        
        break;
      case 2:
        cout<<"HOLA DAYALIN!"<<endl;
        cout<<"Ingrese su nombre de usuario: ";
        cin>> LogIn.username;
        cout<<"Ingrese su codigo de administrador: ";
        cin>> LogIn.codigo;

        if (LogIn.username == "dayalin777"  && LogIn.codigo == 123456)
        {
            system("cls");
            cout<<"--BIENVENIDO AL SISTEMA ADMINISTRATIVO DEL CASINO DAYALIN--"<<endl;
            MenuAdministrador();

        }else if (LogIn.username == "dayalin777"  && LogIn.codigo != 123456)
        {
            cout<<"El codigo de adnimistrador fue incorrecto "<<endl;
        }else if (LogIn.username != "dayalin777"  && LogIn.codigo == 123456)
        {
            cout<<"El nombre de usuario fue incorrecto "<<endl;
        }else {
            cout<<"Tanto el nombre de usuario como el codigo de administrador fue incorrecto "<<endl;
        }
        break;
      case 3:
        cout<<"HOLA INGENIERA ELISA!"<<endl;
        cout<<"Ingrese su nombre de usuario: ";
        cin>> LogIn.username;
        cout<<"Ingrese su codigo de administrador: ";
        cin>> LogIn.codigo;

        if (LogIn.username == "elisaaldana12"  && LogIn.codigo == 567890)
        {
            system("cls");
            cout<<"--BIENVENIDO AL SISTEMA ADMINISTRATIVO DEL CASINO ELISA--"<<endl;
            MenuAdministrador();

        }else if (LogIn.username == "elisaaldana12"  && LogIn.codigo != 567890)
        {
            cout<<"El codigo de administrador fue incorrecto "<<endl;
        }else if (LogIn.username != "elisaaldana12"  && LogIn.codigo == 567890)
        {
            cout<<"El nombre de usuario fue incorrecto "<<endl;
        }else {
            cout<<"Tanto el nombre de usuario como el codigo de administrador fue incorrecto "<<endl;
        }
        break;
      default: cout<<"Error"<<endl; cout<<"(Comando no encontrado)";
        break;
      }
     }
     
int main(){
  LogInAdministrador();
 return 0;   
}