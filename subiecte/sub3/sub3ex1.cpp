#include <iostream>
#include <math.h>
using namespace std;

int suma(int n)
{
    int s, d, c;
    s = n + 1;
    if (n > 0)
    {
        for (c = 2; c < n; c++)
        {
            if (n % c == 0)
                for (d = 2; d <= sqrt(c); d++)
                    if (c % d == 0)
                        s = s + c;
        }
    }
    return s;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << suma(n);
    return 0;
}