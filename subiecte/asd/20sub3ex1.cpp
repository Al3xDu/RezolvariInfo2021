#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int b, n, c, k = 0, S = 0;
    cout << "n=";
    cin >> n;
    cout << "b=";
    cin >> b;
    while (n)
    {
        c = n % 10;
        S = S + pow(b, k) * c;
        k++;
        n /= 10;
    }
    cout << "S=" << S;
    return 0;
}