#include <iostream>
using namespace std;

int fibo(int numero)
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
        return fibo(numero - 1) + fibo(numero - 2);
    }
}

int sumar(int numero)
{
    if (numero == 0)
    {
        return 0;
    }
    else
    {
        return numero + sumar(numero - 1);
    }
}

int restar(int numero)
{
    if (numero == 0)
    {
        return 0;
    }
    else
    {
        return -numero + restar(numero - 1);
    }
}

int multiplicar(int numero)
{
    if (numero == 1)
    {
        return numero;
    }
    else
    {
        return numero * multiplicar(numero - 1);
    }
}

float division(int numero, int dividendo)
{
    if (numero < dividendo)
    {
        return numero;
    }
    else
    {
        return division(numero - dividendo, dividendo);
    }
}

int main(int argc, char const *argv[])
{
    cout << "Fibonacci\n";
    for (int i = 1; i < 10; i++)
    {
        cout << fibo(i) << "\n";
    }

    cout << "Suma\n";
    for (int i = 0; i < 10; i++)
    {
        cout << sumar(i) << "\n";
    }

    cout << "Resta\n";
    for (int i = 0; i < 10; i++)
    {
        cout << restar(i) << "\n";
    }

    cout << "Multiplicacion\n";
    for (int i = 1; i < 10; i++)
    {
        cout << multiplicar(i) << "\n";
    }

    cout << "Division\n";
    for (int i = 1; i < 10; i++)
    {
        cout << division(i, 4) << "\n";
    }

    return 0;
}
