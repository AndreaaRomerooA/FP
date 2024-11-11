#include <iostream>

using namespace std;

int main()
{

	//    for (inicializacion; limite; incremento)
	//	           int i = 0; i <= 9; decremento
	//                             	i++

	for (int i = 0; i <= 9; i++)
	{
		cout << i << " , ";
	}
	cout << endl;
	cout << endl;

	// EJERCICIO 1
	for (int i = 9; i >= 0; i--)
	{
		cout << i << " , ";
	}
	cout << endl;
	cout << endl;


	// EJERCICIO 2
	for (int i = 0; i <= 99; i++)
	{
		cout << i << " , ";
	}
	cout << endl;
	cout << endl;


	// EJERCICIO 3
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " , ";
		}
	}
	cout << endl;
	cout << endl;


	// EJERCICIO 4
	int max, min;
	cout << "Rango minimo: ";
	cin >> min;
	cout << "Rango maximo: ";
	cin >> max;
	cout << endl;
	for (int a = min; a <= max; a++)
	{
		cout << a << " , ";
	}
	cout << endl;
	cout << endl;


	// EJERCICIO 5
	int mas, menos;
	cout << "Rango maximo: ";
	cin >> mas;
	cout << "Rango minimo: ";
	cin >> menos;
	cout << endl;
	for (int b = mas; b >= menos; b--)
	{
		cout << b << " , ";
	}
	cout << endl;
	cout << endl;

	// ARREGLOS DE UNA DIMENSION

        const int TAMANO = 10;
        int naturales[TAMANO]        // los corchetes [ ] se llaman Operador de Indice 
        { 0,1,2,3,4,5,6,7,8,9 };     // los  { } son un conjunto de datos separados por comas y sirve para inicializar arreglos 

        cout << naturales[0] << endl;
        naturales[0] = -1000;
        cout << naturales[0] << endl;
        cout << endl;

        for (int i = 0; i < TAMANO; i++)
        {
	        cout << naturales[i] << endl;
        }
	cout << endl;

	for (int elemento : naturales)
	{
		cout << elemento << endl;
	}


}
