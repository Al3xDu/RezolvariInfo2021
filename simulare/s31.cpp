//  citește x (număr natural)
//  p<-1; y<-0;
// ┌repetă
// │ c<-x%10; x<-[x/10]
// │┌dacă c≠0 atunci
// ││┌dacă x%10<c atunci y<-y*10+c
// │││altfel y<-c*p+y
// ││└■
// ││ p<-p*10
// │└■
// └până când x=0
//  scrie y

// Subprogramul putere are un parametru, n, prin care primește un număr natural (n[2,109]).
// Subprogramul returnează numărul prim care apare la puterea cea mai mică în descompunerea în factori
// primi a lui n. Dacă sunt mai multe astfel de numere, se returnează cel mai mic dintre acestea.
// Scrieți definiția completă a subprogramului.
// Exemplu: dacă n=880, subprogramul returnează numărul 5 (880=24511).

#include <iostream>

using namespace std;

// 2 4
// 5 1
// 11 1

int putere(int n)
{
    // cout<<n;
    int a[10000][2];
    long min = 99999;
    int i = 0;
    int d = 2, p; // d factor din descompunere, p va fi puterea lui d in descompunere
    // il  im partim pe n la d in mod repetat, pana cand devine 1
    while (n > 1)
    {
        // numaram de cate ori se imparte n la d. Aceasta va fi puterea lui d in descompunere
        p = 0;
        while (n % d == 0)
        {
            p++;
            n = n / d;
        }
        // daca s-a facut cel putin o impartire, afisam factorul si puterea
        if (p != 0)
        {
            // cout<<d<<p<<endl;
            a[i][0] = d;
            a[i][1] = p;
            // cout<<a[i][0] <<a[i][1]<<endl;
            i++;
        }
        d++;
        //  daca d * d il depaseste pe n si n nu este 1, decidem ca n este prim,
        //  si este factor in descompunerea valorii initiale a lui n
        if (n > 1 && d * d > n)
        {
            d = n; // trecem direct la n, urmatorul factor din descompunere
        }
    }
    int nr_randuri=i;
    int valoare;
    for (int j = 0; j < nr_randuri; j++)
        if (min > a[j][1])
        {
            min = a[j][1];
            valoare = a[j][0];
            // cout <<min<<endl;
            // cout <<valoare<<endl;
        }

    return valoare;
}

int main()
{
    cout << putere(880) << endl;
    return 0;
}
