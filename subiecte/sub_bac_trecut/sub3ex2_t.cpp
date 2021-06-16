#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

char *reverseStr(char *str)
{
    char temp;
    int i, j = 0;

    i = 0;
    j = strlen(str) - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    return str;
}

int main()
{

    int i, count = 0, ok = 0;

    char sir[101] = "reper de desene o";
    char sir_final[101] = "";

    char *cuvant = strtok(sir, " ");

    while (cuvant)
    {
        char aux[101];
        strcpy(aux, cuvant);
        if (strlen(cuvant) % 2 == 1)
        {
            strcpy(aux, reverseStr(cuvant));
            count++;
        }

        int length = strlen(aux);

        for (int j = 0; j < length; j++)
        {
            if (aux[j] != aux[length - j - i])
                ok = 1;
        }

        if (ok == 1 && count)
        {
            ok = 0;
            count--;
        }

        strcat(sir_final, aux);
        strcat(sir_final, " ");

        cuvant = strtok(NULL, " ");
    }

    if (count && ok == 0)
        cout << sir_final << endl;
    else
        cout << "nu exista" << endl;

    return 0;
}