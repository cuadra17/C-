#include <iostream>
#include <math.h>
#include <string>  
#include <fstream> 
#include <iomanip> 

using namespace std;

/*Variables globales que se necesitan para guardar valores necesarios en mas de una funcion. 
Especificamente, estas variables sirven para poder utilizar los datos conseguidos en el menu de usuario en el menu de administrador */
float totalCuenta = 0;
float totalTickets = 0;
float totalBar = 0;
float totalTrebol = 0;
float totalCajero = 0;

//Estructuras utilizadas para tanto la compra de productos como para el inicio de sesion del usuario
struct tickets
{
    string tipo;
    double precio;
    int cantidad;
};

struct pedidos
{
    string nombre;
    double precio;
    int cantidad;
};

struct Usuario
{
    string perfil;
    string password;
};

//funcion void utilizada para mostrar el menu de los tickets con los precios establecidos por el lugar.
void Menucaja(){
    cout<<"---BIENVENIDO Al REY Y REINA DE TREBOLES---"<<endl;
    cout<<"Aqui se puede comprar tickets para las maquinas recreativas"<<endl;
    cout<<"1) Ticket azul (maquinas pequenias)            $1.50"<<endl;
    cout<<"2) Ticket verde (maquinas medianas)            $2.50"<<endl;
    cout<<"3) Ticket rojo (maquinas grandes)              $3.50"<<endl;
}

//funcion void utilizada para mostrar el menu de la comida y bebida con datos ya establecidos por el lugar.
void Menucomida(){
  cout<<"---BIENVENIDO A NUESTRO BAR AS DE CORAZON---"<<endl;
  cout<<"------Comida------"<<endl;
  cout<<"1) Palomitas                 $2.99"<<endl;
  cout<<"2) Nachos                    $3.50"<<endl;
  cout<<"3) Porcion Pizza             $1.50"<<endl;
  cout<<"4) Hot dog                   $2.50"<<endl;
  cout<<"5) Dedos de queso            $1.99"<<endl;
  cout<<"------Bebidas Alcoholicas------"<<endl;
  cout<<"6) Cerveza                   $1.99"<<endl;
  cout<<"7) Margarita                 $4.99"<<endl;
  cout<<"8) Mojito                    $3.99"<<endl;
  cout<<"9) Copa de vino              $4.50"<<endl;
  cout<<"------Bebidas No Alcoholicas------"<<endl;
  cout<<"10) Gaseosa                  $1.50"<<endl;
  cout<<"11) Agua                     $1.00"<<endl;
  cout<<"12) Limonada                 $2.50"<<endl;
  cout<<"13) Jugos naturales          $2.25"<<endl;

}

//funcion void utilizada para mostrar y explicar el funcionamiento del cajero del casino.
void Menucajero(){
    cout<<"---BIENVENIDO A NUESTRO CAJERO 7 DE DIAMANTES---"<<endl;
    cout<<"*Para poder utilizar nuestras instalaciones, necesitas fichas especiales"<<endl;
    cout<<" Cada color de ficha tiene su propio valor monetario"<<endl;
    cout<<" -Ficha blanco:    $1"<<endl;
    cout<<" -Ficha roja:     $10"<<endl;
    cout<<" -Ficha verde:    $50"<<endl;
    cout<<" -Ficha negra:    $100"<<endl;
    cout<<" -Ficha naranja:  $500"<<endl;
    cout<<" -Ficha amarilla: $1000"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"1) Cambiar dinero por fichas"<<endl;
    cout<<"2) Verificar cuanto dinero tienes transformado en fichas"<<endl;
} 

/*Se creo una funcion float para crear el ticket de factura de la compra de tickets.*/
void FacturaTickets(tickets Tickets[], int size, float total){
    string nombreArchivo = "FacturaTickets.txt";
    ofstream archivo;

    archivo.open(nombreArchivo.c_str(), fstream::app);

    archivo << "==== REY Y REINA DE TREBOLES==== TICKET DE FACTURA ===="<<endl;

    for (int i = 0; i < size; i++)
    {
        archivo << i+1 <<"."<< Tickets[i].tipo<<"-$"<<Tickets[i].precio<< " Cantidad: "<< Tickets[i].cantidad<<endl; 
    }
    
    archivo << "Total de la cuenta: $" << total << endl;

    archivo.close();

    cout<<"--------------------------------------------------"<<endl;
    cout<<"El ticket de factura se ha generado correctamente!"<<endl;
}

