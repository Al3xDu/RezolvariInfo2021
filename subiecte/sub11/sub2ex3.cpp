#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[20] = "CALCULATOARE\0";

    for (int i = 0; i < strlen(s); i++)
    {
        if (strchr("AOU", s[i]))
        {
            cout << "*";
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}