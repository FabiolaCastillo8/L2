#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    int total = 0;

    for (int i = 0; i <= 10; i++)

    {
        if (i == 2 || i == 4 || i == 6 || i == 8 || i == 10)
        {
            pares = pares + i;
        }
        cout << i << " ";
    }
    
    cout << endl;
    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
         if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9)
        {
            impares = impares + i;
        }
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares;
    
    cout << endl;
    cout << endl;
    cout << "Total impares: " << impares;
    
    cout << endl;
    cout << endl;
    total = pares + impares;
    cout << "Total es: "<< total;

    return 0;
}
