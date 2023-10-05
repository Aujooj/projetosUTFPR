#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int moeda;
    float cotacao, valor;
    printf(" Escolha a moeda a ser convertida:\n 1 %c D%cllar\n 2 %c Real\n ",45,162,45);
    scanf("%d",&moeda);
    printf(" Informe a cota%c%co atual dela\n ",135,198);
    scanf("%f",&cotacao);
    printf(" Informe o valor a ser convertido\n ");
    scanf("%f",&valor);
    if (moeda==1) {
        printf(" O total %c de U$ %.2f\n\n ",130,cotacao*valor);
    }
    else
        if (moeda==2) {
        printf(" O total %c de R$ %.2f\n\n ",130,cotacao*valor);
    }
    else {
        printf(" Valor desconhecido para a moeda\n\n ");
    }
    system("pause");
    return 0;
}
