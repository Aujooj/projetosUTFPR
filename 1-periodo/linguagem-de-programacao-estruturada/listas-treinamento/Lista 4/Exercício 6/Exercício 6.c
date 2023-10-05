#include<stdio.h>
#include<stdlib.h>
//------------------------------------------------
void converteDolar(float valorEuro)
{
    printf(" %.2f euros equivalem a US$ %.2f\n", valorEuro, (valorEuro*2.6)/1.95);
}
//------------------------------------------------
void converteReal(float valorEuro)
{
    printf(" %.2f euros equivalem a R$ %.2f\n\n", valorEuro, valorEuro*2.6);
}
//                 {programa principal}
int main ()
{
    float valor;
    printf(" Informe a valor de euros que voc%c deseja converter\n ", 136);
    scanf("%f", &valor);
    converteDolar(valor);
    converteReal(valor);
    system("pause");
    return 0;
}
