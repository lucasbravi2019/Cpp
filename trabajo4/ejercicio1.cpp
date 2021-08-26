#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    double minutos;
    double precio;
    const double precio1 = 32.45;
    const double precio2 = 31.75;
    const double precio3 = 31.15;
    const double fijo1 = 272.50;
    const double fijo2 = 238.50;

    cout << "Ingrese la cantidad de minutos consumidos\n";
    cin >> minutos;

    while (minutos < 0)
    {
        cout << "Ingreso una cantidad de minutos invalida. Por favor ingrese una cantidad positiva de minutos";
        cin >> minutos;
    }

    if (minutos <= 300)
    {
        precio = minutos * precio1;
    }

    if (minutos > 300 && minutos < 1200)
    {
        precio = minutos * precio2;
    }

    if (minutos >= 1200)
    {
        precio = minutos * precio3;
    }

    if (minutos <= 880)
    {
        precio += 272.50;
    }
    else
    {
        precio += 238.50;
    }

    cout << "El costo de su factura es de: " << ::setprecision(9) << precio;

    return 0;
}
