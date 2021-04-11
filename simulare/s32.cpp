#include <iostream>
using namespace std;

int main()
{
    int n = 6, k = 5;
    int i, j;
    int a[100][100] = {
        {0, 1, 4, 5, 3, 2},
        {0, 6, 0, 7, 5, 0},
        {4, 0, 0, 6, 0, 6},
        {2, 0, 0, 5, 0, 0},
        {3, 0, 6, 4, 0, 8},
        {0, 6, 9, 0, 0, 0}};

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    int v[100], m = 0;
    while (m < k - 1)
    {
        v[m] = a[k - 1][m];
        m++;
    }

    int aux = v[m - 1];
    for (int i = m - 1; i != 0; i--)
        v[i] = v[i - 1];
    v[0] = aux;


    for (j = 0; j <= m - 1; j++)
    {
        a[k - 1][j] = v[j];
    }
    
    cout <<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}