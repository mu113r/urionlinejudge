#include <stdio.h>
#include <stdlib.h>

int main () {
    int l, v, i, level;;
    
    while(scanf("%d", &l) != EOF) {
        level = 0;
        for(i = 0;i < l;i++) {
            scanf("%d", &v);
            if(v < 10 && level < 2) {
                level = 1;
            } else if(v < 20 && level < 3) {
                level = 2;
            } else {
                level = 3;
            }
            //printf("level %d\n", level);
        }
        printf("%d\n", level);
    }
    
    return 0;
}
