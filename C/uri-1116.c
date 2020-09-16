#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, n;
    double x, y, div;
    
    scanf("%d", &n);
    
    for(i = 0;i < n;i++) {
        scanf("%lf %lf", &x, &y);
        if(y == 0) {
            printf("divisao impossivel\n");
        } else {
            div = x / y;
            printf("%.1lf\n", div);
        }
    }
    
    return 0;
}
