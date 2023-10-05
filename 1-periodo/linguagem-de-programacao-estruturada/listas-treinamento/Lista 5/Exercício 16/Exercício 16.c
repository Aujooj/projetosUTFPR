#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int filho, salario, somaSalario = 0, somaFilhos = 0, totalFilhos = 0, ciclo = 100;
    while (ciclo >= 1)
    {
        printf(" Informe o sal%crio\n ", 160);
        scanf("%d", &salario);
        printf(" Informe o n%cmero de filhos\n ", 163);
        scanf("%d", &filho);
        somaSalario = somaSalario + salario;
        if (filho >= 0)
        {
            somaFilhos = somaFilhos + filho;
            printf(" %d\n", somaFilhos);
            if (salario <= 300)
            {
                totalFilhos++;
            }
        }
        ciclo--;
    }
    printf("\n A m%cdia sal%crial %c %.2f\n", 130, 160, 130, (float)somaSalario/100);
    printf(" A m%cdia do n%cmero de filhos %c %.0f\n", 130, 163, 130, (float)somaFilhos/100);
    printf(" O percentual de pessoas com sal%crio de at%c R$ 300.00, que possuem filhos %c %.2f%\n\n", 160, 130, 130, (float)totalFilhos/100);
    system("pause");
    return 0;
}

