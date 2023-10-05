#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int codigo;
    float ME, media, nota1, nota2, nota3;
    printf(" Informe o n%cmero de identifica%c%co do aluno\n ",163,135,198);
    scanf("%d",&codigo);
    printf(" Informe as tr%cs notas do aluno\n ",136);
    scanf("%f",&nota1);
    printf(" ");
    scanf("%f",&nota2);
    printf(" ");
    scanf("%f",&nota3);
    printf(" Informe a M%cdia dos exerc%ccios\n ",130,161);
    scanf("%f",&ME);
    media = (nota1+nota2*2+nota3*3+ME)/7;
    if (media >= 9) {
        printf(" O aluno %d de notas %.1f, %.1f e %.1f, de m%cdia de exerc%ccios %.1f, ficou com m%cdia %.1f e obteve o conceito A e est%c aprovado\n\n ",codigo,nota1,nota2,nota3,130,161,ME,130,media,160);
    }
    else
        if ((media < 9)&&(media >= 7.5)) {
        printf(" O aluno %d de notas %.1f, %.1f e %.1f, de m%cdia de exerc%ccios %.1f, ficou com m%cdia %.1f e obteve o conceito B e est%c aprovado\n\n ",codigo,nota1,nota2,nota3,130,161,ME,130,media,160);
    }
    else
        if ((media < 7.5)&&(media >= 6.0)) {
        printf(" O aluno %d de notas %.1f, %.1f e %.1f, de m%cdia de exerc%ccios %.1f, ficou com m%cdia %.1f e obteve o conceito C e est%c aprovado\n\n ",codigo,nota1,nota2,nota3,130,161,ME,130,media,160);
    }
    else
        if ((media < 6.0)&&(media >= 4.0)) {
        printf(" O aluno %d de notas %.1f, %.1f e %.1f, de m%cdia de exerc%ccios %.1f, ficou com m%cdia %.1f e obteve o conceito D e est%c reprovado\n\n ",codigo,nota1,nota2,nota3,130,161,ME,130,media,160);
    }
    else {
        printf(" O aluno %d de notas %.1f, %.1f e %.1f, de m%cdia de exerc%ccios %.1f, ficou com m%cdia %.1f e obteve o conceito E e est%c reprovado\n\n ",codigo,nota1,nota2,nota3,130,161,ME,130,media,160);
    }
    system("pause");
    return 0;
}
