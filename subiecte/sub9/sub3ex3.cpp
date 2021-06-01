#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("numere.txt");

    long long numar_final = 0;

    int nr;

    int v[10];

    for (int i = 0; i < 10; i++)
        v[i] = 0;

    while (f >> nr)
    {
        while (nr)
        {
            v[nr % 10]++;
            nr /= 10;
        }
    }

    for (int i = 9; i >= 0; i--)
        for (int j = v[i]; j > 0; j--)
            numar_final = numar_final * 10 + i;

    cout << numar_final << endl;
    f.close();
    return 0;
}