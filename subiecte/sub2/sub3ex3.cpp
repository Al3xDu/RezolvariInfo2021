#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("bac.in");

    int counter = 0;
    int pozitie_finala = 0;

    int nr;

    while (f >> nr)
    {
        ++counter;
        if (nr > 0)
        {
            pozitie_finala = counter;
            break;
        }
    }

    int pozitie_initiala = pozitie_finala;

    while (f >> nr)
    {
        ++counter;
        if (nr > 0)
        {
            pozitie_finala = counter;
        }
    }

    if (counter - pozitie_initiala > counter - pozitie_finala)
    {
        cout << counter - pozitie_initiala + 1 << endl;
    }
    else
    {
        cout << counter - pozitie_finala + 1 << endl;
    }

    f.close();
    return 0;
}