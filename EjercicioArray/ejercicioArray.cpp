#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int perros[] = {0, 1, 2, 3, 4, 5, 6, 7};
    for (int i : perros)
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
