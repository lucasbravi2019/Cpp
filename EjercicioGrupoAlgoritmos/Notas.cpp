#include <iostream>
using namespace std;

double promedioNotas(double nota1, double nota2, double nota3)
{
    return (nota1 + nota2 + nota3) / 3;
}

double promedioParciales(double promedio)
{
    return promedio * .4;
}

double promedioGlobales(double promedio)
{
    return promedio * .6;
}

void notas()
{
    double nota1P;
    double nota2P;
    double nota3P;
    double nota1G;
    double nota2G;
    double nota3G;
    cout << "Ingrese la nota 1 del parcial\n";
    cin >> nota1P;
    cout << "Ingrese la nota 2 del parcial\n";
    cin >> nota2P;
    cout << "Ingrese la nota 3 del parcial\n";
    cin >> nota3P;
    cout << "Ingrese la nota 1 del global\n";
    cin >> nota1G;
    cout << "Ingrese la nota 2 del global\n";
    cin >> nota2G;
    cout << "Ingrese la nota 3 del global\n";
    cin >> nota3G;
    double parciales = promedioNotas(nota1P, nota2P, nota3P);
    double globales = promedioNotas(nota1G, nota2G, nota3G);
    double promedio = promedioParciales(parciales) + promedioGlobales(globales);
    cout << "El promedio es " << promedio << "\n";
    if (promedio >= 60)
    {
        cout << "Promocionado\n";
    }
    if (promedio >= 40 && promedio < 60)
    {
        cout << "Regular\n";
    }
    if (promedio < 40)
    {
        cout << "Libre\n";
    }
}

int main(int argc, char const *argv[])
{
    notas();

    return 0;
}
