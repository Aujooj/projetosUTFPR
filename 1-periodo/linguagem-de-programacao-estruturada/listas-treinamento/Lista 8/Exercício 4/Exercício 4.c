#include<stdio.h>
#include<stdlib.h>
//------------------------------------------------
void exercicio()
{
    int ciclo, N[15], P[15], I[15];
    printf(" Informe 15 valores positivos\n ");
    for ( ciclo = 0; ciclo < 15; ciclo++)
    {
        P[ciclo] = 0;
        I[ciclo] = 0;
        fflush(stdin);
        scanf("%d", &N[ciclo]);
        if (N[ciclo] % 2 == 0)
            P[ciclo] = N[ciclo];
        else
            I[ciclo] = N[ciclo];
        printf(" ");
    }
    printf(" %cmpares: ", 214);
    for ( ciclo = 0; ciclo < 15; ciclo++)
    {
        if (I[ciclo] != 0 && I[ciclo] > 0)
        printf("%d ", I[ciclo]);
    }
    printf("\n\n Pares: %", 214);
    for ( ciclo = 0; ciclo < 15; ciclo++)
    {
        if (P[ciclo] != 0 && P[ciclo] > 0)
        printf("%d ", P[ciclo]);
    }
    printf("\n");
}
//------------------------------------------------
int main ()
{
    exercicio();
    system("pause");
    return 0;
}
