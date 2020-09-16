#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, c0, c1, i, a;
    
    while(1) {
        c0 = 0;
        c1 = 0;
        
        scanf("%d", &n);
        if(n == 0) {
            exit(0);
        }
        
        for(i = 0;i < n;i++) {
            scanf("%d", &a);
            if(a == 0) {
                c0++;
            } else {
                c1++;
            }
        }
        
        printf("Mary won %d times and John won %d times\n", c0, c1);
    }
    
    return 0;
}
