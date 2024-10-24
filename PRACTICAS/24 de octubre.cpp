#include <iostream>;
#include <iomanip>

using namespace std;

int main()
{
    double peso, estatura;
    double mc;
    cout << "Ingresa tu peso: ";
    cin >> peso;
    cout << "Ingresa tu estura: ";
    cin >> estatura;
    cout << endl;

    cout << fixed; // par precision de datos
    cout << setprecision(2);
    mc = peso / (estatura * estatura);
    cout << "MC: " << mc << endl;
    if (mc < 18.5)
    {
        cout << "Tu peso es bajo" << endl;
    }
    if (mc >= 18.5 and mc < 25)
    {
        cout << "Tu peso es normal" << endl;
    }

}
