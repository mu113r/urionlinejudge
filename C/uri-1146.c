#include <stdio.h>
#include <stdlib.h>

int main () {
    int x, i;
    
    while(1) {
        scanf("%d", &x);
        if(x == 0) {
            exit(0);
        }
        
        for(i=1;i<x;i++) {
            printf("%d ", i);
        }
        printf("%d\n", x);
    }
    
    return 0;
}

