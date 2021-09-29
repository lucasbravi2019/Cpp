#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{

    struct
    {
        int numero_unidad;
        string ciudad_origen;
        string ciudad_destino;
        struct
        {
            int hora;
            int min;
        } hora_salida;
        struct
        {
            int hora;
            int min;
        } hora_llegada;
        struct
        {
            string apellido_nombre;
            int dni;
            int edad;
        } chofer;
        char estado_asientos[19];
    } omnibus[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Numero unidad: \n";
        cin >> omnibus[i].numero_unidad;
        cout << "Ciudad origen: \n";
        cin >> omnibus[i].ciudad_origen;
        cout << "Ciudad destino: \n";
        cin >> omnibus[i].ciudad_destino;
        cout << "Hora salida: \n";
        cin >> omnibus[i].hora_salida.hora;
        cout << "Minutos: \n";
        cin >> omnibus[i].hora_salida.min;
        cout << "Hora llegada: \n";
        cin >> omnibus[i].hora_llegada.hora;
        cout << "Minutos: \n";
        cin >> omnibus[i].hora_llegada.min;
        cout << "Apellido y nombre chofer: \n";
        cin >> omnibus[i].chofer.apellido_nombre;
        cout << "Dni Chofer: \n";
        cin >> omnibus[i].chofer.dni;
        cout << "Edad chofer: \n";
        cin >> omnibus[i].chofer.edad;
        for (int j = 0; j < 19; j++)
        {
            cout << "Asiento " + to_string(j + 1) << "\n";
            cin >> omnibus[i].estado_asientos[j];
        }
        cout << "Numero unidad: " << omnibus[i].numero_unidad << "\n";
        cout << "Ciudad origen: " << omnibus[i].ciudad_origen << "\n";
        cout << "Ciudad destino: " << omnibus[i].ciudad_destino << "\n";
        cout << "Hora salida: " << omnibus[i].hora_salida.hora << "\n";
        cout << "Minutos: " << omnibus[i].hora_salida.min << "\n";
        cout << "Hora llegada: " << omnibus[i].hora_llegada.hora << "\n";
        cout << "Minutos: " << omnibus[i].hora_llegada.min << "\n";
        for (int j = 0; j < 19; j++)
        {
            cout << "Asiento " << j + 1 << ": " << omnibus[i].estado_asientos[j] << "\n";
        }
        cout << "Apellido y nombre chofer: " << omnibus[i].chofer.apellido_nombre << "\n";
        cout << "Dni Chofer: " << omnibus[i].chofer.dni << "\n";
        cout << "Edad chofer: " << omnibus[i].chofer.edad << "\n";
    }

    return 0;
}
