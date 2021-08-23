#include <iostream>
using namespace std;
int main()
{
    double largo;
    double ancho;

    cout << "Ingrese el largo del lote\n";
    cin >> largo;
    cout << "Ingrese el ancho del lote\n";
    cin >> ancho;

    double superficie = largo * ancho;

    cout << "La superficie del lote es de: " << superficie << " m2\n";
    if (superficie > 300)
    {
        cout << "El lote es grande\n";
    }

    return 0;
}