//De misma manera se creo una nueva funcion float para la compra de los tickets, donde se ha utilizado un arreglo para los valores de los tickets.
float CompraTickets(){
    int cantidadTickets, tipoTickets, size =0;
    float total = 0;
    
    tickets Tickets[] = {{"Ticket azul", 1.50}, {"Ticket verde", 2.50}, {"Ticket rojo", 3.50}};
    
    tickets ticketsUsuario[3];

    cout<<"----------------------------------"<<endl;
    cout<<"Generando pedido..."<<endl;
    cout<<"Presione 0 para conocer su cuenta y dejar de pedir"<<endl;
     cout<<"Al haber 3 tipos de ticket, la cantidad maxima de tipos de tickets que puede comprar es 3, si se pasa se le recomendara presionar 0 "<<endl;

    do
    {
        cout<<"Ingrese el numero asociado al tipo de ticket que desea comprar: ";
        cin>>tipoTickets;
        
         if (size < 3)
        {
          if (tipoTickets > 0 && tipoTickets < 4) //se coloco un intervalo que especifique la cantidad maxima de tikets a comprar
        {
         cout<<"Ingrese la cantidad que quiere comprar del tipo de ticket escogido: ";
         cin>>cantidadTickets;
         
    //para la eleccion de los tickets se coloca el arrego -1, esto debido a que el arreglo inica en 0, y el numero que se solicita es desde uno, de esta manera el primero lo direcciona a la posicion anterios
         ticketsUsuario[size].tipo = Tickets[tipoTickets -1].tipo; 
         ticketsUsuario[size].precio = Tickets[tipoTickets -1].precio;
         ticketsUsuario[size].cantidad = cantidadTickets;
         total = total + (cantidadTickets * Tickets[tipoTickets -1].precio);
         totalTickets = total;
         size ++;
         cout<<"----------------------"<<endl;
        }else if (tipoTickets == 0)
        {
         cout<<"Saliendo, generando cuenta y ticket factura"<<endl;
        }else{
         cout<<"ERROR"<<endl; cout<<"(comando no detectado)"<<endl;
        } 
        }else{
         cout<<"Ya se llego al maxima cantidad de tipos de productos, si quiere seguir ejecutando el programa y recibir la factura presione 0"<<endl;
        }
        

    } while (tipoTickets !=0);

    //para la creacion de las facturas se unen el total de la tienda trebol y de los tickets para imprimir un solo total de estos guardados en una funcion
    totalTrebol += totalTickets; 
    if (total != 0)
    {
        FacturaTickets(ticketsUsuario, size, total);
    }

    return total;
}

/*funcion void utilizada para crear el ticket de factura de la comida y bebida del lugar. Se pide tanto un arreglo con los productos escogidos por el usuario
como una variable auxiliador llamada size que indica la cantidad de productos seleccionados por el usuario. Por medio de un for, la factura a la hora de comprar
en el casino se guardan en un archivo txt. */
void FacturaComida(pedidos Productos[], int size, float total){
    string nombreArchivo = "FacturaBar.txt";
    ofstream archivo;

    archivo.open(nombreArchivo.c_str(), fstream::app);

    archivo << "==== BAR AS DE CORAZON ==== TICKET DE FACTURA ===="<<endl;

    for (int i = 0; i < size; i++)
    {
        archivo << i+1 <<"."<< Productos[i].nombre<<"-$"<<Productos[i].precio<< " Cantidad: "<< Productos[i].cantidad<<endl; 
    }
    
    archivo << "Total de la cuenta: $" << total << endl;

    archivo.close();

    cout<<"--------------------------------------------------"<<endl;
    cout<<"El ticket de factura se ha generado correctamente!"<<endl;
    
}

