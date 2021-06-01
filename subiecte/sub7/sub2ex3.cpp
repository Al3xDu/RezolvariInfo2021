#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i, j;
    char s[200], t[200];
    strcpy(s, "ABCDUECADA");
    i = 0;
    j = strlen(s) - 1;
    while (i < j)
        if (s[i] == s[j])
        {
            strcpy(t, s + j + 1);
            strcpy(s + j, t);
            strcpy(t, s + i + 1);
            strcpy(s + i, t);
            j = j - 2;
        }
        else
        {
            i = i + 1;
            j = j - 1;
        }

    cout << s << endl;
    return 0;
}