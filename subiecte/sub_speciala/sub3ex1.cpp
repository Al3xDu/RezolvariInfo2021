#include <iostream>
using namespace std;

void imog(int x, int y, int &rez)
{
    int x2 = 0, y2 = 0;

    while (x != 0)
    {
        if (x % 10 % 2 == 1)
            x2 = x2 * 10 + x % 10;
        x /= 10;
    }

    while (x2)
    {
        x = x * 10 + x2 % 10;
        x2 /= 10;
    }

    while (y != 0)
    {
        if (y % 10 % 2 == 1)
            y2 = y2 * 10 + y % 10;
        y /= 10;
    }
    y = y2;

    rez = 0;

    if (y == x)
        rez = 1;
}

int main()
{
    int rez;
    imog(523, 84356, rez);
    cout << rez << endl;
    return 0;
}