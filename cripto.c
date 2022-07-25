#include <stdio.h>
#include <string.h>

void Cripto(char *texto1,char *texto2);

int main()
{
    char texto1[9],texto2[9],texto3[9];

    printf( "Informe um texto de ate 8 caracteres: ");
    scanf("%[^\n]",texto1);
    Cripto(texto1,texto2);
    Cripto(texto2,texto3);
    printf("\n O texto criptografado e: %s\n O texto descriptografado e: %s\n",texto2,texto3);
    return 0;
}

void Cripto(char *texto1,char *texto2){
    char *key1={"abcdefghijklmnopqrstuvwxyz"};
    char *key2={"@1#4$5%8&6*}0-2/7!9+>£?<~§"}; // dayane = 4@~@-$
    int i,j;

    strcpy(texto2,texto1);
    for (i=0;i<strlen(texto2);i++){
        for (j=0;j<27;j++){
            if (*(texto2+i)==*(key1+j)){
                *(texto2+i)= *(key2+j);
            }
            else if (*(texto1+i)==*(key2+j)){
                *(texto2+i)= *(key1+j);
            }
        }
    }
    texto2[i]='\0';
}
