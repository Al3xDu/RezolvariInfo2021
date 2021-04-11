#include <iostream>
#include <fstream>
using namespace std;

#define MAX_VEC_SIZE 100000

int main()
{
    ifstream f1("bac1.txt");
    ifstream f2("bac2.txt");
    int n1, n2;
    f1 >> n1;
    f2 >> n2;

    int v_frec[MAX_VEC_SIZE];

    for (int i = 0; i < MAX_VEC_SIZE; i++)
        v_frec[i] = 0;

    int numar1, numar2;
    while (f1 >> numar1)
    {
        if (numar1 % 5 == 0)
            v_frec[numar1]++;
    }

    while (f2 >> numar2)
    {
        if (numar2 % 5 == 0)
            v_frec[numar2]++;
    }

    int stare = 0;
    for (int i = 0; i < MAX_VEC_SIZE; i++)
    {
        // if (v_frec[i] == 1) // daca este adevarat am numarat din ambele fisiere variabila i o singura data
        // {
        //     cout << i << endl;
        //     stare = 1;
        // }
        if (v_frec[i] >= 1)
            cout << "i:" << i << "  v_frec[i]:" << v_frec[i] << endl;
    }

    // if (stare == 0)
    // {
    //     cout << "nu exista" << endl;
    // }

    f1.close();
    f2.close();
    return 0;
}