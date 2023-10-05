#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num_aulas, num_vistas;
    float nota1, nota2;
    printf(" Insira a sua primeira nota\n ");
    scanf("%f",&nota1);
    printf(" Insira a sua segunda nota\n ");
    scanf("%f",&nota2);
    printf(" Insira o n%cmero de aulas ministradas\n ",163);
    scanf("%d",&num_aulas);
    printf(" Insira quantas delas voc%c assistiu\n ",136);
    scanf("%d",&num_vistas);
    printf(" A m%cdia final deste aluno %c %.1f e ele est%c ", 130, 130, (nota1 + nota2)/2, 160);
    if (((nota1 + nota2)/2 >= 6)&&(num_vistas/num_aulas >= 0,75))
        printf("aprovado\n\n ");
    else
        printf("reprovado\n\n ");
    system("pause");
    return 0;
}
