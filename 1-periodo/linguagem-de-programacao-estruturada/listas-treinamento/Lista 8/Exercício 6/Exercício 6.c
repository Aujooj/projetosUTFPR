#include<stdio.h>
#include<stdlib.h>
//------------------------------------------------------
void notas(int num)
{
    float G1[num], G2[num], G3[num];
    int ciclo;
    printf(" Informe as notas G1 dos alunos\n");
    for ( ciclo = 0; ciclo < num; ciclo++)
    {
        printf(" ");
        scanf("%f", &G1[ciclo]);
    }
    printf("\n Informe as notas G2 dos alunos\n");
    for ( ciclo = 0; ciclo < num; ciclo++)
    {
        printf(" ");
        scanf("%f", &G2[ciclo]);
    }
    for ( ciclo = 0; ciclo < num; ciclo++)
        G3[ciclo] = (G1[ciclo] + G2[ciclo]) / 2;
    for ( ciclo = 0; ciclo < num; ciclo++)
        printf("\n Nota1: %.2f, Nota2: %.2f, M%cdia: %.2f;", G1[ciclo], G2[ciclo], 130, G3[ciclo]);
}

//------------------------------------------------------
int main ()
{
    int numAlunos;
    printf(" Informe quantos alunos!\n ");
    scanf("%d", &numAlunos);
    system("cls");
    notas(numAlunos);
    printf("\n\n");
    return 0;
}
