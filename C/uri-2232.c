#include <stdio.h>
#include <stdlib.h>

int main () {
    unsigned long long m[31][31];
    unsigned long long tot[31];
    unsigned long long i, j, k, t, z, n, total;
    
    for(i = 0;i < 31;i++) {
        tot[i] = 0;
    }
    k = 0;
    
    scanf("%llu", &t);
    
    for(z = 0;z < t;z++) {
        total = 0;
        
        scanf("%llu", &n);
        
        for(i = 0;i < 31;i++) {
            for(j = 0;j < 31;j++) {
                m[i][j] = 0;
            }
        }
        
        m[0][0] = 1;
        
        for(i = 1;i < 31;i++) {
            for(j = 0;j <= i;j++) {
                m[i][j] = m[i-1][j] + m[i-1][j-1];
            }
        }
        
        for(i = 0;i < n;i++) {
            for(j = 0;j < 31;j++) {
                total = total + m[i][j];
            }
        }
        
        tot[k] = total;
        k++;
        //printf("%d\n", total);
        
        /*
        for(i = 0;i < 31;i++) {
            for(j = 0;j < 31;j++) {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
        */
    }
    
    for(i = 0;i < t;i++) {
        printf("%llu\n", tot[i]);
    }
    
    return 0;
}
