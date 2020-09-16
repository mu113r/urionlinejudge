#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    unsigned long long t, n, i, j, total;
    
    scanf("%llu", &t);
    
    for(i = 0;i < t;i++) {
        total = 0;
        scanf("%llu", &n);
        for(j = 0;j < n;j++) {
            total = total + pow(2, j);
        }
        printf("%llu\n", total);
    }
    
    return 0;
}