/*funcion float utilizada para guardar el pedido de un usuario en arreglos que ayudaran a crear el ticket de factura. Ademas, con esta funcion se calcula
el total de la cuenta, la cual se muestra en el ticket de factura.*/
float pedidoComida(){
   
   int numeroPedido, size =0;
   float cantidadProducto, total =0;

   //arreglo con todos los productos mostrados por el menu del bar. Este arreglo esta definido por la estructura pedidos, teniendo asi dos variables: una string para el nombre y una float para el precio
   pedidos Productos[]={
    {"Palomitas", 2.99}, {"Nachos", 3.50}, {"Porcion Pizza", 1.50}, {"Hot dog", 2.50}, {"Dedos de queso", 1.99}, {"Cerveza", 1.99}, {"Margarita", 4.99}, {"Mojito", 3.99},{"Copa de vino", 4.50}, {"Gaseosa", 1.50}, {"Agua", 1.00}, {"Limonada", 2.50}, {"Jugos Naturales", 2.25}
   };
   
   pedidos productosUsuario[10];

   cout<<"---------------------------------------"<<endl;
   cout<<"Se comenzara a ingresar su pedido"<<endl;
   cout<<"En el momento que quiera dejar de pedir y saber su cuenta, presiona 0"<<endl;
   cout<<"La cantidad maxima de tipos de productos que puede pedir es 10, si se pasa de el numero se avisara y se le recomendara presionar 0"<<endl;
   
   //bucle do while para que el usuario pueda seguir pidiendo hasta llegar al maximo establecido o hasta que el decida y presione 0 para acabar el bucle.
   do
   {
    cout<<"Ingrese el numero de producto que quiere comprar: ";
    cin>>numeroPedido;
    
    //condiciones para verificar si el numero ingresado esta en el rango establecido
     if (size < 10)
   {
     if (numeroPedido>0 && numeroPedido < 14)
    {
    cout<<"Ingrese la cantidad del producto:";
    cin>>cantidadProducto;
    
    //se guardan los productos escogidos, su precio y la cantidad en un mismo arreglo establecido por una estructura.
    productosUsuario[size].nombre = Productos[numeroPedido -1].nombre;
    productosUsuario[size].precio = Productos[numeroPedido -1].precio;
    productosUsuario[size].cantidad = cantidadProducto;
    total = total + (cantidadProducto * Productos[numeroPedido -1].precio);
    totalCuenta = total;
    
    size ++;
    cout<<"--------------------------"<<endl;
    }else if (numeroPedido == 0)
    {
     cout<<"Saliendo del Bar, generando cuenta y ticket de factura"<<endl;

    }else{
     cout<<"ERROR"<<endl; cout<<"(comando no detectado)"<<endl;
    }
   }else{
    cout<<"Ya se llego al maxima cantidad de tipos de productos, si quiere seguir ejecutando el programa y recibir la factura presione 0"<<endl;
   }

   } while (numeroPedido !=0);
   
   //variable utilizada para generar las ganancias en el menu de administrador.
   totalBar += totalCuenta;

   //funcion para crear la factura
   if (total !=0)
   {
    FacturaComida(productosUsuario, size, total);
   }
   
   return total;
}

//funcion float para verificar cuanto dinero tienes transformado en fichas utilizando una operacion matematica.
float DineroFichas(int fichaRoja, int fichaVerde, int fichaNegra, int fichaNaranja, int fichaAmarilla, int fichaBlanco){
    float dineroTotal =0;
    dineroTotal = (fichaRoja*10)+ (fichaBlanco*1) + (fichaVerde*50) + (fichaNegra*100) + (fichaAmarilla*1000) + (fichaNaranja * 500);
    return dineroTotal;
}

/*se creo una funcion para crear y guardar los datos de los usuarios, estos se guardaran y almacenaran en un archivo*/
void ArchivoUsuarios(Usuario nuevoUsuario[], int cantidad){
  string nombre_archivo = "Empleados.txt";
  ofstream archivo;
  
  archivo.open(nombre_archivo.c_str(), fstream::app);

  for (int i = 0; i < cantidad; i++)
  {
    archivo << nuevoUsuario[i].perfil << endl;
    archivo << "Contrasenia: "<< nuevoUsuario[i].password << endl;
    archivo << "-------------------------"<<endl;
  }
  
  archivo.close();
}

