#include <iostream>
using namespace std;

void numar(int n, int c, int &m)
{
    int k;
    m = 0;
    k = 0;
    while (n)
    {
        if (n % 10 != c)
        {
            k = 1;
            m = m * 10 + n % 10;
            n = n / 10;
        }
        else
        {
            n = n / 10;
        }
    }
    int reversedNr = 0, rest;
    while (m)
    {
        rest = m % 10;
        reversedNr = reversedNr * 10 + rest;
        m = m / 10;
    }
    m = reversedNr;
    if (k == 0)
        m = -1;
}

int numar2(int n, int c, int m)
{
    int k = 0;
    m = 0;
    while (n != 0)
    {
        if (n % 10 != c)
        {

            m = m * 10 + n % 10;
            k = 1;
            n=n/10;
        }
        else
            n = n / 10;
    }
    if (k == 0)
        m = -1;
    return m;
}

int main()
{
    int n = 50752;
    int c = 5;
    int m;

    // numar(n, c, m);
    // cout << m << endl;

    cout << numar2(n, c, m)
         << endl;
    return 0;
}