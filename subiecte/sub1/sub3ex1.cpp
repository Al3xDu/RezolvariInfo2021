#include <iostream>
using namespace std;

void divX(int n, int x)
{
    for (int i = n; i >= 1; i--)
        cout << i * x << " ";
    cout << endl;
}

int main()
{
    divX(4, 15);
    return 0;
}