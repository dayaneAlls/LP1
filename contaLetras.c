#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
   char palavra[20], letra;
   int i, cont=0;

   printf(" Informe uma palavra: ");
   gets(palavra);
   printf("\n Informe uma letra da palavra: ");
   scanf(" %c", &letra);

   for(i=0;i<strlen(palavra);i++){
       palavra[i]=tolower(palavra[i]);
       if(palavra[i] == letra){
          cont++;
       }
       else{
          cont;
       }
   }
   printf("\n Quantidade da letra (%c): %d", letra, cont);
   printf("\n");
}
