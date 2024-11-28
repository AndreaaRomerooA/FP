#include <iostream>
using namespace std;

// FUNCIONES
void hola()
{
	cout << "Hola mundo";
}

// No se puede definir una funcion dentro de otra funcion
int main()
{
	hola();
}

// EJERCICIO 2
void suma()
{
	int n1, n2;
	cout << "Numero 1: ";
	cin >> n1;
	cout << "Numero 2: ";
	cin >> n2;
	cout << n1 + n2 << endl;
}
int main()
{
	suma();
}
