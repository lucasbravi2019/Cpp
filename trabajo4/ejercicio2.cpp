#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    struct
    {
        int dia;
        int mes;
        int anio;
    } fecha;

    struct
    {
        int dia;
        int mes;
        int anio;
    } fechas[2];

    int anio;
    int mes;
    int dia;
    
    for (int i = 0; i < 2; i++)
    {
        cout << "Ingrese el anio\n";
        cin >> anio;
        while (anio > 2021)
        {
            cout << "Indico un anio invalido. Especifique un anio hasta 2021\n";
            cin >> anio;
        }
        cout << "Ingrese el mes\n";
        cin >> mes;
        while (mes > 12 || mes < 1)
        {
            cout << "Indico un mes invalido. Especifique un mes entre 1 y 12\n";
            cin >> mes;
        }
        cout << "Ingrese el dia\n";
        cin >> dia;
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            while (dia < 0 || dia > 31)
            {
                cout << "Indico un dia invalido. Indique entre 1 y 31\n";
                cin >> dia;
            }
        }
        else
        {
            if (mes == 2)
            {
                while (dia < 0 || dia > 28)
                {
                    cout << "Indico un dia invalido. Especifique entre 1 y 28\n";
                    cin >> dia;
                }
            }
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
            {
                while (dia < 0 || dia > 30)
                {
                    cout << "Indico un dia invalido. Especifique entre 1 y 30\n";
                    cin >> dia;
                }
            }
        }

        fecha.dia = dia;
        fecha.mes = mes;
        fecha.anio = anio;

        fechas[i].dia = fecha.dia;
        fechas[i].mes = fecha.mes;
        fechas[i].anio = fecha.anio;
    }

    if (fechas[0].anio == fechas[1].anio)
    {
        if (fechas[0].mes == fechas[1].mes)
        {
            if (fechas[0].dia > fechas[1].dia)
            {
                cout << "La fecha 1 es mayor\n";
            }
            else
            {
                cout << "La fecha 2 es mayor\n";
            }
        }
        if (fechas[0].mes > fechas[1].mes)
        {
            cout << "La fecha 1 es mayor\n";
        }
        if (fechas[0].mes < fechas[1].mes)
        {
            cout << "La fecha 2 es mayor\n";
        }
    }
    else
    {
        if (fechas[0].anio > fechas[1].anio)
        {
            cout << "La fecha 1 es mayor\n";
        }
        if (fechas[0].anio < fechas[1].anio)
        {
            cout << "La fecha 2 es mayor\n";
        }
    }

    return 0;
}
