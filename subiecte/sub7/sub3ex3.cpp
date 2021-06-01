#include <iostream>
#include <fstream>
using namespace std;
#define SIZE 100
int main()
{
    int frecv[SIZE];

    int i;

    for (i = 0; i < SIZE; i++)
    {
        frecv[i] = 0;
    }

    ifstream f("bac.txt");
    int ok = 0;
    int nr;
    while (f >> nr)
    {
        if (nr % 2 == 0)
        {
            frecv[nr]++;
            ok = 1;
        }
    }

    if (ok == 0)
        cout << "nu exista";

    for (i = 0; i < SIZE; i++)
    {

        if (frecv[i] != 0)
        {
            // cout << i << ":" << frecv[i];
            for (int j = 0; j < frecv[i]; j++)
                cout << i << " ";
        }
    }
    cout << endl;

    f.close();
    return 0;
}