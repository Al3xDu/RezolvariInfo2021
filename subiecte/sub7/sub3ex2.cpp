#include <iostream>

using namespace std;

int main()
{

    int x = 1359;

    int size_of_x = 0;
    int reversed_x = 0;

    while (x)
    {
        reversed_x = reversed_x * 10 + x % 10;
        x /= 10;
        size_of_x++;
    }

    int a[size_of_x][size_of_x];

    int i, j;

    for (j = 0; j < size_of_x; j++)
    {
        for (i = 0; i < size_of_x; i++)
        {
            a[i][j] = reversed_x % 10;
        }
        reversed_x /= 10;
    }

    for (i = 0; i < size_of_x; i++)
    {
        for (j = 0; j < size_of_x; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}