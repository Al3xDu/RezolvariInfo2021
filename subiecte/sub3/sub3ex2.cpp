#include <iostream>

using namespace std;

int main()
{
    // int a[20][20] = {
    //     {3, 7, 0, 0},
    //     {0, 0, 5, 8},
    //     {6, 2, 0, 1},
    //     {0, 3, 0, 6},
    //     {8, 0, 6, 4}};
    int m, n, i, j, k, ok;
    // m = 5;
    // n = 4;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    ok = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }

    int v1[20], v2[20];

    for (int i = 0; i < 21; i++)
    {
        v1[i] = 0;
        v2[i] = 0;
    }

    for (i = 0; i < m; i++)
    {

        v1[a[i][0]]++;
        v2[a[i][n - 1]]++;
    }

    for (int i = 1; i < 21; i++)
    {
        for (int j = 1; j < 21; j++)
            if (v1[i] == v1[j] && v1[i] != 0 && v2[i] != 0)
            {
                cout << i << " ";
                ok = 1;
                break;
            }
    }
    cout << endl;

    if (ok == 0)
        cout << "nu exista";
    return 0;
}