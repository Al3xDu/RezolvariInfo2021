#include <iostream>
using namespace std;

void f(int x)
{
    while (x > 1)
    {
        cout<< x<<endl;
        x = x - 1;
        cout<<x<<endl;
        f(x - 1);

    }

    cout <<"PRINT:"<< x<<endl;
}

int main()
{
    f(4);
    cout<<endl;
    return 0;
}