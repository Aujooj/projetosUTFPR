#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float altura,raio;
    const float pi = 3.14;
    printf(" Insira um valor para a altura do cilindro\n ");
    scanf("%f",&altura);
    printf(" Insira um valor para o raio do cilindro\n ");
    scanf("%f",&raio);
    printf(" O volume do cilindro %c de %.2f\n\n ",130,pi*(pow(raio,2))*altura);
    system("pause");
    return 0;
}
