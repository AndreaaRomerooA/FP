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
}
