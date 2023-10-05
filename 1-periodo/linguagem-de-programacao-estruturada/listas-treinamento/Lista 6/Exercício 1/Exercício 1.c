#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int numAluno1, numAluno2, altura1, altura2 = 0, altura3 = 300, ciclo = 1, baixo, alto;
    do
    {
        printf(" Insira o n%cmero do aluno\n ", 163);
        scanf("%d", &numAluno1);
        printf(" Insira a altura do aluno, em cent%cmetros\n ", 161);
        scanf("%d", &altura1);
        printf("\n");
        if (altura1 > altura2)
        {
            altura2 = altura1;
            alto = ciclo;
        }
        if (altura1 < altura3)
        {
            altura3 = altura1;
            baixo = ciclo;
        }
        ciclo++;
        if (ciclo == 6)
        {
            printf(" O aluno mais alto %c o %d e ele tem %.2f metros de altura\n\n", 130, alto, (float)altura2/100);
            printf(" O aluno mais baixo %c o %d e ele tem %.2f metros de altura\n\n", 130, baixo, (float)altura3/100);
        }
    } while (ciclo <= 5);
    system("pause");
    return 0;
}
