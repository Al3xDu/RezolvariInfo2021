

struct prajitura
{
    int numar;
    ing ingredient[20];
} p;

struct ing
{
    int cod;
    int cantitate;
};

for (i = 0; i < 7; i++)
    for (j = 0; j < 7; j++)
        if (i > j && i + j > n - 1)
            a[i][j] = 'a';
        else if (i >= j && i + j <= n - 1)
            a[i][j] = 'b';
        else if (i < j && i + j < n - 1)
            a[i][j] = 'a';
        else if (i <= j && i + j >= n - 1)
            a[i][j] = 'b';