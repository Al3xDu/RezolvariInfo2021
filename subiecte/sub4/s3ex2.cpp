/*
Scrieţi un program C/C++ care citeşte de la tastatură numere naturale din intervalul [2,102]: m, n şi
elementele unui tablou bidimensional cu m linii şi n coloane. Programul afișează pe ecran, pentru fiecare
linie a sa, cea mai mare dintre valorile strict mai mici decât 21 memorate în aceasta, sau mesajul
nu exista, dacă nu există nicio astfel de valoare pe linia respectivă. Numerele, respectiv mesajele,
sunt afișate pe linii separate ale ecranului, în ordinea liniilor corespunzătoare din tablou.
*/

#include <iostream>

using namespace std;

int main()
{
    int a[101][101] = {
        {6, 16, 21, 4, 90},
        {92, 26, 36, 95, 80},
        {5, 2, 9, 7, 3}};

    int m = 3, n = 5;

    int i, j;

    for (i = 0; i < m; i++)
    {
        int max = 0;
        int k = 0;

        for (j = 0; j < n; j++)
        {
            if (a[i][j] < 21)
                if (max < a[i][j])
                {
                    max = a[i][j];
                    k = 1;
                }
        }

        if (k == 0)
        {
            cout << "nu exista" << endl;
        }
        else
        {
            cout << max << endl;
        }
    }

    return 0;
}