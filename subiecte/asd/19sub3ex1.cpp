#include <iostream>
using namespace std;

void paritate(int n, int &nr)
{
    nr = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && n % 2 == i % 2)
        {
            nr++;
        }
    }
}

int main()
{
    int nr;

    paritate(20, nr);
    cout << nr << endl;
    return 0;
}
