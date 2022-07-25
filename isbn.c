#include <stdio.h>
#include <string.h>

int main()
{
    char isbn[15],*cod={"0123456789"};

    while (strcmp(strupr(isbn),"FIM")!=0){
        printf("\n Digite o codigo ISBN: ");
        gets(isbn);
        int s1=0,s2=0,x=10;
        for (int i=0;i<strlen(isbn);i++){
            for (int j=0;j<strlen(cod);j++){
                if(isbn[i]==*(cod+j)){
                    s1+=(*(cod+j)-'0');
                    s2+=s1;
                }
                if(isbn[i] == 'X'){
                    s1+=x;
                    s2+=s1;
                    break;
                }
            }
        }
        if (s2%11 == 0)
            printf(" ISBN e valido: %s\n",isbn);
        else
            printf(" ISBN invalido: %d\n",(s2%11));
    }
    return 0;
}
