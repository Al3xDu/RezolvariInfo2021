#include <iostream>

using namespace std;

int main()
{
    int a[20][20] = {
        {2, 3, 4, 5, 6},
        {2, 4, 6, 8, 0},
        {7, 8, 9, 0, 1},
        {3, 5, 7, 9, 1},
        {7, 3, 8, 5, 6},
    };
    int n = 5, k = 2;

    int ult_ind;
    if ((n - 1) % 2 == 1)
        ult_ind = n / 2 - 1;
    else
        ult_ind = n / 2;

    int ultimu_elem = a[k - 1][ult_ind];

    for (int j = n - 1; j >= 0; j--)
    {
        int aux;
        if ((k - 1) + j < n - 1)
        {
            aux = a[k - 1][j - 1];
            a[k - 1][j - 1] = a[k - 1][j];
            a[k - 1][j] = aux;
        }
    }
    a[k - 1][0] = ultimu_elem;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}