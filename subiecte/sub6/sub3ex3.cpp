#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bac.in");

    int a;
    int counter1 = 0, counter2 = 0, counter = 0;
    int max = 0;
    while (f >> a)
    {
        counter++;
        if (a < 0)
        {
            counter2 = counter - 1;
            counter = 0;
        }
        else
        {
            counter1 = counter2;
        }
        if (max < (counter1 + counter2))
            max = (counter1 + counter2);
    }
    cout << max << endl;
    f.close();
    return 0;
}