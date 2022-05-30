#include <iostream>

using namespace std;

string arregloClases [10][2] =  {
    { "C001", "Matematicas"},
    { "C002", "Español"},
    { "C003", "Estudios Sociales"},
    { "C004", "Ciencias Naturales"},
    { "C005", "Ingles"},
    { "C006", "Biblioteca"},
    { "C007", "Educacion Artistica"},
    { "C008", "Educacion Fisica"},
    { "C009", "Educaion Civica"},
    { "C010", "Tecnologia"},
};

void mostrarClases() {
    system("cls");
    cout << "Codigo, Clases Disponibles" << endl;
    cout << "**----------------------**" << endl << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arregloClases[i][0] << " | ";
        cout << arregloClases[i][1] << " | ";
        cout << endl;
    }

    cout << endl;
    cout << endl;
    system("pause");
}

string buscarClase(string codigo) {
    
    for (int i = 0; i < 10; i++)
    {
        if (arregloClases[i][0] == codigo) {
        return arregloClases[i][1];
        }
    }

    return "";
}
