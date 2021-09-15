#include <iostream>
using namespace std;

int calcularCuadrante(double x, double y)
{
    if (x > 0 && y > 0)
    {
        return 1;
    }
    if (x < 0 && y > 0)
    {
        return 2;
    }
    if (x > 0 && y < 0)
    {
        return 3;
    }
    if (x < 0 && y < 0)
    {
        return 4;
    }
    if (x == 0 || y == 0)
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    double x, y;
    cout << "Ingrese el valor de X\n";
    cin >> x;
    cout << "Ingrese el valor de Y\n";
    cin >> y;
    cout << "El cuadrante es: " << calcularCuadrante(x, y);

    return 0;
}
