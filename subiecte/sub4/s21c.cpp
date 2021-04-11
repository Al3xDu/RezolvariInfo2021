#include <iostream>
using namespace std;

int main()
{
    unsigned int n, k, p;
    int c;
    p = 1;

    cin >> n >> k;

    while (n > 0)
    {
        c = n % 10;
        if (k > 0)
        {
            if (c % 2 == 1)
            {
                p *= c;
            }
        }
        n /= 10;
        k--;
    }
    cout << p;
    return 0;
}