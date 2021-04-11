#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("bac.in");
    unsigned int sum = 0;
    unsigned int nr;
    int elem, v[11];

    for (int i = 0; i < 10; i++)
    {
        v[i] = 0;
    }

    while (f >> nr)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i == nr)
            {
                v[i]++;
            }
        }
        sum = sum + nr * nr;
    }

    for (int i = 0; i < 10; i++)
    {
        if (v[i] != 0)
        {
            sum += 10;
        }
        cout << "v[" << i << "]=" << v[i] << endl;
    }

    cout << sum;
    f.close();
    return 0;
}