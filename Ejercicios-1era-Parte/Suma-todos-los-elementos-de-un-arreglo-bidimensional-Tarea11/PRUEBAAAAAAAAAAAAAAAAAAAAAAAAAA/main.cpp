#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;

int main()
{
    srand(time(NULL));

    int numeros [5][2];

    for (int fila = 0; fila < 5; fila++)
    {
        for (int columna = 0; columna < 2; columna++)
        {
            numeros[fila][columna] = rand() % 10 + 1;

            cout << numeros[fila][columna] << "";
        }

        cout << endl;
    }

return 0;
}


  void coutEndls(int ciclos) {
  for (int indice = 1; indice <= ciclos; indice ++) {
  	        cout << '*';
	}
}



  int main () {	
	int numeros; 
	int arreglo;
  int suma;
	
	/* inicializa el numero random */
	srand (time(NULL));
	
	/* genera un numero entre 1 and 10: */
	numeros = rand() % 5 + 1;
	
	do {
		printf ("Adivina el numero (1 to 10): ");
		cin >> miNumero;
		
		if (numeroSecreto < miNumero) {
			cout << "El numero secreto es menor" << endl;
		}
		else {
			if (numeroSecreto > miNumero) {
				cout << "El numero secreto es mayor" << endl;
			}
		}
	} while (numeroSecreto != miNumero);
	
	cout << "Felicidades, adivinaste!" << endl;

	return 0;	
}

















  ----
    int numeros[5];
    int arreglo [5][2];
    
    int suma[5] = { 0, 0, 0, 0, 0 };

    //cout << "Ingrese los numeros" << endl << endl;

    for (int i = 0; i < 5; i++)
   {
    cout << "Ingrese los numeros: ";
    cin >> numeros[i];
    cout << endl;

    for (int j = 0; j < 5; j++)
    {
        cout << arreglo[j][0] << ": ";
        cin >> arreglo[j][1];

        //if (arreglo[j][1] == 's') {
          //  suma[j]++;
        //}
        
    }
     
     cout << endl;

     return 0;
}
   }

   //cout << "Resumen" << endl;
   cout << "Respuesta pregunta 1: " << arreglo[0] << endl;
   cout << "Respuesta pregunta 2: " << arreglo[1] << endl;
   cout << "Respuesta pregunta 3: " << arreglo[2] << endl;
   cout << "Respuesta pregunta 3: " << arreglo[2] << endl;
   cout << "Respuesta pregunta 3: " << arreglo[2] << endl;







  //int numeros[5][2];

    //numeros[0][0] = '0';
    //numeros[0][1] = '0';

    //numeros[1][0] = '0';
   // numeros[1][1] = '0';

    //numeros[2][0] = '0';
    //numeros[2][1] = '0';

    //numeros[3][0] = '0';
    //numeros[3][1] = '0';

    //numeros[4][0] = '0';
    //numeros[4][1] = '0';






    //for (int i = 0; i < 5; i++)
   // {
     //   for (int j = 0; j < 2; j++)
       // {
         //   cout << numeros[i][j] << ' ';
       // }
        
       // cout << endl;
    //}
    

// return 0;

    int filas = 5;
    int columnas = 2;

    int respuestas[5] = { 0, 0, 0, 0, 0 };

    int numeros[filas][columnas] =
    {
        { ' ', ' '},
        { ' ', ' '},
        { ' ', ' '},
        { ' ', ' '},
        { ' ', ' '},

    };

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << numeros[i][j] << ' ';
        }
        
        cout << endl;
    }
    
    


        for (int i = 0; i < 3; i++)
   {
    cout << "Ingrese su nombre: ";
    cin >> numeros[i];
    cout << endl;

    for (int j = 0; j < 3; j++)
    {
        cout << encuesta[j][0] << ": ";
        cin >> encuesta[j][1];

        if (encuesta[j][1] == "s") {
            respuestas[j]++;
        }
        
    }
     
     cout << endl;
   }

   cout << "Resumen" << endl;
   cout << "Respuesta pregunta 1: " << respuestas[0] << endl;
   cout << "Respuesta pregunta 2: " << respuestas[1] << endl;
   cout << "Respuesta pregunta 3: " << respuestas[2] << endl;


 return 0;

}
