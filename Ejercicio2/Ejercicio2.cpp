#include <iostream>
using namespace std;
int main()
{
    string cargo = "enfermera";
    string sexo = "hombre";
    string universidad = "UNC";
    bool recibido = true;
    string provincia = "mendoza";
    int promedio = 9;
    int experiencia = 3;
    int edad = 39;
    bool encontrado = (cargo == "medico" && sexo == "hombre" && universidad == "UNC" && recibido && (provincia == "mendoza" || provincia == "san juan" || provincia == "san luis") && promedio >= 8 && experiencia > 2) || (cargo == "enfermera" && edad <= 40 && recibido);

    cout << "Encontrado: " << encontrado;

    return 0;
}
