#include<stdio.h>
#include<stdlib.h>
//-----------------------------------------------------------------------
float precoKW;
//-----------------------------------------------------------------------
void valorQuilowatt(float salario)
{
    precoKW = salario/5;
    printf(" O pre%co do quilowatt %c R$ %.2f\n", 135, 130, precoKW);
}
//-----------------------------------------------------------------------
void valorPagar(float quant)
{
    printf(" O valor a ser pago por esta resid%cncia %c R$ %.2f\n", 136, 130, precoKW*quant);
}
//-----------------------------------------------------------------------
void valorDesconto(float quant)
{
    printf(" O valor a ser pago por esta resid%cncia, com desconto de 15%c, %c R$ %.2f\n\n", 136, 37, 130, (precoKW*quant)*0.85);
}
//                       {programa principal}
int main ()
{
    float valor, quant_kW;
    printf(" Informe o valor do sal%crio m%cnimo\n ", 160, 161);
    scanf("%f", &valor);
    printf(" Informe a quantidade de quilowatts consumida pela resid%cncia\n ", 136);
    scanf("%f", &quant_kW);
    valorQuilowatt(valor);
    valorPagar(quant_kW);
    valorDesconto(quant_kW);
    system("pause");
    return 0;
}
