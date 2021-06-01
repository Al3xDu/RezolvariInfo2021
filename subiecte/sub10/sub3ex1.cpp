#include <iostream>
using namespace std;

int armonie(int x, int y)
{
    int sum_x = 0, sum_y = 0;

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            sum_x += i;
        }
    }
    for (int i = 1; i <= y; i++)
    {
        if (y % i == 0)
        {
            sum_y += i;
        }
    }

    if ((x + y > sum_x) && (x + y < sum_y))
        return 1;
    return 0;
}

int main()
{
    // cout << armonie(8, 12) << endl;
    cout << armonie(8, 13) << endl;
    return 0;
}