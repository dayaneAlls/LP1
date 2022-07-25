#include <stdio.h>
#include <string.h>

int main()
{
    char matrizAux[7][19]={"AUSENCIA DE PEDRAS", "PEOES", "CAVALOS","TORRES","BISPOS","REIS","RAINHAS"};
    int matrizUni[7]={0,0,0,0,0,0,0};
    int tab[8][8], i, j;

    printf("\nDigite 64 nuneros de 0 a 6 para preencher o Tabuleiro do Xadrez onde: \n0=AUSENCIA DE PEDRAS\n1=PEOES\n2=CAVALOS\n3=TORRES\n4=BISPOS\n5=REIS\n6=RAINHAS\n");
    for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            scanf("%d", &tab[i][j]);}
    }
    printf("\n O tabuleiro:\n [ ");
    for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            printf("%d ] ", tab[i][j]);}
        if (i!=7)
            printf("\n [ ");
    }
    printf("\n");

    for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            matrizUni[tab[i][j]]++;}
    }
    for (i=0; i<7; i++){
        printf("\n %s: %d %s",matrizAux[i],matrizUni[i], "pecas");
    }
    printf("\n");
}
