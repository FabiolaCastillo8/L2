#include <iostream>

using namespace std;

string arregloJuegos[10][2] = {
    { "J001", "Matematicas"},
    { "J002", "Español"},
    { "J003", "Ciencias Naturales"},
    { "J004", "Estudios Sociales"},
    { "J005", "Ingles"},
    { "J006", "Informatica"},
    { "J007", "Educacion Artistica"},
    { "J008", "Biblioteca"},
    { "J009", "Educacion Fisica"},
    { "J010", "Educacion Civica"},
};

void mostrarJuegos() {
    system("cls");
    cout << "Codigo, Descripcion" << endl;
    cout << "-------------------" <<endl << endl;

    for (int i= 0; i < 10; i++)
    {
    cout << arregloJuegos[i][0] << " | ";
    cout << arregloJuegos[i][1] << " | ";
    cout << endl;

    }
    
    cout << endl;
}
