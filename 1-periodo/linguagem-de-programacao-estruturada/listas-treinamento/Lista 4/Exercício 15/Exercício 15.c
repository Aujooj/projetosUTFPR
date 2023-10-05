#include<stdio.h>
#include<stdlib.h>
//-----------------------------------------------------------------
float conta(float parede, float seno)
{
    float res;
    res = parede/seno;
    return res;
}
//                      {programa principal}
int main ()
{
    float altura, angulo, resultado;
    printf(" Informe o seno do %cngulo\n ", 131);
    scanf("%f", &angulo);
    printf(" Informe a altura da parede\n ");
    scanf("%f", &altura);
    resultado = conta(altura, angulo);
    printf(" A medida da escada %c %.2f\n\n", 130, resultado);
    system("pause");
    return 0;
}
