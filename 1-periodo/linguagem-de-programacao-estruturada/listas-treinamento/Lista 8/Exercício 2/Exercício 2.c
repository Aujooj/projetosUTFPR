#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int F[20], ciclo;
    for ( ciclo = 1; ciclo < 21; ciclo++)
        printf(" %d\n", ciclo * (ciclo - 1));
    printf("\n");
    system("pause");
    return 0;
}