/*Esta funcion contiene las actividades que solo el usuario puede utilizar, en esta misma se ingrsan los datos que se utilizan 
en las funciones anteriores, las cuales tambien se imprien al terminar la compras o intercambios de dinero a fichas*/
void MenuUsuario(){
   int opcion, ficha, div;
   float totalCuenta, totalTickets, fichaRoja =0, fichaVerde=0, fichaNegra =0, fichaNaranja =0, fichaAmarilla =0, fichaBlanco =0, dinero;
    
    do
    {
        cout<<"1) Comprar tickets"<<endl;
        cout<<"2) Ir al menu de comida y bebida de el casino"<<endl;
        cout<<"3) Ir al cajero"<<endl;
        cout<<"4) Salir"<<endl;
        cout<<"Ingrese el numero de la funcion que quiere realizar: ";
        cin>>opcion;
        
        //switch para crear el menu de lo que se puede realizar en el menu de usuarios. 
        switch (opcion)
        {
        case 1:
            Menucaja();
            //se retorna este valor de la funcion, la cual sirve para imprimir la cantidad de la compra
            totalTickets = CompraTickets();

            if (totalTickets == 0)
            {
                cout<<"No has comprado ningun ticket"<<endl;
                cout<<"Muchas gracias y diviertanse"<<endl;
            }else{
                cout<<"El total de su cuenta es: $"<<totalTickets<<endl;
                cout<<"Muchas gracias y diviertanse"<<endl;
            }
    
            break;
        case 2:
            Menucomida();
            totalCuenta = pedidoComida();
            
            if (totalCuenta == 0)
            {
                cout<<"No ha realizado ningun pedido"<<endl;
                cout<<"Muchas gracias!"<<endl;
            }else{
        
                cout<<"Su total es: $"<<totalCuenta<<endl;
                cout<<"Muchas gracias!"<<endl;
            }

            break;
        case 3:
            Menucajero();
            cout<<"Ingrese el numero del comando que quiere realizar: ";
            cin>>ficha;

            switch (ficha)
            {
            case 1:
            cout<<"Ingrese la cantida de dinero que quiere cambiar: $";
            cin>>dinero;
            
            //funciones matematicas para calcular cuantas fichas el usuario tiene al ingresar el dinero,
            totalCajero += dinero;

            div = dinero/1000;
            fichaAmarilla += div;

            dinero = dinero - (div*1000);
        
            div = dinero/500;
            fichaNaranja += div;
            
            dinero = dinero - (div*500);

            div = dinero/100;
            fichaNegra += div;

            dinero = dinero - (div*100);

            div = dinero/50;
            fichaVerde += div;

            dinero = dinero - (div*50);
            
            div = dinero/10;
            fichaRoja += div;

            dinero = dinero - (div*10);

            div = dinero/1;
            fichaBlanco += div;

            cout<<"Procesando cambio de fichas..."<<endl;
            cout<<"Sus fichas son las siguientes: "<<endl;
            cout<<"Fichas amarrillas: "<<fichaAmarilla<<endl;
            cout<<"Fichas naranjas: "<<fichaNaranja<<endl;
            cout<<"Fichas negras: "<<fichaNegra<<endl;
            cout<<"Fichas verdes: "<<fichaVerde<<endl;
            cout<<"Fichas rojas: "<<fichaRoja<<endl;
            cout<<"Ficha blancas: "<<fichaBlanco<<endl;
            break;
            case 2:
            cout<<"En este momento se verificara cuanto dinero usted tiene tranformado en fichas..."<<endl;
            cout<<"Su dinero total es $"<<DineroFichas(fichaRoja, fichaVerde, fichaNegra, fichaNaranja, fichaAmarilla, fichaBlanco)<<endl;
            break;
            default: cout<<"ERROR"<<endl; cout<<"(Comando no detectado)"<<endl;
            break;
           }
        case 4:
            cout<<"Muchas gracias por confiar en nosotros"<<endl;
            cout<<"Los esperamos pronto"<<endl;
            
            break;
        default: cout<<"ERROR"<<endl; cout<<"(Comando no detectado)"<<endl;
            break;
        }

    //finalizacion del do while
    } while (opcion != 4);
}


