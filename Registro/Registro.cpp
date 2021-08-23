#include <iostream>
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

    string nombre = "lucas";
    for (int i = 0; i < 10; i++)
    {
        personas[i].nombre = "LUCAS";
    }
    if (stricmp(personas[0].nombre.c_str(), nombre.c_str()) == 0)
    {
        cout << "Si";
    }

    return 0;
}
