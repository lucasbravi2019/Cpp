#include <iostream>
using namespace std;
void Ganador(string Pilotos[15], int Tiempos[15][3])
{
    string ganador;
    int tiempo = 0;
    for (int i = 0; i <= 14; i++)
    {
        if (tiempo == 0)
        {
            tiempo == Tiempos[i][2];
        }
        if (tiempo > Tiempos[i][2])
        {
            ganador = Pilotos[i];
        }
    }
    cout << "El piloto ganador es : " << ganador << "\n";
}
int main(int argc, char const *argv[])
{

    return 0;
}
