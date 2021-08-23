#include <iostream>
using namespace std;

float sumar(float numero1, float numero2)
{
    return numero1 + numero2;
}
float restar(float numero1, float numero2)
{
    return numero1 - numero2;
}
float multiplicar(float numero1, float numero2)
{
    return numero1 * numero2;
}
float dividir(float numero1, float numero2)
{
    return numero1 / numero2;
}

int main(int argc, char const *argv[])
{
    float numero1 = 2.3;
    float numero2 = 4.54;
    cout << sumar(numero1, numero2) << "\n";
    cout << restar(numero1, numero2) << "\n";
    cout << multiplicar(numero1, numero2) << "\n";
    cout << dividir(numero1, numero2) << "\n";
    return 0;
}
