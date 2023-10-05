#include<stdio.h>
#include<stdlib.h>

#define TAM_MAX 10
//---------------------------------------------------------
int funcao(int parametro1[TAM_MAX], int parametro2)
{
    int ciclo, res, teste;
    for (ciclo = 0, res = 0; ciclo < 10; ciclo++)
    {
        teste = parametro1[ciclo];
        if (teste == parametro2)
            res++;
    }
    return res;
}
//                 {programa principal}
int main ()
{
    int vetor[TAM_MAX], num = 20, ciclo, res;
    printf(" Informe 10 valores inteiros de 1 a 20\n ");
    for (ciclo = 0; ciclo < 10; ciclo++)
    {
        fflush(stdin);
        scanf("%d", &vetor[ciclo]);
        printf(" ");
    }
    printf("\n O n%cmero de %d %c: %d\n\n", 163, num, 130, funcao(vetor, num));
    system("pause");
    return 0;
}
//---------------------------------------------------------
