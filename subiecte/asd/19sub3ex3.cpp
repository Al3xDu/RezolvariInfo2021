#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");

    int frecv[10000];

    for (int i = 0; i < 10000; i++)
    {
        frecv[i] = 0;
    }

    int x, ok = 0;

    while (f >> x)
    {
        if (x % 2 == 0)
        {
            ok = 1;
            frecv[x]++;
        }
    }

    for (int i = 0; i < 10000; i++)
    {
        if (frecv[i] > 0)
        {
            cout << i << " ";
        }
    }

    if (ok == 0)
        cout << "nu exista";

    cout << endl;
    f.close();
    return 0;
}