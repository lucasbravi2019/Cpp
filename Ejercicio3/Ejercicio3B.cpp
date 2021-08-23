#include <iostream>
using namespace std;
int main()
{
    int edad;
    cout << "Ingrese la edad\n";
    cin >> edad;

    if (edad >= 40)
    {
        cout << "Adulto";
    }
    else
    {
        int antiguedad;
        cout << "Ingrese la antiguedad\n";
        cin >> antiguedad;

        if (edad < 40 && antiguedad >= 3)
        {
            cout << "GENIAL";
        }
        if (edad < 40 && antiguedad < 3)
        {
            cout << "Promesa";
        }
    }
    return 0;
}
