#include <iostream>
using namespace std;

int main()
{

    // EJERCICIO 1.16 
    // Diseñar un programa que lea tres números A, B, C y visualice en pantalla el valor del mayor.
    int n1, n2, n3;
    cout << "Ingrese el primer número: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;
    cout << endl;
    if (n1 > n2 and n1 > n3)
    {
        cout << "Mayor es " << n1 << endl;
    }
    if (n2 > n1 and n2 > n3)
    {
        cout << "El numero mayor es " << n2 << endl;
    }
    if (n3 > n1 and n3 > n2)
    {
        cout << "El numero mayor es " << n3 << endl;
    }
    cout << endl;
    cout << endl;


    // EJERCICIO 1.17
    // 1.17 Crear un programa que lea tres números diferentes e imprime los valores máximo y mínimo
    int num1, num2, num3;
    cout << "Primer numero: ";
    cin >> num1;
    cout << "Segundo numero: ";
    cin >> num2;
    cout << "Tercer numero: ";
    cin >> num3;
    cout << endl;
    if (num1 > num2 and num1 > num3)
    {
        cout << "EL valor maximo es " << num1 << endl;
    }
    if (num2 > num1 and num2 > num3)
    {
        cout << "El valor maximo es " << num2 << endl;
    }
    if (num3 > num1 and num3 > num2)
    {
        cout << "El valor maximo es " << num3 << endl;
    }
    if (num1 > num2 and num1 < num3)
    {
        cout << "El valor minimo es  " << num1 << endl;
    }
    if (num2 < num1 and num2 < num3)
    {
        cout << "El valor minimo es " << num2 << endl;
    }
    if (num3 < num1 and num3 < num2)
    {
        cout << "El valor minimo es " << num3 << endl;
    }
    cout << endl;
    cout << endl;


    // EJERCICIO 1.18 
    // Crear un programa al que le solicitemos la hora HH, MM, SS y nos calcule la hora dentro de un segundo más tarde.
    int hh, mm, ss;
    cout << "Ingresa la hora" << endl;
    cout << "Hora: ";
    cin >> hh;
    cout << "Minutos: ";
    cin >> mm;
    cout << "Segundos: ";
    cin >> ss;
    cout << endl;
    if (ss == 59)
    {
        cout << "La hora actual es " << hh << ":" << (mm + 1) << ":00" << endl;
    }
    else 
    {
        cout << "La hora actual es " << hh << ":" << mm << ":" << (ss + 1) << endl;
    }
    cout << endl;
    cout << endl;


    // EJERCICIO 


}
