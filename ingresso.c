#include <stdio.h>

int main ()
{
    float renda, popular, geral, arquibancada, cadeiras, publicTotal;

    printf("\nDigite o publico total do jogo: ");
    scanf("%f", &publicTotal);

    popular = (publicTotal*0.1)*5;
    geral = (publicTotal*0.5)*10;
    arquibancada = (publicTotal*0.3)*20;
    cadeiras = (publicTotal*0.1)*30;
    renda = popular+geral+arquibancada+cadeiras;

    printf("\nA renda do jogo e: R$%f\n\n", renda);
}
