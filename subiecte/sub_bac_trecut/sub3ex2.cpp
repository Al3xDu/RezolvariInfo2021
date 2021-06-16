#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    // aici normal foloseam cin.getline(text,101);
    char sir[101];
    cin.getline(sir, 101);
    // char sir[101] = "un palc mic de scolarite ilumina sala";
    char sir_final[101] = "";
    int count = 0;

    char *cuvant = strtok(sir, " ");

    while (cuvant)
    {
        char aux[101], prima_litera;
        strcpy(aux, cuvant);

        if (strlen(cuvant) >= 3)
        {
            prima_litera = aux[0];
            for (int i = 0; i < strlen(cuvant); i++)
                aux[i] = aux[i + 1];
            aux[strlen(cuvant) - 1] = prima_litera;
            count++;
        }

        strcat(sir_final, aux);
        strcat(sir_final, " ");
        cuvant = strtok(NULL, " ");
    }

    if (count)
        cout << sir_final << endl;
    else
        cout << "nu exista";

    return 0;
}