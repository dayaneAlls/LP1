#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main ()
{
    char plano[10];
    int idade, numDepend;
    float totalAPagar;

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite o numero de dependentes: ");
    scanf("%i", &numDepend);

    if (idade >=16 && idade <20)
        strcpy( plano, "Jovem");
    else if (idade >= 20)
        strcpy( plano, "Adulto");

    if (strcmp (plano, "Jovem")== 0)
        totalAPagar = 200+12*(30+(numDepend*10));
    else if (strcmp (plano, "Adulto")== 0)
        totalAPagar = 300+(60*12);
    else if (strcmp (plano, "Adulto")== 0 && numDepend == 0)
        totalAPagar = 300+12*(60-(30*0.1));

    printf("\n\nO nome do plano e: %s\n", plano);
    printf("O numero de dependentes e: %i\n", numDepend);
    printf("O total a ser pago e: R$%f\n", totalAPagar);
}
