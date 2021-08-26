#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int numeros[] = {0, 1, 2, 3, 4, 5, 6, 7};
    for (int i : numeros)
    {
        cout << i;
    }
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        cout << i;
    }
    return 0;
}
