#include <iostream>
using namespace std;

void calcular(int segundos)
{
    int minutos = 0;
    int horas = 0;
    while (segundos - 60 >= 0)
    {
        minutos++;
        if (minutos - 60 >= 0)
        {
            horas++;
            minutos = 0;
        }
        if (horas >= 24)
        {
            horas = 0;
        }
        segundos = segundos - 60;
    }
    cout << horas << ":" << minutos << ":" << segundos;
}

int main(int argc, char const *argv[])
{
    int segundos;
    cout << "Ingrese la cantidad de segundos\n";
    cin >> segundos;
    calcular(segundos);

    return 0;
}
