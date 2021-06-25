#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101] = "partea intreaga a lui 5,75 este egala cu a lui 5,25 si cu a lui 5 si este 5";
    char s_final[101] = "";
    // cin.get(s,101);

    char *cuvant = strtok(s, " ");
    char *sub_cuvant;
    int poz_cuvant;
    while (cuvant != NULL)
    {
        char aux[101];
        strcpy(aux, cuvant);

        sub_cuvant = strstr(cuvant, ",");
        if (sub_cuvant != NULL)
        {
            char *ptr = new char[2];
            ptr[0] = cuvant[0];
            ptr[1] = '\0';
            strcat(s_final, ptr);
            strcat(s_final, " ");
        }
        else
        {
            strcat(s_final, aux);
            strcat(s_final, " ");
        }
        cuvant = strtok(NULL, " ");
    }

    cout << s_final << endl;
    return 0;
}