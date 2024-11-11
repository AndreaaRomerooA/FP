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


}
