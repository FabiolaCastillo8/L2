#include <iostream>
#include "alumnos.h"
#include "clasesDisponibles.h"
#include "acumulados.h"


using namespace std;

void menu() {
    bool salir = false;

    while(salir == false) {
        int opcion = 0;

       cout << "MENU PRINCIPAL" << endl;
       cout << "--------------" << endl;
       cout << endl;
       cout << "1 - Alumnos" << endl;
       cout << "2 - Clases disponibles" << endl;
       cout << "3 - Acumulados" << endl;
       cout << "4 - Notas Finales" << endl;
       cout << "5 - Salir" << endl;
       
       cout << endl;
       cout << endl;
       cout << "Ingrese una opcion del menu y presione enter --> ";
       cin >> opcion;

       switch (opcion)
       {
       case 1: {
           mostrarAlumnos();
           break;
        } 
        case 2: {
           mostrarClases();
           break;
        }
        case 3: {
          mostrarAcumulados(); 
          break;
        }
         case 4: {
          reporteAcumulados();

          break;
        }
        case 5:
            salir = true;
       default:
           break;
       }
       system("cls");
    }
    
}