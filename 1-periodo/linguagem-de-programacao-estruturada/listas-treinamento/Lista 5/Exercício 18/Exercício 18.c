#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int serie, quant, ciclo = 1, redacao, p2 = 0;
    float p1 = 0, p3 = 0;
    while (ciclo == 1)
    {
        printf(" Informe em que s%crie voc%c est%c (primeira-1, segunda-2, terceira-3 ou quarta-4)\n ", 130, 136, 160);
        scanf("%d", &serie);
        printf(" Informe quantos livros voc%c l%c por m%cs\n ", 136, 136, 136);
        scanf("%d", &quant);
        printf(" Informe se voc%c gosta de reda%c%co (Sim-1 ou N%co-0)\n ", 136, 135, 198, 198);
        scanf("%d", &redacao);
        if (serie == 0)
        {
            ciclo = 0;
        }
        else
        {
            if (serie == 3)
            {
                p1++;
            }
            if (serie == 4 && quant > p2)
            {
                p2 = quant;
            }
            if (serie == 3 && redacao == 0)
            {
                p3++;
            }
        }
    }
    printf("\n A quantidade de alunos que est%c na terceira s%crie %c %.0f\n", 160, 130, 130, p1);
    printf(" A maior quantidade de livros lidos por um aluno que est%c na quarta s%crie %c %d\n", 160, 130, 130, p2);
    if (p1 >= 1 && p2 >= 1)
    {
        printf(" A porcentagem de alunos que n%co gostam de fazer reda%c%co e que est%co na terceira s%crie %c %.0f%c\n\n", 198, 135, 198, 198, 130, 130, (p3/p1)*100, 37);
    }
    else
    {
        printf(" A porcentagem de alunos que n%co gostam de fazer reda%c%co e que est%co na terceira s%crie %c 0%c\n\n", 198, 135, 198, 198, 130, 130, 37);
    }
    system("pause");
    return 0;
}
