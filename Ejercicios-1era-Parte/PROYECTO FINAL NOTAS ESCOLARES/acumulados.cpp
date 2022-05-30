#include <iostream>
#include "alumnos.h"
#include "clasesDisponibles.h"
#include <string>
#include <iomanip>
using namespace std;

string arregloAcumulados[100];
int ultimaLinea = 0;


void mostrarAcumulados() {
    system("cls");

    string codigoAlumno = "";
    string nombreAlumno = "";
    
    string codigoClase = "";
    string nombreClase = "";
    int nota1 = 0;
    int nota2 = 0;
    int nota3 = 0;
    int nota4 = 0;

    char continuar = 'n';


    while(true) {
        cout << "Ingrese el codigo del alumno: ";
        cin >> codigoAlumno;

        nombreAlumno = buscarAlumno(codigoAlumno);

        if (nombreAlumno != "") {
            cout << endl;
            cout << nombreAlumno << endl;
            system("pause");
            break;
        } else {
           cout << "No se encontro el alumno, desea continuar? s/n" << endl;
           cin >> continuar;
           
           if (continuar == 'n' || continuar == 'N') {
               return;
            }
        }
    }
    
    cout << endl;

    while(true) {
        cout << "Ingrese el codigo de la clase: ";
        cin >> codigoClase;

        nombreClase = buscarClase(codigoClase);

        if (nombreClase != "") {
            cout << endl;
            cout << nombreClase << endl;
           system("pause");
           break;
        } else {
           cout << "No se encontro la clase, desea continuar? s/n" << endl;
           cin >> continuar;
           
           if (continuar == 'n' || continuar == 'N') {
               return;
            }
        }
    }
  
     
    cout << endl;
    cout << endl;
       
        cout << "NOTAS PARCIAL ALUMNOS " << endl;
        cout << "----------------------" << endl;
        cout << endl;
        cout << "Ingrese la nota del primer parcial: ";
        cin >> nota1;
        cout << "Ingrese la nota del segundo parcial: ";
        cin >> nota2;
        cout << "Ingrese la nota del tercer parcial: ";
        cin >> nota3;
        cout << "Ingrese la nota del cuarto parcial: ";
        cin >> nota4;
        float promedio = (nota1 + nota2 + nota3 + nota4) / 4;
        string observaciones = "";
        if (promedio < 70)
            observaciones = "Reprobado";
        else 
            observaciones = "Aprobado";

        cout << endl;
        string promedioString = std::to_string(promedio);
        promedioString = promedioString.substr(0, promedioString.size()-4);

        arregloAcumulados[ultimaLinea] = codigoAlumno + " | " + nombreAlumno + " - " + codigoClase + " | " + nombreClase + " | " + promedioString + " | " + observaciones;
        ultimaLinea++;

   //system("pause");
   return;
}



void reporteAcumulados() {
   system("cls");

   cout << "REPORTE DE NOTAS FINALES" << endl;
   cout << "------------------------" << endl << endl;

   cout << "Codigo Alumno, Alumno, Codigo Materia, Promedio, Observacion" << endl << endl;
   for (int i = 0; i < ultimaLinea; i++)
   {
       cout << arregloAcumulados[i] << endl;
   }


   cout << endl;
   cout << endl;
   system("pause");
}

 