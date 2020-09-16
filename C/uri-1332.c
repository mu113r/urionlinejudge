#include <stdio.h>
#include <string.h>

int main () {
    int i, j, t, a, one = 0, two = 0;
    char num[10];
    char sone[] = "one";
    
    scanf("%d", &t);
    getchar();
    
    for(i = 0;i < t;i++) {
        gets(num);
        //printf("num = %s\n", num);
        a = strlen(num);
        //printf("a = %d\n", a);
        
        one = 0;
        two = 0;
        if(a == 3) {
            //printf("entrou no a = 3\n");
            for(j = 0;j < 3;j++) {
                if(num[j] == sone[j]) {
                    one++;
                } else {
                    two++;
                }
                
            }
        } else {
            printf("3\n");
        }
        
        if(one > two) {
            printf("1\n");
        } else if(two > one) {
            printf("2\n");
        }
    
    }
    
    
    
    return 0;
}
