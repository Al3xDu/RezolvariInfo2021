/*
Fişierul bac.txt conține numere naturale din intervalul [2,106]: pe prima linie n, iar pe a doua linie
un șir de n numere, separate prin câte un spațiu.
Se cere să se afișeze pe ecran, pentru fiecare număr natural i (i[1,n]), cea mai mare dintre primele
i valori ale șirului aflat în fișier. Numerele afișate sunt separate prin câte un spațiu. Proiectați un
algoritm eficient din punctul de vedere al memoriei utilizate şi al timpului de executare.
*/

#include <iostream>
#include <fstream>
using namespace std;

int returneaza_max(long v[10000], long n)
{
    int max = 0;

    for (int i; i <= n; i++)
        if (max < v[i])
            max = v[i];

    return max;
}

int main()
{
    ifstream f("bac.txt");

    long n;
    f >> n;

    unsigned int a;
    long v[10000], i = 0;

    while (f >> a)
    {
        v[i] = a;
        i++;

        cout << returneaza_max(v, i) << " ";
    }

    cout << endl;
    f.close();
    return 0;
}