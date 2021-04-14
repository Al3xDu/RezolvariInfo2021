#include <iostream>

using namespace std;

int factori(int n, int m)
{
    int k = 0, i = 2, p1 = 0, p2 = 0;

    if (n == 1 || m == 1)
        return k;

    while (n > 1 && m > 1)
    {
        int prim = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0)
                prim++;

        if (prim == 2)
        {
            while (n % i == 0)
            {
                p1++;
                n = n / i;
            }
            while (m % i == 0)
            {
                p2++;
                m = m / i;
            }

            if (p1 == p2 && p1 != 0)
            {
                k++;
            }
        }
        p1 = 0;
        p2 = 0;
        i++;
    }

    return k;
}

int main()
{
    //citire
    int n = 16;
    int m = 16;

    cout << factori(n, m) << endl;
    return 0;
}