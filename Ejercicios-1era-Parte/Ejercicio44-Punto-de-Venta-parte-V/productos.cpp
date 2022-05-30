#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);
 
void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*******" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Americano" << endl;
        cout << endl;

        cout << "Ingrese una opcion: " << endl;
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1, 30);
            break; 
        case 3:
            agregarProducto("1 Americano - L 20.00", 1, 20);
            break;  
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }         
        }
 
        cout << "Producto agregado";
        break;

    }

    case 2:
     {
       cout << "BEBIDAS FRIAS" << endl;
       cout << "*****" << endl;
       cout << "1 - Granita de cafe" << endl;
       cout << "2 - Malteada oreo" << endl;
       cout << "3 - Cappuccino frio" << endl;
       cout << endl;

       cout << "Ingrese una opcion: " << endl;
       cin >> opcionProducto;   cout << endl;
       
    switch (opcionProducto)
    {
     case 1:
         agregarProducto("1 Granita de cafe - L 60.00", 1, 60);
        break;
    case 2:
        agregarProducto("1 Malteada oreo - L 40.00", 1, 40);
        break; 
    case 3:
        agregarProducto("1 Cappuccino frio - L 50.00", 1, 50);
           break;  
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }         
        }
 
        cout << "Producto agregado";
        break;
    
    }

    case 3:
    {
       cout << "REPOSTERIA" << endl;
       cout << "****" << endl;
       cout << "1 - Cheesecake de fresa" << endl;
       cout << "2 - Pie de manzana" << endl;
       cout << "3 - Pastel tres leches" << endl;
       cout << endl;

       cout << "Ingrese una opcion: " << endl;
       cin >> opcionProducto;   cout << endl;
    
    }
    
    switch (opcionProducto)
    {
     case 1:
         agregarProducto("1 Cheesecake de fresa - L 80.00", 1, 80);
        break;
    case 2:
        agregarProducto("1 Pie de manzana - L 60.00", 1, 60);
        break; 
    case 3:
        agregarProducto("1 Pastel tres leche - L 70.00", 1, 70);
            break;  
        default:  
            {
                cout << "opcion no valida";
                return;
                break;
            }         
        }
 
        cout << "Producto agregado";
        break;
    }
   }
  
