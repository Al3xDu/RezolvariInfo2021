#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");

    int primul_numar;
    int pozitie = 0;

    int x;

    f >> primul_numar;

    while (f >> x)
    {
        if (primul_numar >= x)
        {
            pozitie++;
        }
    }

    cout << pozitie << endl;
    f.close();
    return 0;
}