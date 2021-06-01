#include <iostream>
using namespace std;

int m = 5, n = 4;
int a[5][4] = {{4, 5, 7, 2},
               {2, 7, 3, 6},
               {7, 6, 4, 0},
               {6, 9, 8, 7},
               {8, 0, 5, 4}};
int ok = 0;

void varianta_check()
{

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 1; i < m; i++)
        {
            if (a[i][3] == a[0][j])
            {
                ok = 1;
                cout << a[i][3] << " ";
            }
        }
    }

    if (ok == 0)
        cout << "nu exista" << endl;
}

int main()
{
    // Varianta cu funtie:
    varianta_check();

    //Varianta cu vector de frecv

    // int v[21];

    // for (int i = 2; i <= 21; i++)
    //     v[i] = 0;

    // for (int j = 0; j < n - 1; j++)
    //     v[a[0][j]]++;

    // for (int i = 1; i < m; i++)
    //     v[a[i][3]]++;

    // for (int i = 2; i <= 21; i++)
    //     if (v[i] == 2)
    //     {
    //         ok = 1;
    //         cout << i << " ";
    //     }
    cout << endl;
    if (ok == 0)
        cout << "nu exista" << endl;
    return 0;
}