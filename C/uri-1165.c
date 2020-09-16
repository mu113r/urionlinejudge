#include <stdio.h>

int main () {
    int n, x, i, j, primo;
    scanf("%d", &n);
    
    for(i = 0;i < n;i++) {
        primo = 1;
        scanf("%d", &x);
        
        for(j = 2;j < x;j++) {
            if(x%j == 0) {
                primo = 0;
            }
        }
        if(primo == 0) {
            printf("%d nao eh primo\n", x);
        } else {
            printf("%d eh primo\n", x);
        }
    }
    
    return 0;
}
