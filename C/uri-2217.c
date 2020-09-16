#include <stdio.h>
#include <stdlib.h>

int main () {
    double n;
    int t, i;
    
    scanf("%d", &t);
    
    for(i = 0;i < t;i++) {
        scanf("%lf", &n);
        if((int)n%2 == 0) {
            printf("1\n");
        } else {
            printf("9\n");
        }
    }
    
    return 0;
}