/*La funcion void loginusuario, se usa para entrar al menu de usuario, pero desde un usurio existente por medio de una contraseña, al ingresarla
correctamete permitira ingresar al menu usuario*/
void LogInUsuario(Usuario inicio[], int cantidad){

    int n;
    string per, pass;
    char salir;

    do
    {
       cout<<"Iniciando sesion... "<<endl;
       
       //condicion necesaria para salir y que no se cree un bucle infinto
       cout<<"Si se quiere salir presione 'y', si quiere iniciar sesion presione cualquier letra: ";
       cin>>salir;
       if (salir == 'y')
       {
        cout<<"Volviendo al menu principal..."<<endl;
       }else{
       cout<<"Ingrese el nombre de el usuario: ";
       cin>>per;
       cout<<"Ingrese la contrasenia: ";
       cin>>pass;
       
       //for para verificar si el usuario existe 
       for (int i = 0; i < cantidad; i++)
       {
         if (per != inicio[i].perfil || pass != inicio[i].password )
         {
            cout<<"Usuario no encontrado! Intentalo de nuevo\n"<<endl;
            
         } else {
            system("cls");
            cout<<"--BIENVENIDO A SU CASINO DE CONFIANZA " << inicio[i].perfil<<"--"<<endl;

            MenuUsuario();
         }
       }  
    }
    } while (salir != 'y');
}

//funcion que se utiliza para la creacon del usuario y su contraseña
void CrearUsuario(int cantidad){
   
   Usuario nuevoUsuario[cantidad];
   
   for (int i = 0; i < cantidad; i++)
   {
    cout<<"-------------------------------------"<<endl;
    cout<<"Creando usuario " + to_string(i+1) + ": "<<endl;//estas se guardan en un arreglo
    cout<<"Ingrese el nombre del usuario: "<<endl;
    cin>> nuevoUsuario[i].perfil;
    cout<<"Creando nueva contrasenia: "<<endl;
    cin>> nuevoUsuario[i].password;
    cout<<"Usuario creado!"<<endl;
    cout<<"-------------------------------------"<<endl;
   }
   
   //funciones para guardar los usuarios en un archivo de texto y para iniciar la sesion.
   ArchivoUsuarios(nuevoUsuario, cantidad);
   LogInUsuario(nuevoUsuario, cantidad);

}

//menu principal, que nos llevara a las diferente actividades, como la funcion para entrar al menu de usuarios y al menu de administradores.
int main(){
 int tipo, cantidad;
    do
    {
     cout<<"--BIENVENIDO AL SISTEMA OPERATIVO DEL CASINO UN AS BAJO LA MANGA--"<<endl;
     cout<<"Muchas gracias por confiar en nosotros! "<<endl;
     cout<<"A continuacion se le presentara las opciones principales del sistema operativo: "<<endl;
     cout<<"Si quieres crear usuarios de empleados y utilizar nuestras instalaciones, presione 1"<<endl;
     cout<<"Si usted es un miembro de la administracion del casino, presione 2"<<endl;
     cout<<"En el momento que quiera salirse del sistema operativo, presione 3"<<endl;
     cout<<"Que comando quiere realizar? ";
     cin>>tipo;

     switch (tipo)
     {
     case 1:
        cout<<"Ingresando al sistema de creacion de usuarios..."<<endl;
        cout<<"Cuantos usuarios quiere crear?";
        cin>>cantidad;
        
        CrearUsuario(cantidad);

        break;
    case 2:
       
       //espacio para vista administrativa

        break;
    case 3: 
        cout<<"Adios!"<<endl;
        break;
     default: cout<<"ERROR"<<endl; cout<<"(Comando no detectado)"<<endl;
        break;
     }

    } while (tipo !=3);
      
return 0;
}
