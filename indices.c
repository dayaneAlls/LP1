#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
   char str[100], letra;
   int i, vet[100];

   printf(" Digite uma string: ");
   gets(str);
   printf("\n Digite um caractere: ");
   scanf(" %c", &letra);

   printf("\n Indices onde ocorrem o caractere (%c): ", letra);
   for(i=0;i<strlen(str);i++){
       str[i]=tolower(str[i]);
       if(str[i] == letra){
         vet[i]=i;
         printf("%d ",vet[i]);
       }
   }
   printf("\n");
}
