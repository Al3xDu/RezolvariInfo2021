#include <iostream>

using namespace std;

void afisare(int x, int y, int k)
{
    int i, v[100];
    for (i = x; i <= y; i++)
    {
        // while (v[y] <= y)
        // {
        //     v[1] = x;
        //     v[i + 1] = v[i] + 1;
        //     cout<<"A";
        //     // if (i % k == 0 || v[i] == y)
        //     //     cout << v[i] << "*"
        //     //          << " ";
        //     // else
        //     //     cout << v[i] << " ";
        // }
        v[i] = i;
    }

    for (i = x; i <= y; i++)
    {
        if (i % k == 0 || v[i] == y)
        {
            cout << v[i] << "*"
                 << " ";
        }
        else
            cout << v[i] << " ";
    }
}

void afisare_2(int x, int y, int k)
{
    int i, count = 0;
    for (i = x; i <= y; i++)
    {
        count++;
        if (count == k)
        {
            cout << i << " "
                 << "*"
                 << " ";
            count = 0;
        }
        else
            cout << i << " ";
    }
    if (count < k && count != 0)
        cout << "*";
}

int main()
{
    // int x, y, k;
    // cin >> x, y, k;
    afisare_2(11, 22, 4);
    return 0;
}