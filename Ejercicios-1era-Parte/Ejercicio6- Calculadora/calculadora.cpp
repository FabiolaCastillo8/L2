#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    //Datos de entrada
	int a = 0;
	int b = 0;
	
	int suma;
	int resta;
	int multiplicacion;
	int division;
	

	cout << "Ingrese el valor de a: ";
	cin >> a;
	
	cout << endl;
	
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
	//Proceso
	suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;
	
	//Salida 
	cout << "La suma de a + b es: "<< suma << endl;
    cout << "La resta de a - b es: "<< resta << endl;
	cout << "La multiplicacion de a * b es: "<< multiplicacion << endl;
    cout << "La suma division de a - b es: "<< division << endl;

    return 0;
}
