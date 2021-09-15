#include <iostream>
#include <string.h>
#include <string>
using namespace std;
struct datos
{
    string nombre;
    string apellido;
    int edad;
    struct
    {
        string calle;
        int nro;
        string localidad;
    } domicilio;
};

int main(int argc, char const *argv[])
{
    datos personas[10];

    string nombre = "nombre";
    for (int i = 0; i < 10; i++)
    {
        personas[i].nombre = "Nombre";
        personas[i].apellido = "Apellido";
        personas[i].edad = 15;
        personas[i].domicilio.calle = "San Cristobal";
        personas[i].domicilio.nro = 123;
        personas[i].domicilio.localidad = "Maipu";
    }
    if (stricmp(personas[0].nombre.c_str(), nombre.c_str()) == 0)
    {
        cout << "Si";
    }

    return 0;
}
