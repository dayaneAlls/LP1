#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main ()
{
    char Plano[10];
    int Idade, NumDepend;
    float TotalAPagar;

    printf("Digite sua idade: ");
    scanf("%i", &Idade);
    printf("Digite o numero de dependentes: ");
    scanf("%i", &NumDepend);

    if (Idade >=16 && Idade <20)
        strcpy( Plano, "Jovem");
    if (Idade >= 20)
        strcpy( Plano, "Adulto");

    if (strcmp (Plano, "Jovem")== 0)
        TotalAPagar = 200+12*(30+(NumDepend*10));
    if (strcmp (Plano, "Adulto")== 0)
        TotalAPagar = 300+(60*12);
    if (strcmp (Plano, "Adulto")== 0 && NumDepend == 0)
        TotalAPagar = 300+12*(60-(30*0.1));

    printf("\n\nO nome do plano e: %s\n", Plano);
    printf("O numero de dependentes e: %i\n", NumDepend);
    printf("O total a ser pago e: R$%f\n", TotalAPagar);
}
