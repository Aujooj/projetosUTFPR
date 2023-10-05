#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int valor_y,valor_z;
    float conta1,conta2;
    printf(" Insira um valor para Y\n ");
    scanf("%d",&valor_y);
    printf(" Insira um valor para Z\n ");
    scanf("%d",&valor_z);
    printf(" O resultado da express%co %c %.0f\n\n ",198,130,sqrt(valor_y*(pow(valor_y,22)+pow(valor_z,33))));
    system("pause");
    return 0;
}
