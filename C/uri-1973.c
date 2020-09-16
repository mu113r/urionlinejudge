#include <stdio.h>

int main ()
{
    long long int n, i, stolen, total = 0, lasti, c = 0, rob = 1;
    scanf("%lld", &n);
    long long int star[n];
    
    for(i = 0;i < n;i++)
    {
        scanf("%lld", &star[i]);
        total += star[i];
    }
    
    i = 0;
    stolen = 0;
    do
    {
        lasti = i;
        if(i == n)
        {
            c = i - 1;
            i = 0;
            break;
        }
        else if(star[i] > 0 && star[i]%2 !=0)
        {
            stolen += 1;
            star[i] -= 1;
            i += 1;
        }
        else if(star[i] > 0 && star[i]%2 == 0)
        {
            stolen += 1;
            star[i] -= 1;
            i -= 1;
        }
        else
        {
            if(i != 0 && i > 0)
            {
                i -= 1;
            }
            else if(i != 0 && i < 0)
            {
                i += 1;
                rob = 0;
            }
        }
        if(i > lasti)
        {
            c = i;
        }
        // printf("stolen = %lld e i = %lld\n", stolen, i);
        
    } while(i != 0);
    
    if(star[0] > 0 && rob == 1)
    {
        stolen += 1;
        star[0] -= 1;
    }
    
    // printf("total = %lld e stolen = %lld\n", total, stolen);
    printf("%lld %lld\n", c+1, total - stolen);
    
    return 0;
}
