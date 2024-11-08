#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream> 
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


        // EJERCICIO 1.22
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
                cout << endl;
            }
        } while (opcion2 != "f");
        break;


        // EJERCICIO 1.23
        long long numTarjeta, dinero;
        string opcion3;
        cout << "Ingrese su numero de tarjeta: ";
        cin >> numTarjeta;
        cout << "Ingrese su pin: ";
        if (numTarjeta != "1234")
        {
            cout << endl;
        }
        do
            {
                if (numTarjeta == "1234")
                {
                cout << "Menu de operaciones cajero Unitec" << endl;
                cout << endl;
                cout << "a) Consulta de saldo" << endl;
                cout << "b) Retiro de dinero" << endl;
                cout << "c) Cancelar operacion" << endl;
                } else 
                { 
                    cout << "Pin incorrecto" << endl;
                }
                cout << endl;
                cin >> opcion3;

                if (opcion3 == "a")
                {
                    cout << "Saldo: $3450.50" << endl;
                    cout << endl;
                }
                if (opcion3 == "b")
                {
                    cout << "Dinero a retirar: ";
                    cin >> dinero;
                    if (dinero > 3450)
                    { 
                        cout << "Fondos insuficientes" << endl;
                        cout << endl;
                    }
                    else 
                    { 
                        cout << "Saldo remanente: $" << (3450.50 - dinero) << endl;
                        cout << endl;
                    }
                }   
            }
            while (opcion3 != "c");
        break;
        cout << endl;


        // EJERCICIO 1.24
        srand(time(NULL));
	int castigo = 0;
	int vida=12;
	int premio = 0;
	cout << "vida inicial " 
		<< vida << endl;
	while (vida > 0) 
	{
		//deducir uno vida
		vida--;
		cout << "costo de ciclo " 
			<< vida << endl;
		// castigo?
		castigo = rand() % 2;
		if (castigo == 1) 
		{
			vida = vida - 3;
			cout << "castigo "
				<< vida << endl;
		}
		premio = rand() % 2;
		if (premio ==1)
		{
			vida = vida + 3;
			cout << "premio "
				<< vida << endl;
		}
		cout << "vida despues ciclo "
			<< vida << endl;
	}
        
    
    }
