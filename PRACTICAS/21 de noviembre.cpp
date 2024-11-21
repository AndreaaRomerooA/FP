  #include <iostream>
using namespace std;

int main()
{

    // EJERCICIO MATRIZ
    int matriz[2][2] = { {1,2} , {3,4} };
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << matriz[i][j] << endl;
        }
    }
    cout << endl;


    // EJERCICIO SUDOKU
    int sudoku[9][9] =
    { {0,3,0,0,0,0,0,0,0} ,
    {0,2,0,9,0,6,3,0,0} ,
    {0,6,0,4,0,2,0,9,0} ,
    {1,0,0,0,9,0,4,0,0} ,
    {0,0,8,1,0,3,5,0,0} ,
    {0,0,5,0,7,0,0,0,3} ,
    {0,5,0,3,0,1,0,6,0} ,
    {0,0,4,6,0,7,0,3,0} ,
    {0,0,0,0,0,0,0,8,0} };
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; i <= 8; j++)
        {
            cout << sudoku[i][j] << endl;
        }
    }


    // Asignar valores aleatorios
    srand(time(NULL));
    int arreglo[10];
    for (int i = 0; i <= 9; i++)
    {
        arreglo[i] = rand() % 101;
    }
    for (int elemento : arreglo)
    {
        cout << elemento << endl;
    }

  

}
