#include <iostream>
    using namespace std;

    int main()
    {
        
       
        // EJERCICIO 1.21 
        string opcion1;
        do
        {
            cout << "¿Quieres salir del ciclo? [SI / NO] " << endl;
            cin >> opcion1;
        } while (opcion1 != "SI");
        cout << endl;


        // EJERCICIO
        int numero1, numero2, total;
        string opcion2;
        do
        {
            cout << "Menu de operaciones" << endl;
            cout << endl;
            cout << "a) Suma de dos operandos" << endl;
            cout << "b) Resta de dos operandos" << endl;
            cout << "c) Multiplicacion de dos operandos" << endl;
            cout << "d) Division de dos operandos" << endl;
            cout << "e) Residuo de dos operandos" << endl;
            cout << "f) Salir del menu" << endl;
            cout << endl;
            cin >> opcion2;
            cout << "Primer numero: ";
            cin >> numero1;
            cout << "Segundo numero: ";
            cin >> numero2;
            if (opcion2 == "a")
            {
                cout << "Resultado de operacion: " << (numero1 + numero2) << endl;
                cout << endl;
            }
            if (opcion2 == "b")
            {
                cout << "Resultado de operacion: " << (numero1 - numero2) << endl;
                cout << endl;
            }
            if (opcion2 == "c")
            {
                cout << "Resultado de operacion: " << (numero1 * numero2) << endl;
                cout << endl;
            }
            if (opcion2 == "d")
            {
                cout << "Resultado de operacion: " << (numero1 / numero2) << endl;
                cout << endl;
            }
            if (opcion2 == "e")
            {
                cout << "Resultado de operacion: " << (numero1 % numero2) << endl;
            }
        } while (opcion2 != "f");
        break;


        // EJERCICIO 1.23
        long long 

       
    
    
    }
