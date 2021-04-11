/*
Subprogramul identice are un singur parametru, n, prin care primește un număr natural (n[10,109]).
Subprogramul returnează valoarea 1, dacă numărul n are toate cifrele egale, sau valoarea 0 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2222, subprogramul returnează valoarea 1, iar dacă n=212, subprogramul
returnează valoarea 0.
*/

#include <iostream>
using namespace std;

int identice(long n)
{
    int k = n%10;
    while (n > 0)
    {
        if (k != n % 10)
            return 0;
        n/=10;
    }
    return 1;
}

int main()
{
    long n;
    cout << "n=";
    cin >> n;

    cout << identice(n) << endl;
    return 0;
}