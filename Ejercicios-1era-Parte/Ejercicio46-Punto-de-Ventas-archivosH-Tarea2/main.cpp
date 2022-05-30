#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
	double a;
    double b;
    double Resultado;      

    cout <<"Programa para calcular la raiz cuadrada de un numero utilizando la libreria math.h"<<endl;
   
    cout << "Ingrese el numero" << endl; 
    cin >> a;            
    cout << "Ingrese la potencia" << endl;
    cin >> b;

    cout << "El primer numero es: "<< a << endl;
    cout << "La potencia es: "<< b << endl;
    cout << "La operacion es raiz cuadrada de: " << a << endl <<"elevado a: " << b << endl;

    Resultado = pow(pow(a,b),(0.5));              

    cout <<"el resultado es: " << Resultado << endl;
    cout <<endl;

    return 0;
}
