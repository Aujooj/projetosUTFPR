#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float nota1,nota2,peso1,peso2;
    printf(" Insira o valor da primeira nota\n ");
    scanf("%f",&nota1);
    printf(" Insira o valor do primeiro peso\n ");
    scanf("%f",&peso1);
    printf(" Insira o valor da segunda nota\n ");
    scanf("%f",&nota2);
    printf(" Insira o valor do segundo peso\n ");
    scanf("%f",&peso2);
    printf(" A m%cdia ponderada obtida pelo aluno %c %.2f\n\n ",130,130,(nota1*peso1+nota2*peso2)/(peso1+peso2));
    system("pause");
    return 0;
}
