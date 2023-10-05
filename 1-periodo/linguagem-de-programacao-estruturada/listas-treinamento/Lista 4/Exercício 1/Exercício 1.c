#include<stdio.h>
#include<stdlib.h>

float calculaDegrau(float hD, float hT)
{
    float res;
    res = (hT * 100) / hD;
    return res;
}
//          {programa principal}
int main ()
{
    float valor_cm, valor_m, degrau;
    printf(" Informe a altura, em cent%cmetros, de um degrau dessa escada\n ", 161);
    scanf("%f",&valor_cm, &valor_m);
    printf(" Informe a altura, em metros, que voc%c deseja atingir\n ", 136);
    scanf("%f",&valor_m);
    degrau = calculaDegrau( valor_cm, valor_m);
    printf(" Voc%c dever%c subir %.2f degraus!\n\n", 136, 160, degrau);
    system("pause");
    return 0;
}
