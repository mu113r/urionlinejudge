#include <stdio.h>

int main() {
    char r;
    int i, j, c = 0;
    double soma = 0, media = 0;
    double matriz[12][12];
    
    scanf("%c", &r);
    if(r == 's' || r == 'S') {
        for(i = 0; i < 12; i++) {
            for(j = 0; j < 12; j++) {
                scanf("%lf", &matriz[i][j]);
            } 
        }
        for(i = 0; i < 12; i++) {
            for(j = i + 1; j < 12; j++) {
                soma = soma + matriz[i][j];
            }
        }
        printf("%.1lf\n", soma);
    }
    if(r == 'm' || r == 'M') {
        for(i = 0; i < 12; i++) {
            for(j = 0; j < 12; j++) {
                scanf("%lf", &matriz[i][j]);
            } 
        }
        for(i = 0; i < 12; i++) {
            for(j = i + 1; j < 12; j++) {
                soma = soma + matriz[i][j];
                c++;
            }
        }
        media = soma/c;
        printf("%.1lf\n", media);
    }
    
    return 0;
}
