#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream f("bac.out");

    int x = 21, y = 31;

    int n = (y - x) / 2;

    f << y << " " << x << " ";
    n -= 1;

    int numar;
    int numar_precedent = x;
    for (int i = n; i > 0; i--)
    {
        numar = numar_precedent - 2 * i;
        f << numar << " ";
        numar_precedent = numar;
    }
    
    f.close();
    return 0;
}