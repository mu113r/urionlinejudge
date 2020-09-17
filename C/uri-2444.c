#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, x, delta, i;
    scanf("%d %d", &n, &x);
    for(i = 0; i < x;i++) {
        scanf("%d", &delta);
        n = n + delta;
        if(n > 100) {
            n = 100;
        }
        else if(n < 0) {
            n = 0;
        }
    }
    
    printf("%d\n", n);
    
    return 0;
}

