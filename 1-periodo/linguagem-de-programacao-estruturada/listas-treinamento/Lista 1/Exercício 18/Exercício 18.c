#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num_funcionario,num_filhos;
    float horas_trab,valor_hora;
    printf(" Informe o n%cmero do funcion%crio\n ",163,160);
    scanf("%d",&num_funcionario);
    printf(" Informe a quantidade de horas trabalhadas mensais\n ");
    scanf("%f",&horas_trab);
    printf(" Informe o valor que ele recebe por hora\n ");
    scanf("%f",&valor_hora);
    printf(" Informe o n%cmero de filhos menores de 14 anos dele\n ",163);
    scanf("%d",&num_filhos);
    printf(" O sal%crio do funcion%crio %d ser%c R$: %.2f\n\n ",160,160,num_funcionario,160,horas_trab*valor_hora+num_filhos*(0.1*horas_trab*valor_hora));
    system("pause");
    return 0;
}
