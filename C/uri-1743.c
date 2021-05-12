#include <stdio.h>

int main () {
    int i, y;
    int x[5];
    for(i = 0;i < 5;i++) {
        scanf("%d", &x[i]);
    }
    for(i = 0;i < 5;i++) {
        scanf("%d", &y);
        if(y == x[i]) {
            printf("N\n");
            return 0;
        }
    }

    printf("Y\n");
    return 0;
}
