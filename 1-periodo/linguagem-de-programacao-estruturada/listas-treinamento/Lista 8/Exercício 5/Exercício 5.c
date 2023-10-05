#include<stdio.h>
#include<stdlib.h>
//------------------------------------------------
void exercicio()
{
    int ciclo, N[15], P[15];
    printf(" Informe 15 valores positivos\n ");
    for ( ciclo = 0; ciclo < 15; ciclo++)
    {
        P[ciclo] = 0;
        fflush(stdin);
        scanf("%d", &N[ciclo]);
        if (N[ciclo] % 2 == 0)
        {
            P[ciclo] = N[ciclo];
            N[ciclo] = 0;
        }
        printf(" ");
    }
    printf("\n %cmpares: ", 214);
    for ( ciclo = 0; ciclo < 15; ciclo++)
    {
        if (N[ciclo] != 0 && N[ciclo] > 0)
        printf("%d ", N[ciclo]);
    }
    printf("\n\n Pares: %", 214);
    for ( ciclo = 0; ciclo < 15; ciclo++)
    {
        if (P[ciclo] != 0 && P[ciclo] > 0)
        printf("%d ", P[ciclo]);
    }
    printf("\n\n");
}
//------------------------------------------------
int main ()
{
    exercicio();
    system("pause");
    return 0;
}
