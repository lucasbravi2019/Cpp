#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;
struct datos
{
    string nombre;
    string apellido;
    int edad;
};

int main(int argc, char const *argv[])
{
    datos personas[10];

    string nombre = "Lucas";
    for (int i = 0; i < 10; i++)
    {
        personas[i].nombre = "LUCAS";
        personas[i].apellido = "Bravi";
        personas[i].edad = 27;
    }
    if (stricmp(personas[0].nombre.c_str(), nombre.c_str()) == 0)
    {
        cout << "Si";
    }

    return 0;
}
