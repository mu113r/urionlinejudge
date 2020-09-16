#include <stdio.h>

int main () {
    int i, x, maior=0, pos;
    
    for(i=0;i<100;i++) {
        scanf("%d", &x);
        if(x > maior) {
            maior = x;
            pos = i+1;
        }
    }
    printf("%d\n%d\n", maior, pos);
    
    return 0;
}
