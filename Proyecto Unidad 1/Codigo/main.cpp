#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{

      int opcion = 0;
       
       system("cls");
       cout << "**************" << endl;
       cout << "MENU DE JUEGOS" << endl;
       cout << "**************" << endl;
       cout << endl;
       cout << "Seleccione un juego" << endl;
       cout << "1 - Starship" << endl;
       cout << "2 - Snake" << endl;
       
       
       cout << endl;
       cout << endl;
       cout << "Ingrese una opcion del menu para seleccionar un juego: " << endl;
       cout << endl;

       cin >> opcion;

       switch (opcion)
       {
       case 1: {
           starShip();
           break;
        } 
        case 2: {
            snake();
           break;
        }

    }

    return 0;
}
