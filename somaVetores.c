#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int A[20], B[20], C[20], i;

   for (i=0; i<20; i++){
       printf("Digite o valor %d do vetor A: ", i+1);
       scanf("%d", &A[i]);
   }
   for (i=0; i<20; i++){
       printf("Digite o valor %d do vetor B: ", i+1);
       scanf("%d", &B[i]);
   }
    for (i=0; i<20; i++){
       C[i] = A[i] + B[i];
   }

   printf("\n Vetor A: [ ");
   for (i=0; i<20; i++){
       printf("%d", A[i]);
       if (i!=19)
          printf(", ");
   }
   printf(" ]");

   printf("\n\n Vetor B: [ ");
   for (i=0; i<20; i++){
       printf("%d", B[i]);
       if (i!=19)
          printf(", ");
   }
   printf(" ]");

   printf("\n\n Vetor C: [ ");
   for (i=0; i<20; i++){
       printf("%d", C[i]);
       if (i!=19)
          printf(", ");
   }
   printf(" ]\n");

   return 0;
}
