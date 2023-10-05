#include<stdio.h>
#include<stdlib.h>
//-------------------------------------------------------
void somaTermos(float termoI, float razao)
{
    float termoN;
    termoN = termoI + (4 * razao);
    printf(" A soma dos cinco primeiros termos dessa progress%co aritm%ctica %c %.2f\n\n", 198, 130, 130, ((termoI + termoN)*5)/2);
}
//                      {programa principal}
int main ()
{
    float termo1, razao;
    printf(" Informe o primeiro termo de uma progress%co aritm%ctica\n ", 198, 130);
    scanf("%f", &termo1);
    printf(" Informe a raz%co de uma progress%co aritm%ctica\n ", 198, 198, 130);
    scanf("%f", &razao);
    somaTermos(termo1, razao);
    system("pause");
    return 0;
}
