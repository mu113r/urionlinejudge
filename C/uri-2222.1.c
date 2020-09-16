#include <stdio.h>
#include <stdlib.h>

void remove_repeticao();

int main ()
{
    long long int z, n, i, j, m, l[5000000], matrix[5000000][500], q, op, x, y, inter, k, aux;
    
       scanf("%lld", &n);
        if(n == 0)
        {
            exit(0);
        }
        
        for(i = 0;i < n;i++)
        {
            scanf("%lld", &m);
            for(j = 0;j < m;j++)
            {
                scanf("%lld", &l[j]);
                for(k = 0;k < l[j];k++)
                {
                    scanf("%lld", &matrix[j][k]);
                }
            }
        
            scanf("%lld", &q);
            
            for(z = 0;z < q;z++)
            {
                scanf("%lld %lld %lld", &op, &x, &y);
                
                if(op == 1) // intersecao
                {
                    inter = 0;
                    for(j = 0;j < l[x-1];j++)
                    {
                        for(k = 0;k < l[y-1];k++)
                        {
                            // printf("mat[x(%lld)][j(%lld)] = %lld, mat[y(%lld)][k(%lld)] = %lld\n", x-1, j, matrix[x-1][j], y-1, k, matrix[y-1][k]);
                            if(matrix[x-1][j] == matrix[y-1][k])
                            {
                                // printf("entrou\n");
                                if(inter > 0)
                                {
                                    if(aux != matrix[x-1][j])
                                    {
                                        inter++;
                                        aux = matrix[x-1][j];
                                    }
                                }
                                else
                                {
                                    inter++;
                                    aux = matrix[x-1][j];
                                }
                                // printf("inter = %lld, aux = %lld\n", inter, aux);       
                            }
                        }
                    }
                    printf("%lld\n", inter);
                }
                else
                {
                    inter = 0;
                    for(j = 0;j < l[x-1];j++)
                    {
                        for(k = 0;k < l[y-1];k++)
                        {
                            if(matrix[x-1][j] == matrix[y-1][k])
                            {
                                if(inter > 0)
                                {
                                    if(aux != matrix[x-1][j])
                                    {
                                        inter++;
                                        aux = matrix[x-1][j];
                                    }
                                }
                                else
                                {
                                    inter++;
                                    aux = matrix[x-1][j];
                                }       
                            }
                        }
                    }
                    printf("%lld\n", l[x-1]+l[y-1]-inter);
                }
            }
        }
    return 0;
}
