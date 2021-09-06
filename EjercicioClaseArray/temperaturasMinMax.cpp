#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float temperaturasMinMax[30][2];
    for (int i = 0; i < 30; i++)
    {
        float temperatura = rand() % 40;
        float temperatura2 = rand() % 40;
        if (temperatura > temperatura2)
        {
            temperaturasMinMax[i][0] = temperatura2;
            temperaturasMinMax[i][1] = temperatura;
        }
        else
        {
            temperaturasMinMax[i][0] = temperatura;
            temperaturasMinMax[i][1] = temperatura2;
        }
    }

    for (int i = 0; i < 30; i++)
    {
        cout << "Dia " << i + 1 << "\n";
        float suma = 0;
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                cout << "Minima: " << temperaturasMinMax[i][j] << "\n";
            }
            if (j == 1)
            {
                cout << "Maxima: " << temperaturasMinMax[i][j] << "\n";
            }
            suma = temperaturasMinMax[i][0] + temperaturasMinMax[i][1];
        }
        cout << "El promedio del dia es: " << suma / 2 << "\n";
    }

    return 0;
}
