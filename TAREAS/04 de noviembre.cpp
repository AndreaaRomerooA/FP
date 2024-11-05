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


    // EJERCICIO 1.19
    // Determinar el precio del boleto de ida y vuelta en avión
    int distancia;
    cout << "Distancia a recorrer: ";
    cin >> distancia;
    int vuelo = distancia * 2;
    int precio = vuelo * 2.5;
    if (distancia > 800)
    {
        cout << "El precio del boleto es de " << (precio * 0.70) << "$ US" << endl;
    }
    else 
    {
        cout << "El precio del boleto es de " << precio << "$ US" << endl;
    }
    cout << endl;
    cout << endl;


    // EJERCICIO 1.20
    // Si un ángulo es igual a 90 grados, imprimir el mensaje "El ángulo es un ángulo recto" sino imprimir el mensaje "El ángulo no es un ángulo recto".
    int ang;
    cout << "Angulo: ";
    cin >> ang;
    if (ang == 90)
    {
        cout << "El angulo es un angulo recto" << endl;
    }
    else
    {
        cout << "El angulo no es un angulo recto" << endl;
    }
    cout << endl;

    // Si la temperatura es superior a 100 grados, visualizar el mensaje “por encima del punto de ebullición del agua” sino visualizar el mensaje “por debajo del punto de ebullición del agua”.
    int temp;
    cout << "Temperatura: ";
    cin >> temp;
    if (temp > 100)
    {
        cout << "Por encima del punto de ebullicion del agua" << endl;
    }
    else
    {
        cout << "Por debajo del punto de ebullicion del agua" << endl;
    }
    cout << endl;

    // Recibir un número, Si este número es positivo, sumar el número a total de positivos usando una variable que acumule los números negativos, sino sumar al total de negativos usando una variable que acumule los números negativos.


    // Si “x” es mayor que “y”, y “z” es menor que “y”, imprimir “x”.
    int x, y, z;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    if (x > y and z < y)
    {
        cout << x << endl;
    }
    cout << endl;

    // Si la distancia es mayor que 20 y menos que 35, crear y leer un valor para luna variable de tipo entero llamada “tiempo”.
    int dist, tiempo;
    cout << "Distancia: ";
    cin >> dist;
    cout << "Tiempo: ";
    cin >> tiempo;
    if (dist > 20 and dist < 35)
    {
        cout << tiempo << endl;
    }
    cout << endl;



}
