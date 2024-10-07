#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    // EJERCICIO 4
    // Introducir una linea completa en texto (string)
    // cin.ignore(); // Ignorar la funcion cin, cuando hay "cin >>" anteriores a etsa linea de código
    string nombreCompleto;
    cout << "Introduce tu nombre completo: ";
    getline(cin, nombreCompleto); //Obtiene una linea completa de texto
    cout << "Tu nombre completo es: " << nombreCompleto << endl;

    // EJERCICIO 5
    // De que tamaño es una string
    cout << "La longitud del texto es: " << nombreCompleto.length() << endl;

    // EJERCICIO 6
    // Como acceder un caracter especifico de un texto
    // [] = Operador de índice, se empieza por 0 
    cout << "El primer caracter de nombre completo es: " << nombreCompleto[0] << endl;

    // EJERCICIO 7
    // Cambiar un caracter especifico en un texto
    string cambio = "Hola";
    cambio[0] = 'h';
    cout << "Cambiar H por h: " << cambio << endl;

    // EJERCICIO 8
    // Convertir una string a MAYUSCULAS
    string textoMinusculas = "texto a convertir";
    transform(textoMinusculas.begin(), textoMinusculas.end(), textoMinusculas.begin(), toupper);
    cout << "Texto en MAYUSCULAS: " << textoMinusculas << endl;

    //EJERCICIO 9 
    // Convertir un string a minusculas
    string textoMayusculas = "TEXTO A CONVERTIR";
    transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), tolower);
    cout << "Texto en minusculas: " << textoMayusculas << endl;

    // EJERCICIO 10
    // Insertar un texto dentro de otro
    string textoPrincipal = "Jose, ";
    textoPrincipal.insert(6, "Luis");
    cout << "Texto dentro de otro: " << textoPrincipal << endl;

    //EJERCICIO 11
    //Revertir un texto
    string textoRevertir = "Hola, mundo!";
    reverse(textoRevertir.begin(), textoRevertir.end());
    cout << "Texto revertido: " << textoRevertir << endl;

    // EJERCICIO 12
    // Convertir un número a un string 
    int n1 = 123;
    string numeroAtexto = to_string(n1);
    cout << "Número como string: " << numeroAtexto << endl;

    //EJERCICIO 13 
    // Convertir un string a numero
    string textoAnumero = "123";
    int n2 = stoi(textoAnumero);
    cout << "String como numero: " << numeroAtexto << endl;

 
}
