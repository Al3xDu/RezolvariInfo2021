#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int a[50][50] = {
        {1, 3, 1, 8, 6},
        {2, 9, 2, 7, 4},
        {3, 5, 8, 5, 2},
        {4, 1, 6, 3, 0},
        {5, 6, 7, 8, 9},
    };

    for (int i = 0; i < n; i++)
        cout << a[i][0] << " ";

    for (int i = 1; i < n; i++)
        cout << a[n-1][i] << " ";

    for (int i = n-2; i >= 1; i--)
        cout << a[i][n-1] << " ";

    for (int i = n-1; i >= 1; i--)
        cout << a[0][i] << " ";

    cout << endl;
    return 0;
}