#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac2.txt");

    int S_max = 0, S_par = 0, S_impar = 0;

    int x;
    while (f >> x)
    {
        if (x % 2 == 0)
        {
            S_par += x;
            if (S_impar > S_max)
                S_max = S_impar;
            S_impar = 0;
        }

        if (x % 2 == 1)
        {
            S_impar += x;
            if (S_par > S_max)
                S_max = S_par;
            S_par = 0;
        }
    }

    cout << S_max << endl;
    f.close();
    return 0;
}