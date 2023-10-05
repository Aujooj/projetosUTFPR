#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//---------------------------------------------------------------
float bhaskara1(float delta, int a, int b)
{
    float res;
    res = (-b + sqrt(delta)) / (2 * a);
    return res;
}
//---------------------------------------------------------------
float bhaskara2(float delta, int a, int b)
{
    float res;
    res = (-b - sqrt(delta)) / (2 * a);
    return res;
}
//---------------------------------------------------------------
float calculaDelta(int A, int B, int C)
{
    float res;
    res = pow(B, 2) - (4 * A * C);
    return res;
}
//                     {programa principal}
int main ()
{
    int valorA, valorB, valorC;
    float delta, resultado1, resultado2;
    printf(" Informe os coeficientes a, b e c\n ");
    scanf("%d", &valorA);
    printf(" ");
    scanf("%d", &valorB);
    printf(" ");
    scanf("%d", &valorC);
    delta = calculaDelta(valorA, valorB, valorC);
    if (delta < 0)
    {
        printf(" A equa%c%co n%co possui valores reais\n\n", 135, 198, 198);
    }
    else if (delta == 0)
    {
        resultado1 = bhaskara1(delta, valorA, valorB);
        printf(" A equa%c%co possui apenas um resultado real ou possui dois resultados iguais (essas duas afirma%c%ces s%co equivalentes), e ele %c: %.2f", 135, 198, 135, 228, 198, 130, resultado1);
    }
    else
    {
        resultado1 = bhaskara1(delta, valorA, valorB);
        resultado2 = bhaskara2(delta, valorA, valorB);
        printf(" A equa%c%co possui dois resultados reais distintos, e eles s%co: %.2f e %.2f\n\n", 135, 198, 198, resultado1, resultado2);
    }
    system("pause");
    return 0;
}
