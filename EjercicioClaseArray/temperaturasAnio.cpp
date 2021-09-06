#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float temperaturasMes[12][30][2];
    float temperaturasMinMax[30][2];
    for (int i = 0; i < 12; i++)
    {
        float suma = 0;
        for (int j = 0; j < 30; j++)
        {
            float temperatura = rand() % 40;
            float temperatura2 = rand() % 40;
            if (temperatura > temperatura2)
            {
                temperaturasMinMax[j][0] = temperatura2;
                temperaturasMinMax[j][1] = temperatura;
                temperaturasMes[i][j][0] = temperaturasMinMax[j][0];
                temperaturasMes[i][j][1] = temperaturasMinMax[j][1];
            }
            else
            {
                temperaturasMinMax[j][0] = temperatura;
                temperaturasMinMax[j][1] = temperatura2;
                temperaturasMes[i][j][0] = temperaturasMinMax[i][0];
                temperaturasMes[i][j][1] = temperaturasMinMax[i][1];
            }
            suma = suma + (temperaturasMinMax[j][0] + temperaturasMinMax[j][1]) / 2;
        }
        cout << "El promedio del mes es de: " << suma / 30 << "\n";
    }

    // for (int i = 0; i < 12; i++)
    // {
    //     for (int j = 0; j < 30; j++)
    //     {
    //         cout << "Dia " << j + 1 << "\n";
    //         for (int k = 0; k < 2; k++)
    //         {
    //             if (k == 0)
    //             {

    //                 cout << "Minima: " << temperaturasMes[i][j][k] << "\n";
    //             }
    //             if (k == 1)
    //             {
    //                 cout << "Maxima: " << temperaturasMes[i][j][k] << "\n";
    //             }
    //         }
    //     }
    // }

    return 0;
}
