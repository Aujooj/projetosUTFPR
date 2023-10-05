#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//-----------------------------------------------------------------
void calculaExpressao(float x1, float y1, float x2, float y2)
{
    float conta, raiz;
    conta = pow(x2 - x1, 2) + pow(y2 - y1, 2);
    printf(" O resultado da express%co %c %.0f\n\n", 198, 130, sqrt(conta));
}
//                 {programa principal}
int main ()
{
    float valorXP, valorYP, valorXQ, valorYQ;
    printf(" Informe as coordenadas dos 2 pontos, primeiro x e y do primeiro, e depois x e y do segundo\n ");
    scanf("%f", &valorXP);
    printf(" ");
    scanf("%f", &valorYP);
    printf(" ");
    scanf("%f", &valorXQ);
    printf(" ");
    scanf("%f", &valorYQ);
    calculaExpressao(valorXP, valorYP, valorXQ, valorYQ);
    system("pause");
    return 0;
}
