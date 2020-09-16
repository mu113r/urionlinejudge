#include <stdio.h>
#include <string.h>

int main () {
    int c = 0, i, forca = 0;
    char per[100];
    
    scanf("%d", &c);
  
    for(i = 0; i < c; i++) {
        scanf("%s %d", &*per, &forca);
        if(strcmp(per, "Thor") == 0 || strcmp(per, "thor") == 0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
        getchar();
    }
    return 0;
}
