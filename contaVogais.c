#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
   char palavra[100], letra, vetch[]={"aeiou"};
   int i, j, vet[5]={0,0,0,0,0};

   printf(" Digite uma palavra: ");
   gets(palavra);

   for(i=0;i<strlen(palavra);i++){
       palavra[i]=tolower(palavra[i]);
       for(j=0;j<strlen(vetch);j++){
          if(palavra[i] == vetch[j])
             vet[j]++;
       }
   }
   printf("\n Quantidade de vogais da palavra:");
   for (i=0; i<5; i++){
        printf("\n %c: %d", vetch[i],vet[i]);
   }

   printf("\n Digite uma letra para substituir as vogais da palavra: ");
   scanf(" %c", &letra);

   for(i=0;i<strlen(palavra);i++){
       for(j=0;j<strlen(vetch);j++){
          if(palavra[i] == vetch[j])
             palavra[i]=letra;
       }
   }
   printf("\n Palavra alterada: %s", palavra);
   printf("\n");
}
