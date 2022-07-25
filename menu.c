#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void media(float *vetor);
void mediaPonderada(float *vetor);
void desvioPadrao(float *vetor);
void maiorMenor(float *vetor);

int main()
{
   float vetor[5];
   int opcao, i;

        printf("\n              MENU > ESTATISTICAS                    \n");
        printf("\n1 para- Entrar com os dados (digite 5 valores);");
        printf("\n2 para- Calcular a media aritmetica simples dos dados;");
        printf("\n3 para- Calcular a media ponderada dos dados (fornecer 5 pesos);");
        printf("\n4 para- Calcular o desvio padrao dos dados;");
        printf("\n5 para- Achar o maior e menor valor;");
        printf("\n6 para- Sair do programa;");
        printf("\n.................................................................\n");

   do{
        printf("\nDigite o numero da opcao do menu: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:
                for (i=0; i<5; i++){
                    printf("Digite o valor %d:  ", i+1);
                    scanf("%f", &vetor[i]);
                    }
                break;
            case 2:
                media(vetor);
                break;
            case 3:
                mediaPonderada(vetor);
                break;
            case 4:
                desvioPadrao(vetor);
                break;
            case 5:
                maiorMenor(vetor);
                break;
            case 6:
                printf("\nFim!\n");
                break;
            default:
                printf("\nOpcao inválida!");
                break;
        }
  }while(opcao < 6 );
}

void media(float *vetor){
  int i;
  float m = 0, soma = 0;
  for (i = 0; i < 5; i++){
      soma += vetor[i];
  }
  m = soma / 5;
  printf ("\nMedia artimetica simples: %.2f\n", m);
}

void mediaPonderada(float *vetor){
    float peso[5];
    float mediaP=0, somaV=0, somaP=0;
    int i;
    for(i=0; i<5; i++){
       printf("Digite o peso do valor %d:  ", i+1);
       scanf("%f", &peso[i]);
       somaP+= peso[i];
    }
    for(i=0; i<5; i++){
       somaV+= (vetor[i]*peso[i]);
    }
    mediaP = somaV/somaP;
    printf("\nMedia ponderada: %.2f\n", mediaP);
}

void desvioPadrao(float *vetor){
     float dP, somaD, med, somaV;
     int i;
     for(i=0; i<5; i++){
        somaV += vetor[i];
     }
     med=somaV/5;
     for(i=0; i<5; i++){
        somaD += pow(vetor[i]-med, 2);
     }
     dP = somaD/5;
     printf("\nDesvio padrao: %.5f\n",sqrt(dP));
}

void maiorMenor(float *vetor){
     float maior, menor;
     int i;
     for (i=0; i<5; i++){
          if (vetor[i] > maior)
             maior = vetor[i];
     }
     for (i=0; i<5; i++){
          if (vetor[i] < menor)
             menor = vetor[i];
     }
     printf("\nMaior valor: %.2f", maior);
     printf("\nMenor valor: %.2f\n", menor);
}
