#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[20], t[20];

    strcpy(s, "sanataTEA");
    cout << strlen(s);

    int i = 0;
    while (i < strlen(s))
        if (s[i] == 'a')
        {
            strcpy(t, s + i + 1);
            strcpy(s + i, t);
        }
        else
            i = i + 1;
    cout << s << endl;

    return 0;
}