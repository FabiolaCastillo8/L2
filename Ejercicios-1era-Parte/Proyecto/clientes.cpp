#include <iostream>

using namespace std;

string arregloClientes[5][3] = {
    { "A001", "Martha Gonzales", "99-28-23-25"},
    { "A002", "Lucas Corona", "95-18-20-15"},
    { "A003", "Sophia Villar ", "88-28-13-55"},
    { "A004", "Mateo Robles", "90-88-30-17"},
    { "A005", "William Castillo", "84-82-32-44"},
};

void mostrarClientes() {
    system("cls");
    cout << "Codigo, Nombre y Telefono" << endl;
    cout << "-------------------------" << endl << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arregloClientes[i][0] << " | ";
        cout << arregloClientes[i][1] << " | ";
        cout << arregloClientes[i][2] << " | ";
        cout << endl;
    }  

    cout << endl;
    cout << endl;
    system("pause");
}