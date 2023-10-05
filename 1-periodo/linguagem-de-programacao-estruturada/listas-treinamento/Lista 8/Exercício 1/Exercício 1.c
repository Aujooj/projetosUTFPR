#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float matriz[16];
    int ciclo;
    printf(" Informe 15 valores e o programa vai escolher o maior\n ");
    for ( ciclo = 0, matriz[16] = 0; ciclo < 15; ciclo++)
    {
        fflush(stdin);
        scanf("%f", &matriz[ciclo]);
        printf(" ");
        if (matriz[ciclo] > matriz[16])
            matriz[16] = matriz[ciclo];
    }
    printf("O maior %c: %.1f\n\n", 130, matriz[16]);
    system("pause");
    return 0;
}
