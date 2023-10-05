#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int ciclo, numFilhos, totalFilhos = 0, filhoESalarioP = 0;
    float salario, totalSalario = 0;
    for ( ciclo = 1; ciclo <= 100; ciclo++)
    {
        printf(" Informe o sal%crio do funcion%crio\n ", 160, 160);
        scanf("%f", &salario);
        printf(" Informe o n%cmero de filhos\n ", 163);
        scanf("%d", &numFilhos);
        totalSalario = totalSalario + salario;
        totalFilhos = totalFilhos + numFilhos;
        if (salario <= 300 && numFilhos > 0)
        {
            filhoESalarioP++;
        }
    }
    printf(" A m%cdia sal%crial destes funcion%crios %c %.2f\n", 130, 160, 160, 130, (float) totalSalario / 100);
    printf(" A m%cdia do n%cmero de filhos %c %.0f\n", 130, 163, 130, (float) totalFilhos / 100);
    printf(" O percentual de pessoas com sal%crio de at%c R$ 300,00, que possuem filhos %c %d%c\n\n", 160, 130, 130, filhoESalarioP, 37);
    system("pause");
    return 0;
}
