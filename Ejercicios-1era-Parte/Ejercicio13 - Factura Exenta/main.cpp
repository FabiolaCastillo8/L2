#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	// Datos de entrada
	double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDelDescuento = 0;
    double calculoDelImpuesto = 0;
    char facturaExenta;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
 
    cout << "Ingrese el descuento (0, 10, 15, 20) ";
    cin >> descuento;

    cout << "Es una factura excenta? escriba S o N: ";
    cin >> facturaExenta;

    // Proceso
    
    if (facturaExenta == 'S' || facturaExenta == 's')
{
    calculoDelImpuesto = 0;
}    
    else
{
    calculoDelImpuesto = (subtotal - calculoDelDescuento) * 0.15;
}

    cout << endl; 
    calculoDelDescuento = (subtotal * descuento) / 100;
    total = subtotal - calculoDelDescuento + calculoDelImpuesto;

    // Salida

    cout << "Total a pagar es: " << total;
	
	return 0;
}
