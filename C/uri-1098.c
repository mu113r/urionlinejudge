#include <stdio.h>
#include <stdlib.h>

int main () {
    double i;
    i = 0;
    while(i < 1.8) {
        if(i == 0 || i == 1.0) {
            printf("I=%.0lf J=%.0lf\n", i, i+1);
            printf("I=%.0lf J=%.0lf\n", i, i+2);
            printf("I=%.0lf J=%.0lf\n", i, i+3);
        } else {
            printf("I=%.1lf J=%.1lf\n", i, i+1);
            printf("I=%.1lf J=%.1lf\n", i, i+2);
            printf("I=%.1lf J=%.1lf\n", i, i+3);
        }
        i += 0.2;
    }
    
    printf("I=%.0lf J=%.0lf\n", i, i+1);
    printf("I=%.0lf J=%.0lf\n", i, i+2);
    printf("I=%.0lf J=%.0lf\n", i, i+3);
    
    return 0;
}
