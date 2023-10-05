#include<stdio.h>
#include<stdlib.h>
//--------------------------------------------------------------
float converteMoeda(float cotacao, float moeda)
{
    float res;
    res = cotacao * moeda;
    return res;
}
//                    {programa principal}
int main ()
{
    float cotacao, moeda, resultado;
    int opcao;
    printf(" Escolha a moeda que voc%c quer saber:\n\t1. D%clar\n\t2. Real\n ", 136, 162);
    scanf("%d", &opcao);
    printf(" Informe a cotacao atual dessa moeda\n ");
    scanf("%f", &cotacao);
    printf(" Informe o valor que voc%c deseja converter\n ", 136);
    scanf("%f", &moeda);
    resultado = converteMoeda(cotacao, moeda);
    if (opcao == 1)
    {
        printf(" R$%.2f equivalem a US$%.2f\n\n", moeda, resultado);
    }
    else if (opcao == 2)
    {
        printf(" US$%.2f equivalem a R$%.2f\n\n", moeda, resultado);
    }
    else
    {
        printf(" Op%c%co desconhecida!\n\n", 135, 198);
    }
    system("pause");
    return 0;
}

