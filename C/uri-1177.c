#include <stdio.h>

int main () {
    int n[1000];
    int t, i, c = 0;
    
    scanf("%d", &t);
    for(i = 0;i < 1000;i++) {
        n[i] = c;
        c++;
        if(c == t) {
            c = 0;
        }
    }
    for(i = 0;i < 1000;i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}
