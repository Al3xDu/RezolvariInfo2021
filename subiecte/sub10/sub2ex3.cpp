#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100], t[100];

    strcpy(s, "vorbeste");
    //vorbeste
    s[3] = s[0];
    // vorveste
    s[5] = s[2];
    // vorverte
    s[0] = s[1] + 1;
    // porverte
    s[2] = s[1] - 2;
    // pomverte
    s[6] = s[4] - 1;
    // pomverde
    strcpy(t, s);
    // t = pomverde
    t[3] = '\0';
    // t = pom
    cout << t << endl << s + 3;
    //pom
    //verde
    return 0;
}