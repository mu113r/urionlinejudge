#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    while(1){
        int n = 0;
        int i;
        int intake, many, intake_value;
        char alimento[50];
        scanf("%d", &n);
        if(n == 0){
            exit(0);
        }
        intake = 0;
        for(i = 0;i < n;i++){
            fflush(stdin);
            scanf("%d ", &many);
            fgets(alimento, 50, stdin);
            alimento[strlen(alimento)-1] = '\0';
            if(!strcmp(alimento, "suco de laranja")){
                intake_value = 120;
            }
            else if(!strcmp(alimento, "morango fresco")){
                intake_value = 85;
            }
            else if(!strcmp(alimento, "mamao")){
                intake_value = 85;
            }
            else if(!strcmp(alimento, "goiaba vermelha")){
                intake_value = 70;
            }
            else if(!strcmp(alimento, "manga")){
                intake_value = 56;
            }
            else if(!strcmp(alimento, "laranja")){
                intake_value = 50;
            }
            else {
                intake_value = 34;
            }
            intake = intake + many * intake_value;
        }
        if(intake < 110){
            printf("Mais %d mg\n", (110-intake));
        }
        else if (intake > 130){
            printf("Menos %d mg\n", (intake-130));
        }
        else{
            printf("%d mg\n", intake);
        }
    }
    
    return 0;
}
