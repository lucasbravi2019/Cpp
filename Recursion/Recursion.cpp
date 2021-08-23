#include <iostream>
using namespace std;

int sumar(int numero)
{
    if (numero < 3 && numero > 0)
    {
        if (numero == 2)
        {
            return 1;
        }
        if (numero == 1)
        {
            return 0;
        }
    }
    else
    {
        return sumar(numero - 1) + sumar(numero - 2);
    }
}

int main(int argc, char const *argv[])
{
    cout << sumar(5);

    return 0;
}
