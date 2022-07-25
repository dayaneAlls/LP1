#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct retornaValores{
    char cpf[12];
    double valor1;
    double valor2;
    }valores;
void cortaString(char *strEntrada);

int main()
{
    char strEntrada[100];
    int quantidade,i=0;

    printf(" Digite a quantidade de clientes: ");
    scanf("%d",&quantidade);
    printf(" Digite a sequencia de numeros de cada cliente: \n\n");
    do{
        printf(" Cliente %d: ",i+1);
        scanf("%s",strEntrada);
        fflush(stdin);
        cortaString(strEntrada);
        printf(" CPF: %s Soma: %.2f\n\n",valores.cpf,(valores.valor1+valores.valor2));
        quantidade--;
        i++;
    }while (quantidade > 0);
}

void cortaString(char *strEntrada){
    char soma[10],soma2[10],cpf[12];
    int k=0,n=0,i=0,ps=0,ps2=0,ps3=0,cont=0;
    for (int j=0;j<strlen(strEntrada);j++){
        char c=*(strEntrada+j);
        if (isdigit(c)!=0){
            cpf[i]=c;
            i++;
            ps=j+1;
            if (i==11){
                break;}
        }
    }
    cpf[i]='\0';
    strcpy(valores.cpf,cpf);
    for (int j=ps;j<strlen(strEntrada);j++){
        char c=*(strEntrada+j);
        if (isdigit(c)!=0){
            soma[k]= c;
            k++;
        }
        if (c=='.'){
            soma[k] = c;
            k++;
            ps2=j+1;
            break;
        }
    }
    for (int j=ps2;j<strlen(strEntrada);j++){
        char c=*(strEntrada+j);
        if (isdigit(c)!=0){
            soma[k]= c;
            k++;
            cont++;
            ps3=j+1;
        }
        if (cont==2)
            break;
    }
    soma[k]='\0';
    valores.valor1=atof(soma);
    for (int j=ps3;j<strlen(strEntrada);j++){
        char c=*(strEntrada+j);
        if (isdigit(c)!=0){
            soma2[n]= c;
            n++;
        }
        if(c=='.'){
            soma2[n]= c;
            n++;
        }
    }
    soma2[n]='\0';
    valores.valor2=atof(soma2);
}
// cliente1: 7a5a6adfg4a4adsfgsd9fg6aa904aa91#$%11.2342**&774667
// CPF: 75644969049 Soma: 42774778.23
