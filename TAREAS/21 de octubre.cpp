#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream> 

using namespace std;

int main()
{
	// EJERCICIO 1.1
	int num;
	cout << "Ingrese un número: ";
	cin >> num;
	cout << "El cuadrado de " << num << " es " << (num * num) << endl;
	cout << endl;

	// EJERCICIO 1.2
	int x;
	cout << "Ingrese un número: ";
	cin >> x;
	cout << x << " -- "
		<< (x * 2) << " -- "
		<< (x * 3) << " -- "
		<< (x * 4) << " -- "
		<< (x * 5) << endl;
	cout << endl;

	// EJERCICIO 1.3
	float peso;
	float libras = 2.2;
	cout << "Ingrese su peso: ";
	cin >> peso;
	cout << "Su peso en libras es de " << (peso * libras) << " libras" << endl;
	cout << endl;

	// EJERCICIO 1.4
	int v1;
	cout << "Ingrese el primer numero: ";
	cin >> v1;
	int v2;
	cout << "Ingrese el segundo numero: ";
	cin >> v2;
	int v3;
	cout << "Ingrese el tercer numero: ";
	cin >> v3;
	float total = v1 + v2 + v3;
	float promedio = total / 3;
	cout << "El promedio de los números es de " << promedio << endl;
	cout << endl;

	// EJERCICIO 1.5
	float cuenta;
	cout << "Ingrese el total de la cuenta y el porcentaje de propina a aplicar" << endl;
	cout << "Total de la cuenta: ";
	cin >> cuenta;
	int porcentaje;
	cout << "Porcentaje de propina: ";
	cin >> porcentaje;
	float propina = cuenta + ((porcentaje * cuenta) / 100);
	cout << "La cantidad a dar de propina es de " << propina << " pesos" << endl;
	cout << endl;


	// EJERCICIO 1.6
	int numero;
	cout << "Ingrese un número: ";
	cin >> numero;
	if (numero > 100)
	{
		cout << "El número es mayor a 100" << endl;
	}
	else
	{
		cout << "El numero es menor a 100" << endl;
	}
	cout << endl;

	// EJERCICIO 1.7 
	int numero2;
	cout << "Ingrese un número: ";
	cin >> numero2;
	if (numero2 < 0)
	{
		cout << "El numero es negativo" << endl;
	}
	else
	{
		cout << "El numero es positivo" << endl;
	}
	cout << endl;
	
	// EJERCICIO 1.8
	string email;
	string passwordIngresado;
	cout << "Ingresa tu email: ";
	cin >> email;
	cout << "Contraseña: ";
	cin >> passwordIngresado;
	if (passwordIngresado == "12345")
	{
		cout << "Contraseña correcta" << endl;
	}
	else
	{
		cout << "Contraseña incorrecta" << endl;
	}
	cout << endl;
	
	// EJERCICIO 1.9
	float farenheith;
	cout << "Ingrese los grados Frenheith: ";
	cin >> farenheith;
	float grados = ((farenheith - 32) * 5) / 9;
	if (farenheith == 32)
	{
		cout << "Cero grados centigrados" << endl;
	}
	else
	{
		cout << grados << " centigrados" << endl;
	}
	cout << endl;
 
	// EJERCICIO 1.10
	double peso, estatura;
	double mc;
	cout << "Ingresa tu peso: ";
	cin >> peso;
	cout << "Ingresa tu estatura: ";
	cin >> estatura;
	mc = peso / (estatura * estatura);
	cout << "Masa corporal: " << mc << endl;
	if (mc < 18.5)
	{
		cout << "Abajo del peso normal" << endl;
	}
	if (mc >= 18.5 and mc < 25)
	{
		cout << "Peso normal" << endl;
	}
	if (mc >= 25 and mc < 30)
	{
		cout << "Sobrepeso" << endl;
	}
	if (mc >= 30 and mc < 35)
	{
		cout << "Obeso clase 1" << endl;
	}
	if (mc >= 35 and mc < 40)
	{
		cout << "Obeso clase 2" << endl;
	}
	if (mc >= 40)
	{
		cout << "Obeso clase 3" << endl;
	}

}

	

