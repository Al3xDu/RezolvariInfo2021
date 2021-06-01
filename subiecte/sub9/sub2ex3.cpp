#include <iostream>

using namespace std;

int main()
{
    int a[4][5];
    int i, j;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            a[i][j] = 0;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            a[i][j] = abs(i - j * 2);

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}