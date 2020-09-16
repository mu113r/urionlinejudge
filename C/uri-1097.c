#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j, a;
    i = 1;
    j = 7;
    for(a = 0;a < 5;a++) {
        
        printf("I=%d J=%d\n", i, j);
        printf("I=%d J=%d\n", i, j-1);
        printf("I=%d J=%d\n", i, j-2);
        i += 2;
        j += 2;
    }
    return 0;
}
