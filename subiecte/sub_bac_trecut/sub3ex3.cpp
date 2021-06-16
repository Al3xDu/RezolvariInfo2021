#include <iostream>
#include <fstream>

using namespace std;

int frecv[1000];
int main()
{

    ifstream f("bac.in");
    int count, x, max = 0;

    while (f >> x)
    {
        frecv[x]++;
        // max = (x > max) ? x : max;
        if (max < x)
            max = x;
    }

    count = 0;

    for (int i = 1; i <= max; i++)
    {
        if (frecv[i] % 2 == 1)
            count++;
    }

    // (count > 1) ? cout << "NU" << endl : cout << "DA" << endl;
    if (count > 1)
    {
        cout << "NU" << endl;
    }
    else
    {
        cout << "DA" << endl;
    }
    f.close();
    return 0;
}