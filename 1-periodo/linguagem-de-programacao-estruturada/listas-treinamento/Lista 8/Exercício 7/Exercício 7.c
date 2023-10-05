#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int Vet1[5], Vet2[5], ciclo;
    for ( ciclo = 0; ciclo < 5; ciclo++)
    {
        printf(" ");
        scanf("%d", &Vet1[ciclo]);
    }
    printf("\n");
    for ( ciclo = 0; ciclo < 5; ciclo++)
    {
        printf(" ");
        scanf("%d", &Vet2[ciclo]);
    }
    for ( ciclo = 0; ciclo < 5; ciclo++)
        printf("\n Soma dos elementos (valor %d): %d", ciclo + 1, Vet1[ciclo] + Vet2[ciclo]);
    printf("\n");
    for ( ciclo = 0; ciclo < 5; ciclo++)
    {
        if (Vet1[ciclo] > Vet2[ciclo])
            printf("\n Diferença dos elementos (valor %d): %d", ciclo + 1, Vet1[ciclo] - Vet2[ciclo]);
        else
            printf("\n Diferença dos elementos (valor %d): %d", ciclo + 1, Vet2[ciclo] - Vet1[ciclo]);
    }
    printf("\n");
    for ( ciclo = 0; ciclo < 5; ciclo++)
        printf("\n Produto dos elementos (valor %d): %d", ciclo + 1, Vet1[ciclo] * Vet2[ciclo]);
    printf("\n");
    for ( ciclo = 0; ciclo < 5; ciclo++)
    {
        if (Vet1[ciclo] == 0 || Vet2[ciclo] == 0)
            printf("\n Produto dos elementos (valor %d): Imposs%cvel divis%co por 0!", ciclo + 1, 161, 198);
        else
            printf("\n Divis%co dos elementos (valor %d): %.2f", 198, ciclo + 1, (float)Vet1[ciclo] / Vet2[ciclo]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
