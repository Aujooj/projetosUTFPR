#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float ki, kf, cc;
    printf(" Informe a quilometragem inicial\n ");
    scanf("%f",&ki);
    printf(" Informe a quilometragem final\n ");
    scanf("%f",&kf);
    printf(" Informe o consumo de combust%cvel em litros\n ",161);
    scanf("%f",&cc);
    printf(" O consumo  de combust%cvel do autom%cvel, em Km/L, %c de %.2f\n\n ",161,162,130,(kf-ki)/cc);

    system("pause");
    return 0;
}
