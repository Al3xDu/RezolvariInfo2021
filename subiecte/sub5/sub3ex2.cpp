/*
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul [2,102], m și n, şi
construieşte în memorie un tablou bidimensional cu m linii şi n coloane, numerotate începând cu 1, astfel
încât elementul de pe linia i şi coloana j primeşte ca valoare ultima cifră a produsului ij.
Programul afişează pe ecran elementele tabloului obținut, linie cu linie, fiecare linie a tabloului
pe câte o linie a ecranului, cu valorile aflate pe aceeaşi linie separate prin câte un spaţiu.
Exemplu: dacă m=4 și n=5 se afişează pe ecran tabloul alăturat.
*/

#include <iostream>
using namespace std;

#define MAX 101

int main()
{
    unsigned int n, m, a[MAX][MAX];
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    unsigned int i, j;

    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            a[i][j] = (i * j) % 10;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
            cout << "a[" << i << "]"
                 << "[" << j << "]=" << a[i][j] << " ";
        cout << endl;
    }
    cout<<endl<<endl;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}