#include <stdio.h>
#include <string.h>

int main () {
    char s[150];
    char d[150];
    int a, b, i, j, c;
    
    while(scanf("%s", &s) != EOF) {
        getchar();
        gets(d);
        
        
        a = strlen(s);
        b = strlen(d);
        
        //printf("%d", strcmp(s, d));
        
        if(a == b) {
            if(strcmp(s, d) == 0) {
                printf("Resistente\n");
                continue;
            } else {
                printf("Nao resistente\n");
                continue;
            }
        }
        for(i = 0; i <= a-b;i++) {
            c = 0;
            for(j = 0;j < b;j++) {
                if(d[j] == s[i+j]) {
                    c++;
                }
            }
            if(c == b) {
                printf("Resistente\n");
                break;
            }
        }
        
        if(c != b) {
            printf("Nao resistente\n");
        }
        
        //printf("a = %d e b = %d\n", a, b);
    }
    return 0;
}
