#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main() {
    //Función de localizacion de las preferencias punto decimal 
    locale loc("");
    cout.imbue(loc);
  
    // 1. Entero (int)
    int numeroEntero = 42;
    cout << "Entero: " << numeroEntero << endl;
    cout << "Rango INT : " << numeric_limits<int>::min() << " a " << numeric_limits<int>::max() << endl;

    // 2. Entero corto (short int)
    short int numeroCorto = 32000;
    cout << "Entero corto: " << numeroCorto << endl;
    cout << "Rango Short Int : " << numeric_limits<short int>::min() << " a " << numeric_limits<short int>::max() << endl;

    // 3. Entero largo (long long)
    long long numeroLargo = 1234567890L;
    cout << "Entero largo: " << numeroLargo << endl;
    cout << "Rango long long : " << numeric_limits<long long>::min() << " a " << numeric_limits<long long>::max() << endl;

    // 4. Entero sin signo (unsigned int)
    unsigned int numeroSinSigno = 4000000000U;
    cout << "Entero sin signo: " << numeroSinSigno << endl;
    cout << "Rango unsigned int : " << numeric_limits<unsigned int>::min() << " a " << numeric_limits<unsigned int>::max() << endl;

    // 5. Entero corto sin signo (unsigned short int)
    unsigned short int numeroCortoSinSigno = 65000;
    cout << "Entero corto sin signo: " << numeroCortoSinSigno << endl;
    cout << "Rango unsigned short int : " << numeric_limits<unsigned short int>::min() << " a " << numeric_limits<unsigned short int>::max() << endl;

    // 6. Entero largo sin signo (unsigned long long)
    unsigned long long numeroLargoSinSigno = 4000000000UL;
    cout << "Entero largo sin signo: " << numeroLargoSinSigno << endl;
    cout << "Rango unsigned long long : " << numeric_limits<unsigned long long>::min() << " a " << numeric_limits<unsigned long long>::max() << endl;

    // 7. Entero con signo explÃ­cito (signed int)
    signed int numeroConSigno = -42;
    cout << "Entero con signo: " << numeroConSigno << endl;
    cout << "Rango signed int : " << numeric_limits<signed int>::min() << " a " << numeric_limits<signed int>::max() << endl;

    // 8. Entero corto con signo explÃ­cito (signed short int)
    signed short int numeroCortoConSigno = -32000;
    cout << "Entero corto con signo: " << numeroCortoConSigno << endl;
    cout << "Rango signed short int : " << numeric_limits<signed short int>::min() << " a " << numeric_limits<signed short int>::max() << endl;

    // 9. Entero largo con signo explÃ­cito (signed long int)
    signed long int numeroLargoConSigno = -1234567890L;
    cout << "Entero largo con signo: " << numeroLargoConSigno << endl;
    cout << "Rango signed long int : " << numeric_limits<signed long int>::min() << " a " << numeric_limits<signed long int>::max() << endl;

    // 10. Entero largo largo (long long int)
    long long int numeroLargoLargo = 123456789012345LL;
    cout << "Entero largo largo: " << numeroLargoLargo << endl;
    cout << "Rango long long int : " << numeric_limits<long long int>::min() << " a " << numeric_limits<long long int>::max() << endl;

    // Declaración y asignación en dos pasos
    int edad;
    cout << "Ingresa tu edad? ";
    cin >> edad; 
    cout << "tu edad es : " << edad << endl;

    // Números con punto decimal
    cout << endl;
    const float pi = 3.1415926535897932;
    const double PI = 3.1415926535897932;
    cout << fixed;
    cout << setprecision(7);
    cout << "flotante pi: " << pi << endl; 
    cout << "double PI: " << PI << endl;
  
    cout << endl;
    float kilos;
    cout << "Dame tu peso: ";
    cin >> kilos;
    cout << "Tu peso es: " << kilos << endl;

    const int velocidadLuz = 300000;
    const float gravedad = 9.81;

    string nombre = "Andrea"; 
    string apellidoPaterno = "Romero";
    string apellidoMaterno = "Alvarez";

    cout << "nombre completo "
        << nombre
        << " " << apellidoPaterno << endl; 
      



    return 0;
}
