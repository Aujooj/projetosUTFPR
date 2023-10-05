#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int dias,conta_ano,conta_mes;
    printf(" Informe a sua idade em dias\n ");
    scanf("%d",&dias);
    printf(" Voc%c tem %d anos de idade, ou, %d meses de idade, ou %d dias de idade.\n\n ",136,dias/365,dias/30,dias);
    system("pause");
    return 0;
}
