#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int moeda;
    float valor, cotacao;
    printf(" Escolha a moeda desejada:\n\t1. D%clar\n\t2. Real\n ", 162);
    scanf("%d",&moeda);
    printf(" Informe a cota%c%co atual do d%clar\n ", 135, 198, 162);
    scanf("%f",&cotacao);
    switch (moeda) {
        case 1 : {
            printf(" Informe o valor em real que voc%c deseja converter em d%clar\n ", 136, 162);
            scanf("%f",&valor);
            printf(" U$: %.2f\n\n ", valor/cotacao);
            break;
        }
        case 2 : {
            printf(" Informe o valor em d%clar que você deseja converter em real\n ", 162);
            scanf("%f",&valor);
            printf(" R$: %.2f\n\n ", valor*cotacao);
            break;
        }
        default: {
            printf(" Moeda desconhecida!\n\n ");
        }
    }
    system("pause");
    return 0;
}
