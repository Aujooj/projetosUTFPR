#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float num, maior = 0;
    int contagem = 50;
    while (contagem >= 1)
    {
        printf(" Informe um n%cmero positivo\n ", 163);
        scanf("%f", &num);
        if (num > maior)
        {
            maior = num;
        }
        contagem--;
    }
    printf(" O maior n%cmero informado foi %.2f\n\n", 163, maior);
    system("pause");
    return 0;
}

