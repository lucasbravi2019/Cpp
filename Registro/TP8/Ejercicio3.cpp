#include <iostream>
#include <string>
using namespace std;

struct
{
    struct
    {
        string apellido_nombre;
        int edad;
        string obra_social;
    } paciente;
    string piezas_dentales[20];
    struct
    {
        int mes;
        int anio;
    } ultima_visita;

} consultorio[5];

void cargarDatos()
{
    for (int i = 0; i < 5; i++)
    {
        consultorio[i].paciente.apellido_nombre = "Nombre " + to_string(i + 1);
        consultorio[i].paciente.edad = 20 + i;
        consultorio[i].paciente.obra_social = "Obra social " + to_string(i + 1);
        consultorio[i].ultima_visita.anio = 2017 + i;
        consultorio[i].ultima_visita.mes = i * 2;
        for (int j = 0; j < 20; j++)
        {
            int aleatorio = (rand() % 5) + 1;
            if (aleatorio == 1)
            {
                consultorio[i].piezas_dentales[j] = "S";
            }
            if (aleatorio == 2)
            {
                consultorio[i].piezas_dentales[j] = "A";
            }
            if (aleatorio == 3)
            {
                consultorio[i].piezas_dentales[j] = "I";
            }
            if (aleatorio == 4)
            {
                consultorio[i].piezas_dentales[j] = "C";
            }
            if (aleatorio == 5)
            {
                consultorio[i].piezas_dentales[j] = "U";
            }
        }
    }
}

void mostrarDatos()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Nombre y apellido: " << consultorio[i].paciente.apellido_nombre << "\n";
        cout << "Edad: " << consultorio[i].paciente.edad << "\n";
        cout << "Obra social: " << consultorio[i].paciente.obra_social << "\n";
        cout << "Anio ultima visita: " << consultorio[i].ultima_visita.anio << "\n";
        cout << "Mes ultima visita: " << consultorio[i].ultima_visita.mes << "\n";
        for (int j = 0; j < 20; j++)
        {
            cout << "Pieza dental " << to_string(j + 1) << "\n";
            cout << consultorio[i].piezas_dentales[j] << "\n";
        }
    }
}

void consulta(int anio)
{
    for (int i = 0; i < 5; i++)
    {
        if (consultorio[i].ultima_visita.anio == anio)
        {
            for (int j = 0; j < 20; j++)
            {
                if (consultorio[i].piezas_dentales[j] == "I")
                {
                    cout << "El paciente " << consultorio[i].paciente.apellido_nombre << " debe realizar una consulta \n";
                    break;
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{

    cargarDatos();
    mostrarDatos();
    int anio;
    cout << "Introduzca anio \n";
    cin >> anio;
    consulta(anio);

    return 0;
}
