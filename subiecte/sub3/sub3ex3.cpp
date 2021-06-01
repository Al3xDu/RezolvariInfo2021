#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("bac.in");

    int v[100000];
    int p[100000];

    for (int i = 0; i < 100000; i++)
        v[i] = 0;

    int pozitie = 1;
    int n;

    while (f >> n)
    {
        v[n / 10 % 10]++;
        p[n / 10 % 10] = pozitie;
        pozitie++;
    }

    int m = 2;
    for (int i = 0; i < 100000; i++)
    {
        if (v[i] > m)
            m = v[i];
    }
    for (int i = 0; i < 100000; i++)
    {
        if (v[i] == m)
        {
            cout << i<<endl;
            cout << p[i] << " ";
        }
    }

    cout << endl;
    f.close();
    return 0;
}