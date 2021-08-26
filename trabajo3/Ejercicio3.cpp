#include <iostream>
#include <string>
using namespace std;
int main()
{
    double base;
    double altura;

    cout << "Ingrese la base del rectangulo\n";
    cin >> base;
    cout << "Ingrese la altura del rectangulo\n";
    cin >> altura;

    double perimetro = base * 2 + altura * 2;
    double superficie = base * altura;

    cout << "El perimetro es: " << perimetro << "\n";
    cout << "La superficie es: " << superficie << "\n";
}
