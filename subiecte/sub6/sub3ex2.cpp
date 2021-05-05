#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i, j;
    int a[21][21], b[21][21];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = abs(j - i);

    // int k = 0;
    // for (i = n - 1; i >= 0; i--)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         b[k][j] = a[i][j];
    //     }
    //     k++;
    // }
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n / 2; j++)
    //     {
    //         int aux = a[i][j];
    //         a[i][j] = a[i][n - i - 1];
    //         a[i][n - i - 1] = aux;
    //     }
    // }

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}