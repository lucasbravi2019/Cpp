#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    struct
    {
        int legajo;
        string carrera;
        struct
        {
            string nombre;
            string apellido;
        } nombreApellido;
        string materia;
        struct
        {
            int anio;
            string carrera;
            int division;
        } comision;
        struct
        {
            int notas[5];
        } notas;
    } alumno;

    alumno.legajo = 40430;
    alumno.carrera = "Ingenieria en sistemas de informacion";
    alumno.nombreApellido.nombre = "Lucas";
    alumno.nombreApellido.apellido = "Bravi";
    alumno.materia = "Algoritmos y estructuras de datos";
    alumno.comision.anio = 1;
    alumno.comision.carrera = "k";
    alumno.comision.division = 1;
    alumno.notas.notas[0] = 7;
    alumno.notas.notas[1] = 6;
    alumno.notas.notas[2] = 8;
    alumno.notas.notas[3] = 4;
    int nota1 = alumno.notas.notas[0];
    int nota2 = alumno.notas.notas[1];
    int nota3 = alumno.notas.notas[2];
    int nota4 = alumno.notas.notas[3];
    alumno.notas.notas[4] = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "Legajo: " << alumno.legajo << "\n";
    cout << "Carrera: " << alumno.carrera << "\n";
    cout << "Nombre: " << alumno.nombreApellido.nombre << "\n";
    cout << "Apellido: " << alumno.nombreApellido.apellido << "\n";
    cout << "Materia: " << alumno.materia << "\n";
    cout << "Comision: " << alumno.comision.anio << alumno.comision.carrera << alumno.comision.division << "\n";
    cout << "Nota 1: " << alumno.notas.notas[0] << "\n";
    cout << "Nota 2: " << alumno.notas.notas[1] << "\n";
    cout << "Nota 3: " << alumno.notas.notas[2] << "\n";
    cout << "Nota 4: " << alumno.notas.notas[3] << "\n";
    cout << "Promedio: " << alumno.notas.notas[4] << "\n";

    // struct
    // {
    //     int legajo;
    //     string carrera;
    //     struct
    //     {
    //         string nombre;
    //         string apellido;
    //     } nombreApellido;
    //     string materia;
    //     struct
    //     {
    //         int anio;
    //         string carrera;
    //         int division;
    //     } comision;
    //     struct
    //     {
    //         int nota1;
    //         int nota2;
    //         int nota3;
    //         int nota4;
    //         int promedio;
    //     } notas;
    // } alumno[3];

    // for (int i = 0; i < 3; i++)
    // {

    //     alumno[i].legajo = 40430;
    //     alumno[i].carrera = "Ingenieria en sistemas de informacion";
    //     alumno[i].nombreApellido.nombre = "Lucas";
    //     alumno[i].nombreApellido.apellido = "Bravi";
    //     alumno[i].materia = "Algoritmos y estructuras de datos";
    //     alumno[i].comision.anio = 1;
    //     alumno[i].comision.carrera = "k";
    //     alumno[i].comision.division = 1;
    //     alumno[i].notas.nota1 = 7;
    //     alumno[i].notas.nota2 = 6;
    //     alumno[i].notas.nota3 = 8;
    //     alumno[i].notas.nota4 = 4;
    //     int nota1 = alumno[i].notas.nota1;
    //     int nota2 = alumno[i].notas.nota2;
    //     int nota3 = alumno[i].notas.nota3;
    //     int nota4 = alumno[i].notas.nota4;
    //     alumno[i].notas.promedio = (nota1 + nota2 + nota3 + nota4) / 4;
    //     cout << "Legajo: " << alumno[i].legajo << "\n";
    //     cout << "Carrera: " << alumno[i].carrera << "\n";
    //     cout << "Nombre: " << alumno[i].nombreApellido.nombre << "\n";
    //     cout << "Apellido: " << alumno[i].nombreApellido.apellido << "\n";
    //     cout << "Materia: " << alumno[i].materia << "\n";
    //     cout << "Comision: " << alumno[i].comision.anio << alumno.comision.carrera << alumno.comision.division << "\n";
    //     cout << "Nota 1: " << alumno[i].notas.nota1 << "\n";
    //     cout << "Nota 2: " << alumno[i].notas.nota2 << "\n";
    //     cout << "Nota 3: " << alumno[i].notas.nota3 << "\n";
    //     cout << "Nota 4: " << alumno[i].notas.nota4 << "\n";
    //     cout << "Promedio: " << alumno[i].notas.promedio << "\n";
    // }

    return 0;
}
