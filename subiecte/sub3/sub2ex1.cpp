#include <iostream>
using namespace std;
int main()
{
    int c, n, x = 0, m = 0, p = 1, cn;
    cin >> n;
    while (x < 10)
    {
        cn = n;
        while (cn)
        {
            c = cn % 10;
            cn /= 10;
            if (c == x)
            {
                m = c * p + m;
                p *= 10;
            }
        }
        x += 2;
    }
    cout << m << endl;
    return 0;
}