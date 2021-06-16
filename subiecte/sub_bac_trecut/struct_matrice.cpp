#include <iostream>
using namespace std;

struct tip_memorie
{
    int interna;
    int externa;
};

struct calculator
{
    char monitor;
    tip_memorie memorie;
};

int main()
{

    calculator c;

    c.monitor = 'e';
    c.memorie.interna = 20;
    c.memorie.externa = 20;

    int a[50][50];
    int i, j;

    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
        {
            if (i > j && i + j >= 9)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
