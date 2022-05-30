#include <iostream>

using namespace std;

double subtotal = 0;
double total = 0;
double impuesto = 0.15;
double elImpuesto = 0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n'; 
    subtotal = subtotal + (cantidad * precio);
    elImpuesto = (subtotal * impuesto);
    total = subtotal + (subtotal * impuesto);
}

void imprimirFactura()
{
    system("cls");
    cout << "***" << endl;
    cout << "FACTURA" << endl;
    cout << "***" << endl;
    cout << endl;

    cout << "Productos:" << endl;
    cout << listaProductos;
    cout << endl;
    cout << "Subtotal:" << subtotal;
    cout << endl;
    cout << "El impuesto es de: " <<elImpuesto;
    cout << endl;
    cout << "El total a pagar es " <<total;
    cout << endl;
    cout << endl;
    cout << endl;

    system("pause");
}