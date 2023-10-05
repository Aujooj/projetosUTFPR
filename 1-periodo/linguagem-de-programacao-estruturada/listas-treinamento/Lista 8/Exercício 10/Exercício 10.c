#include<stdio.h>
#include<stdlib.h>
//------------------------------------------------
void exercicio(int X)
{
    int ciclo, N[100], Ne[99], Mul[99];
    printf(" Informe 100 valores inteiros\n ");
    for ( ciclo = 0; ciclo < 100; ciclo++)
    {
        Ne[ciclo] = 0;
        Mul[ciclo] = 0;
        fflush(stdin);
        scanf("%d", &N[ciclo]);
        if (N[ciclo] < 0)
            Ne[ciclo] = N[ciclo];
        if (N[ciclo] % X == 0)
            Mul[ciclo] = N[ciclo];
        printf(" ");
    }
    printf(" Multiplos de X: ", 214);
    for ( ciclo = 0; ciclo < 100; ciclo++)
    {
        if (Mul[ciclo] != 0)
        printf("%d ", Mul[ciclo]);
    }
    printf("\n\n Negativos: %", 214);
    for ( ciclo = 0; ciclo < 100; ciclo++)
    {
        if (Ne[ciclo] != 0)
        printf("%d ", Ne[ciclo]);
    }
    printf("\n");
}
//------------------------------------------------
int main ()
{
    int num;
    printf(" Informe um numero\n ");
    scanf("%d", &num);
    exercicio(num);
    system("pause");
    return 0;
}
