#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream f("bac.txt");

    int min = 99, max = 10;

    int x;

    while (f >> x)
    {
        if (x >= 10 && x <= 99)
        {
            if (x < min)
                min = x;
            if (x > max)
                max = x;
        }
    }
    min--;
    max++;

    cout << min << " " << max << endl;

    f.close();
    return 0;
}