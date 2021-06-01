#include <iostream>
#include <string.h>

using namespace std;

int nrfp(int n, int m)
{
    m = 0;
    int v[n + 1];

    for (int i = 0; i <= n; i++)
    {
        v[i] = 0;
    }

    for (int i = 2; i <= n; i++)
    {
        int j = i;
        int d, p;
        while (j > 1)
        {
            d = 2, p = 0;
            while (j % d == 0)
            {
                p++;
                j /= d;
            }
            if (d > 2)
            {
                v[i]++;
            }
            d++;

            if (j > 1 && d * d > j)
            {
                d = j;
            }
        }
    }

    int max_frecv = 0, ind_max_frecv;
    for (int i = 0; i <= n; i++)
    {
        if (v[i] >= max_frecv)
        {
            max_frecv = v[i];
            ind_max_frecv = i;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (v[i] != 0 && i > m)
        {
            if (i == ind_max_frecv)
                m = i;
        }
    }

    return m;
}

int main()
{
    cout << nrfp(100, 0) << endl;
    return 0;
}