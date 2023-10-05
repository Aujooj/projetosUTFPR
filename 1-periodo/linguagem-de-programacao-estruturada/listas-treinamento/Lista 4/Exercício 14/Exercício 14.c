#include<stdio.h>
#include<stdlib.h>
//-------------------------------------------------------------------
float conta(float tempo, float velocidade)
{
    float res;
    res = (velocidade * (tempo / 60)) / 12;
    return res;
}
//-------------------------------------------------------------------
void escreveCalculo(float tempo, float velocidade)
{
    float resultado;
    resultado = conta(tempo, velocidade);
    printf(" A quantidade de combust%cvel gasta nessa viagem foi %.2f litros\n\n", 162, resultado);
}
//                      {programa principal}
int main ()
{
    float tempo_viagem, velocidade_m;
    printf(" Informe o tempo gasto na viagem, em minutos\n ");
    scanf("%f", &tempo_viagem);
    printf(" Informe a velocidade m%cdia durante a viagem\n ", 130);
    scanf("%f", &velocidade_m);
    escreveCalculo(tempo_viagem, velocidade_m);
    system("pause");
    return 0;
}
