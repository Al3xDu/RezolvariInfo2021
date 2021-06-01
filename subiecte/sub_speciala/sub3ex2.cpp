#include <iostream>
using namespace std;

int main()
{
    int n = 5, k = 4;
    int a[100][100] = {
        {2, 4, 3, 5, 6},
        {8, 0, 9, 8, 7},
        {2, 6, 9, 0, 5},
        {6, 1, 3, 6, 9},
        {7, 3, 9, 4, 2}};
    int aux;
    for (int i = 0; i < n; i++)
    {
        aux = a[k - 1][i];
        a[k - 1][i] = a[i][k - 1];
        a[i][k - 1] = aux;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}