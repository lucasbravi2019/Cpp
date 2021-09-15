#include <iostream>
using namespace std;
void Time(int segundos)
{
    int horas = 0;
    int minutos = 0;

    while (segundos - 60 >= 0)
    {
        minutos++;
        if (minutos - 60 >= 0)
        {
            horas++;
            minutos = 0;
        }
        if (horas >= 24)
        {
            horas = 0;
        }
        segundos = segundos - 60;
    }
    cout << "\nHORAS:" << horas << " MINUTOS:" << minutos << " SEGUNDOS:" << segundos << endl;
}
int main(int argc, char *argv[])
{
    int segundos;
    do
    {
        cout << "\nIngrese un valor entre 0 y 86400:";
        cin >> segundos;
    } while (segundos < 0 && segundos > 86400);
    Time(segundos);
}