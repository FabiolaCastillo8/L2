#include <iostream>

using namespace std;

string arregloAlumnos[5][3] =  {
    { "A001", "Lucas Garcia", "99-28-14-16"},
    { "A002", "Mateo Mora", "97-81-94-36"},
    { "A003", "Sophia Corona", "96-25-74-96"},
    { "A004", "Cristina Armijo", "95-72-46-68"},
    { "A005", "Martha Gonzales", "84-83-45-90"},
};

void mostrarAlumnos() {
    system("cls");
    cout << "Codigo, Nombre del Alumno y Telefono" << endl;
    cout << "------------------------------------" << endl << endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout << arregloAlumnos[i][0] << " | ";
        cout << arregloAlumnos[i][1] << " | ";
        cout << arregloAlumnos[i][2] << " | ";
        cout << endl;
    }

    cout << endl;
    cout << endl;
    system("pause");
}

string buscarAlumno(string codigo) {
    
    for (int i = 0; i < 5; i++)
    {
        if (arregloAlumnos[i][0] == codigo) {
        return arregloAlumnos[i][1];
        }
        
    }

    return "";
}
