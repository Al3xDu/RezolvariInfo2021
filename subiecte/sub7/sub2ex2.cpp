#include <iostream>
using namespace std;

struct data
{
    int zi, luna, an;
} dataEveniment;
struct elev
{
    char nume[30];
    data dataNasterii;
} e;

int main()
{
    dataEveniment.an = 2003;
    dataEveniment.luna = 100;
    dataEveniment.zi = 100;

    e.dataNasterii.an = 2000;
    e.dataNasterii.luna = 100;
    e.dataNasterii.zi = 100;

    if (e.dataNasterii.an >= dataEveniment.an)
    {
        if (e.dataNasterii.luna >= dataEveniment.luna)
        {
            if (e.dataNasterii.zi >= dataEveniment.zi)
            {
                cout << "ulterior";
            }
            else
            {
                cout << "nu";
            }
        }
        else
        {
            cout << "nu";
        }
    }
    else
    {
        cout << "nu";
    }
    return 0;
}