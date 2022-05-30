#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int Dado1,Dado2;
string lanzar;



int main()
{

    while (true)
    {
        cout << " Programa programa que muestre el resultado de jugar con dos dados " << endl; //se gana con los numeros 4 , 6 , 8 y se pierden con los numeros 2 y 12
        cout << "Presione cualquier tecla para lanzar los dados : " << endl;
        cin >> lanzar;

       // system ("cls");

        for (int i = 0; i <= 1; i++)
        {
            srand (time (0));
            Dado1 = rand() % (6) + 1;
            Dado2 = rand() % (6) + 1; 
        }

        cout << " Dado 1 ["<<Dado1<<"]";
        cout << " Dado 2 ["<<Dado2<<"]" << endl;
        cout << " La suma de los dados es: ["<< Dado1 + Dado2<<"]" << endl;

        if (Dado1 + Dado2 == 4 or Dado1 + Dado2 == 6 or Dado1 + Dado2 == 8)
        {
            cout <<" Felicidades, ganastes! " <<endl;
            break;
        }

        if (Dado1 + Dado2 == 2 or Dado1 + Dado2 == 12)
        {
            cout <<" Perdistes, vuelve a intentar " << endl;
            break;
        }

        cout <<" Vuelve a lanzar " << endl;
          return 0;
    }  
    
}

