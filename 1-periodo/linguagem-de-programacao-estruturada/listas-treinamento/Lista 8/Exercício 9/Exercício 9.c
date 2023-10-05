#include<stdio.h>
#include<stdlib.h>
void posicao()
{
    int vetor[10], num, ciclo;
    printf(" Informe um numero\n ");
    scanf("%d", &num);
    for (ciclo = 0; ciclo < 10; ciclo++)
    {
        if (vetor[ciclo] == num)
        {
            printf(" %d\n", ciclo);
        }
    }
}

int main ()
{
    posicao();
    system("pause");
    return 0;
}
