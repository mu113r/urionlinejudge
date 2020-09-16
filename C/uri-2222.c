#include <stdio.h>
#include <stdlib.h>

void quick  (int [][60], int, int, int);
int qt_union(int [][60], int, int, int, int);
int qt_inter(int [][60], int, int, int, int);

int main()
{

    int t, n, q;
    int i, j, aux;
    int v[1000][60];
    int qt[1000000];
    int op, x, y;

    scanf("%d", &t);
    if(t == 0)
    {
        exit(0);
    }

    for(; t > 0 ; t--)
    {
        scanf("%d", &n);

        for(i = 0 ; i < n ; i++)
        {
            scanf("%d", &qt[i]);

            for(j = 0 ; j < qt[i] ; j++)
                scanf("%d", &v[i][j]);

            quick(v, i, 0, qt[i] - 1);
        }

        scanf("%d", &q);

        for(i =  0 ; i < q ; i++)
        {
            scanf("%d %d %d", &op, &x, &y);

            x --;
            y --;

            if(op == 2)
                printf("%d\n", qt_union(v, x, y, qt[x], qt[y]));

            else
                printf("%d\n", qt_inter(v, x, y, qt[x], qt[y]));
        }
    }
}

void quick(int vet[][60], int atual, int esq, int dir)
{
    int pivo = esq, i, ch, j;

    for(i = esq + 1 ; i <= dir ; i++)
    {
        j = i;

        if(vet[atual][j] < vet[atual][pivo])
        {
            ch = vet[atual][j];

            while(j > pivo)
            {
                vet[atual][j] = vet[atual][j - 1];
                j--;
            }

            vet[atual][j] = ch;
            pivo++;
         }
     }

     if(pivo - 1 >= esq)
         quick(vet, atual, esq, pivo - 1);

     if(pivo + 1 <= dir)
         quick(vet, atual, pivo + 1,dir);
}

int qt_union(int v[][60], int x, int y, int m, int n)
{
    int i = 0, j = 0;
    int count = 0;

    while (i < m && j < n)
    {
        if (v[x][i] < v[y][j])
        {
            i++;
            count++;
        }

        else if (v[y][j] < v[x][i])
        {
            j++;
            count++;
        }
        else
        {
            j++;
            count++;
            i++;
        }
    }

    while(i < m)
    {
        i++;
        count++;
    }
    while(j < n)
    {
        j++;
        count++;
    }

    return count;
}

int qt_inter(int v[][60], int x, int y, int m, int n)
{
    int i = 0, j = 0;
    int count = 0;

    while (i < m && j < n)
    {
        if (v[x][i] < v[y][j])
            i++;

        else if (v[y][j] < v[x][i])
            j++;

        else
        {
            count++;
            j++;
            i++;
        }
    }

    return count;
}
