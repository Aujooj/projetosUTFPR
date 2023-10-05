#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int valorI;
    float valorA, valorB, valorC;
    printf(" Escolha um valor entre 1, 2 e 3, e escreva-o\n ");
    scanf("%d",&valorI);
    if ((valorI!=1)&&(valorI!=2)&&(valorI!=3))
    {
        printf("\n O valor deve ser 1, 2 ou 3\n ");
        return 0;
    }
    printf(" Insira um valor real\n ");
    scanf("%f",&valorA);
    printf(" Insira outro valor real\n ");
    scanf("%f",&valorB);
    printf(" Insira o %cltimo valor real\n ",163);
    scanf("%f",&valorC);
    printf("\n");
    if (valorI = 1)
    {
        if ((valorA > valorB)&&(valorA > valorC))
        {
            if (valorB > valorC)
                printf(" %.2f, %.2f, %.2f\n\n ",valorA,valorB,valorC);
            else
                printf(" %.2f, %.2f, %.2f\n\n ",valorA,valorC,valorB);
        }
        else if ((valorB > valorA)&&(valorB > valorC))
        {
            if (valorA > valorC)
                printf(" %.2f, %.2f, %.2f\n\n ",valorB,valorA,valorC);
            else
                printf(" %.2f, %.2f, %.2f\n\n ",valorB,valorC,valorA);
        }
        else
        {
            if (valorA > valorB)
                printf(" %.2f, %.2f, %.2f\n\n ",valorC,valorA,valorB);
            else
                printf(" %.2f, %.2f, %.2f\n\n ",valorC,valorB,valorA);
        }
    }
    else if (valorI = 2)
    {
        if ((valorA < valorB)&&(valorA < valorC))
        {
            if (valorB < valorC)
                printf(" %.2f, %.2f, %.2f\n\n ",valorA,valorB,valorC);
            else
                printf(" %.2f, %.2f, %.2f\n\n ",valorA,valorC,valorB);
        }
        else if ((valorB < valorA)&&(valorB < valorC))
        {
            if (valorA  < valorC)
                printf(" %.2f, %.2f, %.2f\n\n ",valorB, valorA, valorC);
            else
                printf(" %.2f, %.2f, %.2f\n\n ",valorB, valorC, valorA);
        }
        else
        {
            if (valorA  < valorB)
                printf(" %.2f, %.2f, %.2f\n\n ",valorC, valorA, valorB);
            else
                printf(" %.2f, %.2f, %.2f\n\n ",valorC, valorB, valorA);
        }
    }
    else
    {
        if ((valorA < valorB)&&(valorA < valorC))
            printf(" %.2f, %.2f, %.2f\n\n ",valorB, valorA, valorC);
        else if ((valorB < valorA)&(valorB < valorC))
            printf(" %.2f, %.2f, %.2f\n\n ",valorA, valorB, valorC);
        else
            printf(" %.2f, %.2f, %.2f\n\n ",valorA, valorC, valorB);
    }

    system("pause");
    return 0;
}
