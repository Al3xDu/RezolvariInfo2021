#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.in");

    int v[200] = {0};
    int nr;
    while (f >> nr)
    {
        if (nr <= 98 && nr >= 10)
            v[nr] = 1;
    }

    int stare = 2;
    int a[100];
    int j = 0;
    for (int i = 98; i >= 10; i--)
    {
        if (v[i] == 0 && (i % 10 != i / 10 % 10))
        {
            stare--;
            a[j] = i;
            j++;
        }
    }

    if (stare > 0)
        cout << "nu exista";
    else
        cout << a[0] << " " << a[1];
    cout<<endl;
    f.close();
    return 0;
}