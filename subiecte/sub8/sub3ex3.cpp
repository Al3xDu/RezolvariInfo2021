#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");

    int x;
    int nr1, nr2;
    int k = 0;

    while (f >> x)
    {
        if (x % 2 == 1)
        {
            k++;
            nr2 = x;
            break;
        }
    }

    while (f >> x)
    {
        if (x % 2 == 1)
        {
            k++;
            nr1 = nr2;
            nr2 = x;
        }
    }

    if (k < 2)
    {
        cout << "nu exista";
    }

    cout << nr1 << " " << nr2;

    f.close();
    return 0;
}