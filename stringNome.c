#include <stdio.h>
#include <string.h>

void fNome(char nome[100],char ultimo[30]);

int main()
{
    char nome[100], ultimo[30];

    printf(" Informe seu nome: ");
    gets(nome);

    fNome(nome,ultimo);

    printf("\n Nome: %s, %s.\n",ultimo,nome);
}

void fNome(char nome[100],char ultimo[30]){
    char *p,t=' ';
    int i,n=0,j=0;
    for(i=0;i<strlen(nome);i++){
        if(nome[i]==t)
           n=i;
    }
    for(i=n;i<strlen(nome);i++){
        ultimo[j]=nome[i];
        j++;
    }
    ultimo='\0';
    p = strtok(nome," ");
}
