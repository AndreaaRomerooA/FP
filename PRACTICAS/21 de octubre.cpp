#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream> 

using namespace std;

int main()
{
	// EJERCICIO 1
	int num = 10;
	if (num % 2 == 0) // nunca poner ; en esta linea 
	{
		cout << "par " << endl;

	}
	else // nunca lleva condición
	{
		cout << "impar " << endl;
	}
	cout << endl;


	// EJERCICIO 2
	int n1, n2;
	cout << "n1: ";
	cin >> n1;
	cout << "n2: ";
	cin >> n2;
	cout << endl;
	if (n1 > n2)
	{
		cout << "n1 :" << n1 << endl;
	}
	else
	{
		cout << "n2: " << n2 << endl;
	}
	cout << endl;


	// EJERCICIO 3
	int edad;
	cout << "Dame tu edad: ";
	cin >> edad;
	if (edad >= 18)
	{
		cout << "mayor de edad" << endl;
	}
	else
	{
		cout << "menor de edad" << endl;
	}
	cout << endl;


	// EJERCICIO 4
	int temperatura;
	cout << "temperatura: ";
	cin >> temperatura;
	if (temperatura < 10)
	{
		cout << "hace mucho frío" << endl;
	} 
	if (temperatura >= 10 and temperatura <= 17)
	{
		cout << "frio" << endl;
	}
	if (temperatura > 17)
	{
		cout << "templado" << endl;
	}
	cout << endl;


	// EJERCICIO 5
	char voto = ' ';
	cout << "a favor s/n: ";
	cin >> voto;
	cout << endl;
	if (voto == 's' or
		voto == 'n' or
		voto == 'S' or
		voto == 'N')
	{
		cout << "voto valido" << endl;
	}
	else
	{
		cout << "voto invalido" << endl;
	}
	cout << endl;


	// EJERCICIO 6 // ????????????????????????????????
	int horasTrabajadas;
	cout << "horas trabajadas: ";
	cin >> horasTrabajadas;
	cout << endl;
	int horasBono = horasTrabajadas - 40;
	if (horasBono > 0)
	{
		horasBono = horasBono * 75;
		cout << "Bono " << horasBono;
	}




}
