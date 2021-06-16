// Facut 99% singur

#include <iostream>

using namespace std;

int suma(int a, int b)
{
    int i, j;
    int S = 0;

    for (i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            S += i;
        }
    }

    return S;
}

int main()
{
    cout << suma(20, 12) << endl;
    return 0;
}