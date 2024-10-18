#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream> 
using namespace std;

int main()
{
	// EJERCICIO 1.1
	// 1
	cout << "Resultado: " << (3 + 5 * 2 / 2 - 1) << endl;
	// 2
	cout << "Resultado: " << (3 + 10 / 2 - 1) << endl;
	// 3
	cout << "Resultado: " << (3 + 5 - 1) << endl;
	// 4
	cout << "Resultado: " << (8 - 1) << endl;
	// 5
	cout << "Resultado: " << (1 / 3 * 3) << endl;
	cout << endl;

	// EJERCICIO 1.2 Potencia al cuadrado de cualquier número
	int numero;
	cout << "Ingrese un número: ";
	cin >> numero;
	cout << "La potencia al cuadrado de " << numero << " es " << (numero * numero) << endl;
	cout << endl;

	// EJERCICIO 1.3 Convertir yardas a metros
	float n1 = 0.9144;
	float yardas;
	cout << "Ingrese las yardas: ";
	cin >> yardas;
	cout << "Número en metros: " << (yardas * n1) << endl;
	cout << endl;

	// EJERCICIO 1.4 Depreciación de un auto del 80% de 200,000 por 5 años 
	cout << "Depreciación de auto: " << endl; // TERMINARRRRRRRR
	int valor = 200000;
	float depreciar = 0.8;
	int depreciacion = valor * depreciar;
	int años = 5;
	int valor2 = depreciacion / años;
	cout << "La depreciación por " << años << " años será de " << (depreciacion / años) << " pesos." << endl;
	cout << endl;
	cout << "Depreciacion el primer año: " << (valor - valor2) << endl;
	cout << "Depreciacion el segundo año: " << (valor - (2 * valor2)) << endl;
	cout << "Depreciacion el tercer año: " << (valor - (3 * valor2)) << endl;
	cout << "Depreciacion el cuarto año: " << (valor - (4 * valor2)) << endl;
	cout << "Depreciacion el quinto año: " << (valor - (5 * valor2)) << endl;
	
	// EJERCICIO 1.5 Deduccion de impuestos del salario 
	int sueldo = 25000;
	int fijo = 900;
	float porcentual = 0.015;
	cout << "Impuesto a deducir: $" << ((sueldo - fijo) * porcentual) << endl;
	cout << "Sueldo neto: $" << (sueldo - ((sueldo - fijo) * porcentual)) << endl; 
	cout << endl;

	//EJERCICIO 1.6 Operaciones con variables
	int v1 = 3;
	int v2 = 12;
	float f1 = 3.0;
	// 1
	cout << "(3 * 4): " << (v1 * 4) << endl;
	// 2
	cout << "(12 / 3): " << (v2 / v1) << endl;
	// 3
	cout << "(12 % 3): " << (v2 % v1) << endl;
	// 4
	cout << "(12 % 7): " << (v2 % 7) << endl;
	// 5
	cout << "(3 + 3.0): " << (v1 + f1) << endl;
	// 6
	cout << "(10 / 100): " << (10 / 100) << endl;
	// 7
	cout << endl;

	// EJERCICIO 1.7 Comparaciones 
	int a = 10;
	int b = 20;
	cout << boolalpha;
	// 1
	cout << "(a > b): " << (a > b) << endl;
	// 2
	cout << "(a < b): " << (a < b) << endl;
	// 3
	cout << "(a == b): " << (a == b) << endl;
	// 4
	cout << "(a != b): " << (a != b) << endl; // revisar
	// 5
	cout << "((a + b) > 100): " << ((a + b) > 100) << endl;
	// 6
	cout << "((a - b) == 0): " << ((a - b) == 0) << endl;
	// 7
	cout << "((a * b) > 500): " << ((a * b) > 500) << endl;
	// 8
	cout << "((a * b) < 100): " << ((a * b) < 100) << endl;
	// 9
	cout << "((a - b) < 0): " << ((a - b) < 0) << endl;
	// 10
	cout << "(a < 20): " << (a < 20) << endl;







	int num = 10;
	if (num % 2 == 0) // nunca poner ; en esta linea 
	{
		cout << "par " << endl;

	}
	else // nunca lleva condición
	{
		cout << "impar " << endl;
	}


}
