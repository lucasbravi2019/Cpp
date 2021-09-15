#include <iostream>
#include <string>
using namespace std;

void mostrarDatos(string series[50], string temporadas[3][10][15][2])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "\t" << series[i] << "\n";
        for (int j = 0; j < 10; j++)
        {
            cout << "Temporada: " << (j + 1) << "\n";
            for (int k = 0; k < 15; k++)
            {
                cout << "Capitulo: " << (k + 1) << "\n";
                for (int l = 0; l < 2; l++)
                {
                    if (l == 0)
                    {
                        cout << "Reproducciones: " << temporadas[i][j][k][l] << "\n";
                    }
                    if (l == 1)
                    {
                        cout << "Valoracion: " << temporadas[i][j][k][l] << "\n";
                    }
                }
            }
        }
    }
}

void cargarDatos(string *temporadasArray)
{
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 15; k++)
            {
                *temporadasArray = to_string(rand() % 300);
                temporadasArray++;
                int valoracion = 0;
                do
                {
                    cout << "Ingrese la valoracion\n";
                    cout << "1. Excelente\n";
                    cout << "2. Bueno\n";
                    cout << "3. Regular\n";
                    cout << "4. Malo\n";
                    cin >> valoracion;
                } while (valoracion < 1 && valoracion > 4);
                if (valoracion == 1)
                {
                    *temporadasArray = "Excelente";
                }
                else if (valoracion == 2)
                {
                    *temporadasArray = "Bueno";
                }
                else if (valoracion == 3)
                {
                    *temporadasArray = "Regular";
                }
                else if (valoracion == 4)
                {
                    *temporadasArray = "Malo";
                }
                temporadasArray++;
            }
        }
    }
}

void cargarSeries(string *seriesArray)
{

    for (int i = 0; i < 50; i++)
    {
        cout << "Ingrese el nombre de la serie\n";
        string nombre;
        cin >> nombre;
        *seriesArray = nombre;
        seriesArray++;
    }
}

int main(int argc, char const *argv[])
{
    string temp[50][10][15][2];
    string *temporadas;
    temporadas = &temp[0][0][0][0];
    string series[50], *seriesArray;
    seriesArray = &series[0];
    cargarSeries(seriesArray);
    cargarDatos(temporadas);
    mostrarDatos(series, temp);
    return 0;
}
