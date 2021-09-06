// 1	Vector Temperaturas del mes (30 días)
// 	Leer las temperaturas
// 	Calcular el promedio del mes

// 2	Matriz  temperaturas del mes
// 	Mín y máx de cada día
// 	Leer las temperaturas
// 	Calcular y guardar el promedio de la temperatura diaria

// 3	Matriz tridimensional: Temperaturas de todos los meses del año
// 	Mín y máx de cada día
// 	Leer las temperaturas
// 	Calcular la temperatura promedio de cada mes
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float temperaturas[30];
    for (int i = 0; i < *(&temperaturas + 1) - temperaturas; i++)
    {
        float temperatura = rand() % 40;
        cout << "La temperatura del dia es: " << temperatura << " C"
             << "\n";
        temperaturas[i] = temperatura;
    }

    float suma = 0;
    int contador = 0;
    for (int i = 0; i < *(&temperaturas + 1) - temperaturas; i++)
    {
        suma += temperaturas[i];
        contador += 1;
    }

    cout << "El promedio de temperatura del mes es de: " << (suma / contador) << " C\n";

    return 0;
}
