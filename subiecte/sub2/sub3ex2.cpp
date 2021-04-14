#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int a[n][n];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i + j == n + 1)
                a[i][j] = n;
            if (i + j < n + 1)
                a[i][j] = i+j-1;
        }

    for (int i = 1; i <= n; i++)
        for (int j = n; j >= 1; j--)
        {
            if (i + j > n + 1)
            // NU E BINE AICI ALTA DATA
                a[i][j] = i-j+1;
        }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // cout << "a[" << i << "]"
            //      << "[" << j << "]=" << a[i][j] << " ";
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}