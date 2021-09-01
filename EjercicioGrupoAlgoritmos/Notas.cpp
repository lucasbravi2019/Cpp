#include <iostream>
#include <string>
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

double notasParcial(double nota, int numero)
{
    cout << "Ingrese la nota " << numero << " del parcial\n";
    cin >> nota;
    return nota;
}

double notasGlobal(double nota, int numero)
{
    cout << "Ingrese la nota " << numero << " del global\n";
    cin >> nota;
    return nota;
}

string promediar(double promedio)
{
    if (promedio >= 60)
    {
        return "Promocionado\n";
    }
    if (promedio >= 40 && promedio < 60)
    {
        return "Regular\n";
    }
    if (promedio < 40)
    {
        return "Libre\n";
    }
}

void notas()
{
    double nota1P = notasParcial(nota1P, 1);
    double nota2P = notasParcial(nota2P, 2);
    double nota3P = notasParcial(nota3P, 3);
    double nota1G = notasGlobal(nota1G, 1);
    double nota2G = notasGlobal(nota2G, 2);
    double nota3G = notasGlobal(nota3G, 3);
    double parciales = promedioNotas(nota1P, nota2P, nota3P);
    double globales = promedioNotas(nota1G, nota2G, nota3G);
    double promedio = promedioParciales(parciales) + promedioGlobales(globales);
    cout << "El promedio es " << promedio << "\n";
    cout << promediar(promedio);
}

int main(int argc, char const *argv[])
{
    notas();

    return 0;
}
