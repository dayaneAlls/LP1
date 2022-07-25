#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int A[25], B[25], C[50], i, j=0;

   for (i=0; i<25; i++){
       printf("Digite o valor %d do vetor A: ", i+1);
       scanf("%d", &A[i]);
       C[j] = A[i];
       j+=2;
   }
   j=1;

   for (i=0; i<25; i++){
       printf("Digite o valor %d do vetor B: ", i+1);
       scanf("%d", &B[i]);
       C[j] = B[i];
       j+=2;
   }
   j=1;

   printf("\n Vetor A: [ ");
   for (i=0; i<25; i++){
       printf("%d", A[i]);
       if (i!=24)
          printf(", ");
   }
   printf(" ]");

   printf("\n\n Vetor B: [ ");
   for (i=0; i<25; i++){
       printf("%d", B[i]);
       if (i!=24)
          printf(", ");
   }
   printf(" ]");

   printf("\n\n Vetor C: [ ");
   for (i=0; i<50; i++){
       printf("%d", C[i]);
       if (i!=49)
          printf(", ");
   }
   printf(" ]\n");

   return 0;
}
