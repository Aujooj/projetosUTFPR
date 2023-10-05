#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num1 = 0, num2 = 1, num3, soma, ciclo;
    printf(" Informe quantos termos da s%crie Fibonacci deseja que sejam apresentados\n ", 130);
    scanf("%d", &ciclo);
    printf("\n");
    while (ciclo >= 1)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        soma = soma + num1;
        printf("| %d |", num1);
        ciclo--;
    }
    printf("\n\n A soma dos termos %c %d\n\n", 130, soma);
    system("pause");
    return 0;
}
