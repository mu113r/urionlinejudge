#include <stdio.h>

int main () {
    double m[12][12];
    double soma = 0, media = 0;
    int i, j, l;
    char c;
    
    scanf("%d", &l);
    getchar();
    scanf("%c", &c);
    for(i = 0;i < 12;i++) {
        for(j = 0;j < 12;j++) {
            scanf("%lf", &m[i][j]);
        }
    }
    
    if(c == 'S') {
        for(j = 0;j < 12;j++) {
            soma += m[l][j];
        }
        printf("%.1lf\n", soma);
    } else {
        for(j = 0;j < 12;j++) {
            media += m[l][j];  
        }
        media = media/12;
        printf("%.1lf\n", media);
    }
    
    return 0;
}
