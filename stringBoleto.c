#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
   char boleto[100],codch[4], valorch[11];
   char banco[5][24]={"Banco do Brasil","Santander","Caixa Economica Federal","Itau","Citibank"};
   int vetbanco[5]={001,033,104,341,745}, i, j=0, cod;
   float total, valor;

   do{
       printf("\n Digite o codigo de barras do Boleto: ");
       fgets(boleto,100,stdin);

       if(strcmp(boleto,"FIM")==1 || strcmp(boleto,"fim")==1)
       break;

       for(i=0;i<3;i++){
          codch[i] = boleto[i];
       }
       cod = atoi(codch);
       for(i=0;i<5;i++){
          if(cod == vetbanco[i])
             printf("\n Codigo: %d\n Banco: %s\n",vetbanco[i],banco[i]);
       }
       for (i=44;i<strlen(boleto);i++){
            valorch[j] = boleto[i];
            j++;
       }
       valor = atof(valorch)/100;
       total = valor + (valor *0.10);
       printf(" Valor do Boleto: R$ %.2f\n Valor total com multa: R$ %.2f\n\n",valor,total);

   }while(1);
   printf("\n FIM!\n");
}
