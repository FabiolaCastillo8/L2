#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;

    void coutEndls(int ciclos) {
	for(int indice = 1; indice <= ciclos; indice ++) {
		cout << "*";
	}
}

    int main() {

    int numeros[5][2];        
    int suma;
    int filas;
    int columnas;
    
    srand(time(NULL));

   for (int filas = 0; filas < 5; filas++)
   {
        for (int columnas = 0; columnas < 2; columnas++)
        {
           numeros[filas][columnas] = rand() % 5 + 1;

            cout << numeros[filas][columnas] << " ";
        }

        cout << endl;

    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << numeros[i][j] << ' ';
        }
        
        cout << endl;
    }
    
   
    suma = filas + columnas;
    cout << "Total Suma: "<< suma << endl;

    
return 0;

}
    


















