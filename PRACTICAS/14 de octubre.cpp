#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream> 
using namespace std;

int main()
{
	// BOOL
	cout << boolalpha; // Imprime true en lugar de 1
	bool bb = true;
	cout << bb << endl;

	// CHAR 
	char opcion1 = 'a';
	cout << opcion1 << endl;

	// Enteros 
	int n1 = 10;
	int n2 = 20;

	// Floats
	float f1 = 1.5;
	float f2 = 5.2;
	cout << endl;

	cout << boolalpha;

	// Operaciones con desigualdad, comparaciones, magnitud

	// 1. Igualdad
	cout << "(n1 == n2): " << (n1 == n2) << endl;
	cout << "(f1 == f2): " << (f1 == f2) << endl;
	cout << endl;

	// 2. Desigualdad
	cout << "(n1 != n2): " << (n1 != n2) << endl;
	cout << "(f1 != f2): " << (f1 != f2) << endl;
	cout << endl;

	// 3. Mayor que 
	cout << "(n1 > n2): " << (n1 > n2) << endl;
	cout << "(f1 > f2): " << (f1 > f2) << endl;
	cout << endl;

	// 4. Menor que 
	cout << "(n1 < n2): " << (n1 < n2) << endl;
	cout << "(f1 < f2): " << (f1 < f2) << endl;
	cout << endl;

	// 5. Mayor o igual que 
	cout << "(n1 >= n2): " << (n1 >= n2) << endl;
	cout << "(f1 >= f2): " << (f1 >= f2) << endl;
	cout << endl;

	// 6. Menor o igual que
	cout << "(n1 <= n2): " << (n1 <= n2) << endl;
	cout << "(f1 <= f2): " << (f1 <= f2) << endl;
	cout << endl;

	// 7. Comparaciones de tipos mixtos 
	cout << "(n1 > f2): " << (n1 > f2) << endl;
	cout << "(f1 < n2): " << (f1 < n2) << endl;
	cout << endl;

	// 8. Valores negativos
	cout << "(n1 > -n2): " << (n1 > -n2) << endl;
	cout << "(f1 < -f2): " << (f1 < -f2) << endl;
	cout << endl;

	// 9. Combinación de comparaciones
	// Se puede usar && o and
	// Se puede usar || o or 
	cout << "((n1 < n2) and (f1 > f2)): " << ((n1 < n2) and (f1 > f2)) << endl;
	cout << "((n1 == 10) or (f1 == 5.2)): " << ((n1 == 10) or (f1 == 5.2)) << endl;
	cout << endl;

	// 10. Comparaciones anidadas 
	cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
	cout << "(f1 <= f2 + 10.5): " << (f1 <= f2 + 10.5) << endl;
	cout << endl;

	// 11. Comparación con constantes 
	cout << "(n1 == 10): " << (n1 == 10) << endl;
	cout << "(f1 == 5.2): " << (f1 == 5.2) << endl;
	cout << endl;

	// 12. Comparación con los resultados de las operaciones aritméticas
	cout << "((n1 + n2) < (f1 * f2)): " << ((n1 + n2) < (f1 * f2)) << endl;
	cout << "((n1 + n2) >= (f1 / f2)): " << ((n1 + n2) >= (f1 / f2)) << endl;
	cout << endl;

	// 13. Comparación de resultados negativos y positivos
	cout << "((-n1) < n2): " << ((-n1) < n2) << endl;
	cout << "((-f1) > f2): " << ((-f1) > f2) << endl;
	cout << endl;

	// 14. Combianción de aritméticas y comparación
	cout << "((n1 * n2) > (f1 - f2)): " << ((n1 * n2) > (f1 - f2)) << endl;
	cout << "((n2 / n1) <= (f1 + f2)): " << ((n2 / n1) <= (f1 + f2)) << endl;
	cout << endl;

	// 15. Comparaciones encadenadas
	cout << "(n1 < n2 and n2 < f1): " << (n1 < n2 and n2 < f1) << endl;
	cout << "(f2 > f1 and f1 > n1): " << (f2 > f1 and f1 > n1) << endl;
	cout << endl;

	// 16. Comparación de módulos
	cout << "((n2 % n1) == 0): " << ((n2 % n1) == 0) << endl;
	cout << endl;

	// Operadores Lógicos
	bool p = true, q = false;

	// 17. Lógico AND
	cout << "(p and q): " << (p and q) << endl;
	cout << endl;

	// 18. OR Lógico
	cout << "(p or q): " << (p or q) << endl;
	cout << endl;

	// 19. Lógico NOT 
	cout << "(!p): " << (not(p)) << endl;
	cout << endl;

	// 20. Combinación de AND y NOT
	cout << "(p and not(q)): " << (p and not(q)) << endl;
	cout << endl;

	// 21. Doble NOT
	cout << "(not(not(q))): " << (not(not(q))) << endl;
	cout << endl;

	// 22. Operaciones mixtas
	cout << "(not(p and q) or (p or not(q))): " << (not(p and q) or (p or not(q))) << endl;
	cout << endl;

	// 23. Asignación de variables con operadores lógicos
	bool a = p and q;
	cout << "Valor asignado a variable 'a': " << a << endl;
	cout << endl;

	// 24. Operaciones lógicas con números enteros (distinto de 0 es verdadero, cero es falso)
	int x = 5, y = 0;
	cout << "(x and y): " << (x and y) << endl;
	cout << endl;

	// 25. Operaccones lógicas con tipos de datos mixtos
	float m = 3.5, n = 0.0;
	cout << "(m or n): " << (m or n) << endl;
	cout << endl;

	// 26. Expresiones complejas
	cout << "((p or q) and (x or n)): " << ((p or q) and (x or n)) << endl;
	cout << endl;

	// 27. Expresiones anidadas 
	cout << "((x and not(y)) and (m or not(q))): " << ((x and not(y)) and (m or not(q))) << endl;
	cout << endl;

	// 28. Operaciones lógicas con números de punto flotante
	cout << "((m > n) and (m <= 3.5)): " << ((m > n) and (m <= 3.5)) << endl;
	cout << endl;

	// 29. Uso de operadores lógicos con comparación de cadenas de texto (string)
	string str1 = "Hola", str2 = "mundo";
	cout << "((str1 == str2) or (str1 != str2)): " << ((str1 == str2) or (str1 != str2)) << endl;


}
