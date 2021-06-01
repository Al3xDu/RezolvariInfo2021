#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.txt");

    int primul_termen;
    f >> primul_termen;

    int pozitie = 1;

    int termen;
    while (f >> termen)
    {
        if (termen < primul_termen)
            pozitie++;
    }

    cout<<pozitie<<endl;

    f.close();
    return 0;
}