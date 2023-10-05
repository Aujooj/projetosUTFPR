#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int ciclo, funcionario;
    float salario;
    for (ciclo = 0; ciclo <1000; ciclo++)
    {
        printf(" Informe o c%cdigo do funcion%crio\n ", 162, 160);
        scanf("%d", &funcionario);
        printf(" Informe o sal%crio do funcion%crio\n ", 160, 160);
        scanf("%f", &salario);
        if (salario > 0 && salario < 10000)
        {
            printf("\n O novo sal%crio do funcion%crio %d %c %.2f\n\n", 160, 160, funcionario, 130, salario * 1.55);
        }
        else if (salario >= 10000 && salario <= 25000)
        {
            printf("\n O novo sal%crio do funcion%crio %d %c %.2f\n\n", 160, 160, funcionario, 130, salario * 1.30);
        }
        else if (salario > 25000)
        {
            printf("\n O novo sal%crio do funcion%crio %d %c %.2f\n\n", 160, 160, funcionario, 130, salario * 1.20);
        }
        else
        {
            printf("\n Sal%crio inv%clido!\n\n", 160, 160);
        }
    }
    system("pause");
    return 0;
}
