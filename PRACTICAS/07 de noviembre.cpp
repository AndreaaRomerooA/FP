#include <iostream>
using namespace std;

int main()
{
    int numMes;
    cout << "Num mes: ";
    cin >> numMes;
    switch (numMes)
    {
    case 1:
        cout << "ENE" << endl;
        break;

    case 2:
        cout << "FEB" << endl;
        break;
    case 3:
        cout << "MAR" << endl;
        break;
    case 4:
        cout << "ABR" << endl;
        break;
    case 5:
        cout << "MAY" << endl;
        break;
    case 6:
        cout << "JUN" << endl;
        break;
    case 7:
        cout << "JUL" << endl;
        break;
    case 8:
        cout << "AGO" << endl;
        break;
    case 9:
        cout << "SEP" << endl;
        break;
    case 10:
        cout << "OCT" << endl;
        break;
    case 11:
        cout << "NOV" << endl;
        break;
    case 12:
        cout << "DIC" << endl;
        break;
    default:
        cout << "Mes invalido" << endl;
    }


    // SRAND
     srand(time(NULL));
 int castigo = 0;
 int vida = 12;
 int premio = 0;
 cout << "Vida inicial: " << vida << endl;

 while (vida > 0)
 {
     // deducir uno vida
     vida--;
     cout << "Costo de ciclo: " << vida << endl;
     // castigo
     castigo = rand() % 2;   // % 2 limite de numeros, es decir, solo mostrara 0 y 1
     if (castigo == 1)
     {
         vida = vida - 3;
         cout << "Castigo: " << vida << endl;
     }
     premio = rand() % 2;
     if (premio == 1)
     {
         vida = vida + 3;
         cout << "Premio: " << vida << endl;
     }
     cout << "Vida despues de ciclo: " << vida << endl;
 }

    
}
