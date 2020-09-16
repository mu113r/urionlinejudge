#include <stdio.h>
#include <stdlib.h>

int i=0, j=0;
char map[100][100];

void irparadireita() {
    do {
        j++;
     } while (map[i][j]== '.');
}

void irparaesquerda() {
    do {
        j--;
    } while (map[i][j]=='.');
}

void irparabaixo() {
    do {
        i++;
    } while (map[i][j]=='.');
}

void irparacima() {
    do {
        i--;
    } while (map[i][j] == '.');
}

int main () {

    int x, y, c=0;
    
    scanf("%d", &x);
    scanf("%d", &y);
    getchar();
    
    for(i=0; i<y; i++) {
        for(j=0; j<x; j++) {
            scanf("%c", &map[i][j]); //recebe todos os pontos do mapa
        }
        getchar();
    }
    
    /*for(i = 0; i < y; i++) {
        for(j=0;j< x;j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }*/
    
    //iniciado para a direita
    i=0;
    j=0;
    while(map[i][j] != '*') {
        //printf("map[%d][%d] = %c\n", i, j, map[i][j+1]);
        if(map[i][j] == '>') { //caminha para direita
            //printf("ir para direita");
            irparadireita();
        }
        if (map[i][j] == 'v') {
            irparabaixo();  
        }
        if (map[i][j] == '<') {
            irparaesquerda();  
        }
        if (map[i][j] == '^') {
            irparacima();
        }
        c++;
        //printf("i = %d, j = %d, c = %d\n", i, j, c);
        if(c==(x*y+1)) {
            printf("!\n");
            exit(0);
        }
        

    }
    
    printf("*\n");
    
    return 0;
}
