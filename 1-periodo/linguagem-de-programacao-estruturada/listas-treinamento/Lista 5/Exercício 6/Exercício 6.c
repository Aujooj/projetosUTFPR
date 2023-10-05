#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int ciclo = 0, num;
    printf(" Escreva 0 quando quiser sair\n");
    while (ciclo == 0)
    {
        printf(" Informe um n%cmero inteiro\n ", 163);
        scanf("%d", &num);
        if (num != 0)
        {
            if (num % 2 == 1)
            {
                printf(" O n%cmero inserido foi %d e seu sucessor par %c %d\n\n", 163, num, 130, num + 1);
            }
            else
            {
                printf(" O n%cmero inserido foi %d e seu sucessor par %c %d\n\n", 163, num, 130, num + 2);
            }
        }
        else
        {
            ciclo++;
        }
    }

    system("pause");
    return 0;
}
