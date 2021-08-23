#include <iostream>
using namespace std;
int main()
{
    string perro = "caniche";
    int edad = 1;
    string color = "marron";
    bool papeles = true;
    bool viveEnMendoza = true;
    bool esElPerro = (perro == "caniche" || perro == "chiwawa") && edad >= 2 && edad <= 4 && color == "marron" && papeles && viveEnMendoza;
    if (esElPerro)
    {
        cout << "Verdadero";
    }
    else
    {
        cout << "Falso";
    }
    return 0;
}
