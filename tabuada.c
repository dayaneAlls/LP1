#include <stdio.h>
#include <locale.h>

float dobro();
void tabuada(int num, int qtde);
float calcMedia(float prova1, float prova2);
void media();
float calcDesconto(float valor);
void venda();


int main()
{
    int opcao, numero, qtdeElem;

    printf("\nInforme uma opcao de 1 a 4: ");
    scanf("%d", &opcao);

    while (opcao < 4)
    {
        switch (opcao)
        {
            case 1:
                dobro();
                break;
            case 2:
                venda();
                break;
            case 3:
                media();
                break;
            case 4:
                printf("Informe o numero da tabuada:");
                scanf("%d", &numero);
                printf("Informe a quantidade de elementos:");
                scanf("%d", &qtdeElem);
                tabuada(numero,qtdeElem);
                break;
        }
        printf("Escolha uma opcao de 1 a 4: ");
        scanf("%i", &opcao);
    }
}


float dobro(){
   float numero, dobro;
   printf("\n Informe um numero: ");
   scanf("%f", &numero);
   dobro = numero * 2;
   return dobro;
}

void tabuada(int num, int qtde){
    int cont, resultado;
    for(cont=1; cont <= qtde; cont++){
        resultado = num * cont;
        printf("\n%d x %d = %d", num, cont, resultado);
    }
}

float calcMedia(float prova1, float prova2){
    return (prova1+prova2)/2;
}

void media(){
    int cod;
    float prova1, prova2;
    printf("\nInforme um codigo: ");
    scanf("%d", &cod);

    while (cod > 0){
        printf("\nInforme a nota 1: ");
        scanf("%f", &prova1);
        printf("\nInforme a nota 2: ");
        scanf("%f", &prova2);
        printf("\nMedia: %.2f", calcMedia(prova1, prova2));
        if (calcMedia(prova1,prova2) >= 5)
            printf("\nAprovado");
        else
            printf("\nReprovado");
        printf("\nInforme um codigo: ");
        scanf("%d", &cod);
    }
}

float calcDesconto(float valor){
     float desc;
     if (valor >= 800)
        desc = valor * 0.15;
     else
        desc = 0;
     return desc;
}

void venda(){
    int cod, qtdVenda;
    float precUnit, valCompra, valPagar, desconto;

    printf("\n Informe um codigo: ");
    scanf("%d", &cod);
    printf("\n Informe a quantidade vendida: ");
    scanf("%d", &qtdVenda);
    printf("\n Informe o preco unitario: ");
    scanf("%f", &precUnit);

    valCompra = precUnit * qtdVenda;
    desconto = calcDesconto(valCompra);
    valPagar = valCompra - desconto ;

    printf("\n Valor da compra: %.2f \n Desconto: %.2f \n Total a pagar: %.2f", valCompra, desconto, valPagar);
}
