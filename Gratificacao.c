#include <stdio.h>

int main()
{
    int Area, Codigo;
    float SalBase, TempServico, Gratificacao, TotalGratific;
    TotalGratific=0;

    printf("Digite o codigo do funcionario: ");
    scanf("%d", &Codigo);

    while (Codigo > 0)
    {
        Area = Codigo/100;
        printf("Digite o salario base do funcionario: ");
        scanf("%f", &SalBase);
        printf("Digite o tempo de servico do funcionario: ");
        scanf("%f", &TempServico);

        if(Area == 1 && TempServico <= 5)
           Gratificacao = SalBase*0.025;
        else if(Area == 2 && TempServico <= 5)
           Gratificacao = SalBase*0.035;
        else if(Area == 3 && TempServico <= 5)
           Gratificacao = SalBase*0.040;
        else if(Area == 1 && TempServico > 5)
           Gratificacao = SalBase*0.045;
        else if(Area == 2 && TempServico > 5)
           Gratificacao = SalBase*0.055;
        else(Area == 3 && TempServico > 5)
           Gratificacao = SalBase*0.065;

        TotalGratific += Gratificacao;
        printf("O valor da gratificacao do funcionario e: R$%f\n\n", Gratificacao);
        printf("Digite o codigo do funcionario: ");
        scanf("%d", &Codigo);
    }
    printf("O total pago de gratificacoes e: R$%f", TotalGratific);
}
