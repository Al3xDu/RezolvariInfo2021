#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j, k, ok = 0, a[20][20];
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    cout << "k=";
    cin >> k;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (a[k][j] != a[i][j])
                ok = 1;
            else
                ok = 0;
    if (ok == 1)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}