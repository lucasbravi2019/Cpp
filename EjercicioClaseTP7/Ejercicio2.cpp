#include <iostream>
#include <string>

using namespace std;

int verificar(string piloto, string Pilotos[15])
{
    bool existe = false;
    for (int i = 0; i < 15; i++)
    {
        if (piloto == Pilotos[i])
        {
            existe = true;
        }
    }
    if (existe)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void volverIngresar(string *piloto, int Ind)
{
    cout << "Ingreso un nombre existente, por favor ingrese otro\n";
    cout << "Ingrese nombre del Piloto n: " << Ind + 1 << ": ";
    cin >> *piloto;
}

void CargarPilotos(string Pilotos[15])
{
    int Ind;
    // Utilizo una estructura repetitiva para recorrer la variable dimensionada
    for (Ind = 0; Ind <= 14; Ind++)
    {
        string piloto, *pil;
        bool existe = false;
        do
        {
            cout << "Ingrese nombre del Piloto n: " << Ind + 1 << ": ";
            cin >> piloto;
            pil = &piloto;
            if (verificar(*pil, Pilotos) == 0)
            {
                Pilotos[Ind] = piloto;
            }
            else
            {
                while (verificar(*pil, Pilotos) == 1)
                {
                    volverIngresar(pil, Ind);
                }
                Pilotos[Ind] = piloto;
            }
        } while (Pilotos[Ind] == "");
    }
}

int main(int argc, char const *argv[])
{
    string pilotos[15];
    CargarPilotos(pilotos);

    return 0;
}
