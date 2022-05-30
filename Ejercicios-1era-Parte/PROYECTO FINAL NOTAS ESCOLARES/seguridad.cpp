#include <iostream>

using namespace std;

bool login () {
    string password = "";
    int intentos = 0;

    while (intentos <= 3) {
        system("cls");
     
            cout << "---------------------------------------------------" << endl;
            cout << "----- BIENVENIDO AL SISTEMA DE NOTAS ESCOLARES ----" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << endl;

        if (intentos == 3) {
            cout << "No se ha podido validar su password, porfavor contacte al administrador del sistema"
            << endl;

            return false;
        }
        
        cout << "Ingrese su password: ";
        cin >> password;

        if(password == "admin") {
            system("cls");
            return true;

        }
        
        intentos++;
    }

    return false;
}