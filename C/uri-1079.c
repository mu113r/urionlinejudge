#include <stdio.h>

int main () {
    int n, i;
    double x1, x2, x3, total, media;
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++) {
        scanf("%lf %lf %lf", &x1, &x2, &x3);
        total = x1*2 + x2*3 + x3*5;
        media = total/10;
        printf("%.1lf\n", media);
    }
    
    return 0;
}
