#include <stdio.h>

int main () {
    double m[12][12];
    double soma, media;
    int i, j, count;
    char c;
    
    scanf("%c", &c);
    
    for(i = 0;i < 12;i++) {
        for(j = 0;j < 12;j++) {
            scanf("%lf", &m[i][j]);
        }
    }
    
    soma = 0;
    count = 0;
    
    for(i = 0;i < 12;i++) {
        for(j = 12-i;j < 12;j++) {
            soma += m[i][j];
            count++;
        }
    }
    
    media = soma/count;
    
    if(c == 'S') {
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", media);
    }
    
    return 0;
}
