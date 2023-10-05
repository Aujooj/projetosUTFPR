#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float taxa,tempo,valor,conta;
    printf(" Insira a taxa de juros\n ");
    scanf("%f",&taxa);
    printf(" Insira o tempo em dias\n ");
    scanf("%f",&tempo);
    printf(" Insira o valor total a ser pago\n ");
    scanf("%f",&valor);
    conta = valor+(valor*(taxa/100)*tempo);
    printf(" O valor da presta%c%co ser%c de %.2f\n\n ",135,198,160,conta);
    system("pause");
    return 0;
}
