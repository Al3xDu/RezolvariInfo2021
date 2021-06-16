#include <iostream>
using namespace std;

int kpn(int a, int b, int k)
{
    int s, i;

    for (; a <= b && k != 0; a++)
    {
        s = 0;
        for (i = 1; i <= a; i++)
        {
            if (a % i == 0)
                s = s + i;
        }
        if (a % 2 == s % 2)
            k--;
    }
    a--;

    if (k == 0)
        return a;
    else
        return -1;
}

int main()
{
    cout << kpn(27, 50, 3) << endl;
    return 0;
}