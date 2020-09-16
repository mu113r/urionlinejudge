#include <stdio.h>
#include <stdlib.h>

int main () {
    int x1, y1, x2, y2, xmaior, xmenor, ymaior, ymenor, xdif, ydif;
    
    
    while(1) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
            exit(0);
        }
        if(x1>x2) {
            xmaior = x1;
            xmenor = x2;
        } else {
            xmaior = x2;
            xmenor = x1;
        }
        if(y1>y2) {
            ymaior = y1;
            ymenor = y2;
        } else {
            ymaior = y2;
            ymenor = y1;
        }
        xdif = xmaior - xmenor;
        ydif = ymaior - ymenor;
        if(x1 == x2 && y1 == y2) {
            printf("0\n");
        } else if(x1 == x2 || y1 == y2) {
            printf("1\n");
        } else if(xdif == ydif) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }
    
    return 0;
}
