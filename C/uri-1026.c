#include <stdio.h>
#include <stdlib.h>

int main () {
    unsigned long long x, y, sum;
    
    while(scanf("%llu %llu", &x, &y) != EOF) {;
    
        sum = x ^ y;
        
        printf("%llu\n", sum);
    }
    
    return 0;
}
