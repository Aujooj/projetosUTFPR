#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int ciclo = 0, num, dividendo = 0, divisor;
    printf(" Escreva 0 quando quiser sair\n");
    while (ciclo == 0)
    {
        printf(" Informe um n%cmero inteiro\n ", 163);
        scanf("%d", &num);
        if (num != 0)
        {
            dividendo = dividendo + num;
            divisor++;
        }
        else
        {
            ciclo++;
        }
    }
    printf(" A m%cdia aritm%ctica de todos os valores entrados %c %.1f\n\n", 130, 130, 130, (float)dividendo/divisor);
    system("pause");
    return 0;
}
