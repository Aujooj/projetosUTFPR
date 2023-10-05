#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int codigo;
    float media, nota1, nota2, nota3;
    printf(" Informe o c%cdigo do aluno\n ",162);
    scanf("%d",&codigo);
    printf(" Informe as tr%cs notas do aluno\n ",136);
    scanf("%f",&nota1);
    printf(" ");
    scanf("%f",&nota2);
    printf(" ");
    scanf("%f",&nota3);
    if ((nota1 > nota2)&&(nota1 > nota3)) {
        media = (nota1*4+nota2*3+nota3*3)/10;
        printf(" O aluno %d teve as notas %.1f, %.1f e %.1f, est%c com m%cdia %.1f e est%c ",codigo,nota1,nota2,nota3,160,130,media,160);
    }
    else
        if ((nota2 > nota1)&&(nota2 > nota3)) {
            media = (nota2*4+nota1*3+nota3*3)/10;
        printf(" O aluno %d teve as notas %.1f, %.1f e %.1f, est%c com m%cdia %.1f e est%c ",codigo,nota1,nota2,nota3,160,130,media,160);
    }
    else {
        media = (nota3*4+nota1*3+nota2*3)/10;
        printf(" O aluno %d teve as notas %.1f, %.1f e %.1f, est%c com m%cdia %.1f e est%c ",codigo,nota1,nota2,nota3,160,130,media,160);
    }
    if (media >= 5) {
        printf("APROVADO\n\n ");
    }
    else {
        printf("REPROVADO\n\n ");
    }
    system("pause");
    return 0;
}
