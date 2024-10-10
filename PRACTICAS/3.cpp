// enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main() {
    // Manejo de punto decimal y separador de miles
    locale loc("");
    cout.imbue(loc);
    
    // Declaración e impresión de texto
    string texto0 = "Hola Mundo";
    cout << texto0 << endl;

    // Unir textos de dos o más variables
    string primerTexto = "Hola ";
    string segundoTexto = "Mundo";
    string textoUnido = primerTexto + segundoTexto;
    cout << textoUnido << endl;

    // Leer desde teclado cin función de entrada de datos
    string nombre;
    cout << "Introduce tu nombre: ";
    cin >> nombre;
    cout << "Hola " << nombre << "!" << endl;




    return 0;
}
