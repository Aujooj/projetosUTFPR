#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float custof;
    printf(" Insira o custo de f%cbrica do carro\n ",160);
    scanf("%f",&custof);
    printf(" O custo ao consumidor ser%c de R$: %.2f\n\n ",160,custof*1.73);
    system("pause");
    return 0;
}
