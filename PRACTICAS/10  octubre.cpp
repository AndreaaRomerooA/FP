#include <iostream>
using namespace std;

int main()
{ 
	// OPERACIONES ARITMÉTICAS

	// Enteros
	int n1 = 10;
	int n2 = 20;
	int n3;

	// Floats 
	float f1 = 1.5;
	float f2 = 5.2;
	float f3;

	// 1. Adición
	n3 = n1 + n2;
	cout << "Resultado suma de enteros: " << n3 << endl;
	f3 = f1 + f2;
	cout << "Resultado suma flotantes: " << f3 << endl;
	cout << endl;

	// 2. Sustracción
	n3 = n1 - n2;
	cout << "Resultado resta enteros: " << n3 << endl;
	f3 = f1 - f2;
	cout << "Resultado resta flotantes: " << f3 << endl;
	cout << endl;

	// 3. Multiplicación 
	n3 = n1 * n2;
	cout << "Resultado multiplicación enteros: " << n3 << endl;
	f3 = f1 * f2;
	cout << "Resultado multiplicación flotantes: " << f3 << endl;
	cout << endl;

	// 4. División 
	n3 = n2 / n1;
	cout << "Resultado división enteros: " << n3 << endl;
	f3 = f1 / f2;
	cout << "Resultado división flotantes: " << f3 << endl;
	cout << endl;

	// 5. Modulo (residuo de la división)
	n3 = n2 % n1;
	cout << "Resultado modulo: " << n3 << endl;
	cout << endl;

	// 6. Operaciones mixtas 
	f3 = n1 + f1;
	cout << "Resultado suma mixta: " << f3 << endl;
	f3 = n2 - f2;
	cout << "Resultado resta mixta: " << f3 << endl;
	f3 = n1 * f2;
	cout << "Resultado multiplicación mixta: " << f3 << endl;
	f3 = n2 / f1;
	cout << "Resultado división mixta: " << f3 << endl;
	f3 = (n1 + n2) * f1 / f2;
	cout << "Resultado operación mixta: " << f3 << endl;
	cout << endl;

	// 7. Más ejemplos con floats
	f3 = f1 + 10.3;
	cout << "Resultado suma flotantes: " << f3 << endl;
	f3 = f2 * 2.5;
	cout << "Resultado multiplicación flotantes: " << f3 << endl;
	f3 = f1 / 2.0;
	cout << "Resultado división flotates: " << f3 << endl;
	f3 = f2 - 3.2;
	cout << "Resultado resta flotantes: " << f3 << endl;
	cout << endl;

	// 8. Combinaciones de números enteros y flotantes 
	f3 = n1 + f1 - n2 / 2.0 + f2 * 1.5;
	cout << "Resultados operacion mixta enteros y flotantes: " << f3 << endl;
	cout << endl;

	// 9. Combianciones más complejas 
	f3 = (n1 + f1) * (n2 - n1) / (n1 * f3);
	cout << "Resultado operación compleja: " << f3 << endl;
	cout << endl;

	// 10. Operaciones aritméticas de tipo mixto
	double d1 = 7.4;
	f3 = n1 + d1;

	cout << "Resultado suma double: " << f3 << endl;
	f3 = n2 - d1;
	cout << "Resultado resta double: " << f3 << endl;
	f3 = d1 * f2;
	cout << "resultado multiplicación double: " << f3 << endl;
	f3 = d1 / f1;
	cout << "Resultado división double: " << f3 << endl;
	cout << endl;

	// 11. Números negativos 
	int negInt = -25;
	float negFloat = 12.3;

	n3 = n1 + negInt;
	cout << "Resultado suma enteros positivo + negativo: " << n3 << endl;
	n3 = n2 + negInt;
	cout << "Resultado suma enteros positivos + negativo: " << n3 << endl;
	f3 = negFloat - f2;
	cout << "Resultado resta flotantes negativo - positivo: " << f3 << endl;
	f3 = negInt * n2;
	cout << "Resultado multiplicación enteros negativo * positivo: " << n3 << endl;
	cout << endl;

}
