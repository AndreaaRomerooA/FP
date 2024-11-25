#include <iostream>
using namespace std;

int main()
{
int numeros[10]; 
int num, i = 0;
num = -1;
while (num != 0)
{
    cout << "Dame un numero: ";
    cin >> num;
    if (num == 0 and i > 9)
    {
        break;
    }
    numeros[i] = num;
    i++;
}
for (int elementos : numeros)
{
    cout << elementos << endl;
}

    ////////////////////////////////////////////////////////// EJERCICIO 1 CON VECTORES
     vector <int> numeros;
 int num;
 num = -1;
 while (num != 0)
 {
     cout << "Dame un numero: ";
     cin >> num;

     if (num == 0)
     {
         break;
     }
     numeros.push_back(num);
 }
 for (int elementos : numeros)
 {
     cout << elementos * 10 << endl;
 }


    ////////////////////////////////////////////////////////// EJERCICIO 2
    int numeros[10]
{ 13,45,7,2,56,78,93,45,11,36 };
vector <int> vnum
{ 13,45,7,2,56,78,93,45,11,36 };
int mayor = -1;
for (int i = 0; i <= 9; i++)
{
    if (vnum[i] > mayor)
    {
        mayor = vnum[i];
    }
}
cout << "El mayor es: " << mayor << endl;
cout << endl;


    ////////////////////////////////////////////////////////// EJERCICIO 5
    int numeros[10]
{ 13,45,7,2,56,78,93,45,11,36 };
int numero, primero, segundo, tercero, temp = 0;
primero = numeros[0];
segundo = numeros[1];
if (primero < segundo)
{
    temp = primero;
    primero = segundo;
    segundo = temp;
}

for (int i = 2; i <= 9; i++)
{
    if (numeros[i] > primero)
    {
        segundo = primero;
        primero = numeros[i];
    }
    else if (numeros[i] > segundo)
    {
        segundo = numeros[i];
    }
    
}
cout << "Segundo mayor: " << segundo << endl;
cout << endl;


    ////////////////////////////////////////////////////////// EJERCICIO 8
     int numeros[10]
 { 13,45,7,2,56,78,93,45,11,36 };
 int numero, primero, segundo, tercero, temp = 0;
 primero = numeros[0];
 segundo = numeros[1];
 tercero = numeros[2];
 if (primero < segundo)
 {
     temp = primero;
     primero = segundo;
     segundo = temp;
 }
 if (primero < tercero)
 {
     temp = primero;
     primero = tercero;
     tercero = temp;
 }
 if (segundo < tercero)
 {
     temp = segundo;
     segundo = tercero;
     tercero = temp;
 }
 for (int i = 3; i <= 9; i++)
 {
     if (numeros[i] > primero)
     {
         tercero = segundo;
         segundo = primero;
         primero = numeros[i];
     }
     else if (numeros[i] > segundo)
     {
         tercero = segundo;
         segundo = numeros[i];
     }
     else if (numeros[i] > tercero)
     {
         tercero = numeros[i];
     }
 }
 cout << primero << " ," << segundo << " ," << tercero << endl;
 cout << endl;


    ////////////////////////////////////////////////////////// EJERCICIO 9
    int numeros[10]
{ 13,45,7,2,56,78,93,45,11,36 };
int numero, primero, segundo, tercero, temp = 0;
primero = numeros[0];
segundo = numeros[1];
if (primero < segundo)
{
    temp = primero;
    primero = segundo;
    segundo = temp;
}

for (int i = 2; i <= 9; i++)
{
    if (numeros[i] < primero)
    {
        segundo = primero;
        primero = numeros[i];
    }
    else if (numeros[i] < segundo)
    {
        segundo = numeros[i];
    }
    
}
cout << "Segundo menor: " << segundo << endl;
cout << endl;


    
}
