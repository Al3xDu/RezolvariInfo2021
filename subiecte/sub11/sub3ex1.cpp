#include <iostream>

using namespace std;

void frate(int x, int &y)
{
    int ok = 1, v[11], index = 0;

    while (x)
    {
        v[index] = x % 10 + 1;
        x /= 10;
        if (v[index] >= 9)
            ok = 0;
        index++;
    }

    int new_y = 0;
    if (ok == 0)
        y = -1;
    else
    {
        for (int i = 0; i < index; i++)
        {
            new_y = new_y * 10 + v[i];
        }
        y = 0;
        while (new_y)
        {
            y = y * 10 + new_y % 10;
            new_y /= 10;
        }
    }
}

int main()
{
    int y;
    frate(1027, y);

    cout << y << endl;
    return 0;
}