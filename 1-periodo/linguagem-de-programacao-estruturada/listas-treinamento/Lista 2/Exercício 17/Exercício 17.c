#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int dia, mes, ano;
    printf(" Informe o n%cmero do m%cs\n ",163,136);
    scanf("%d",&mes);
    if ((mes <= 0)||(mes > 12))
        printf(" O n%cmero digitado n%co representa um m%cs\n\n ",163,198,136);
    else
        if (mes == 1) {
            printf(" Janeiro\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 31))
                printf(" %d/%d/%d - %d de janeiro de %d\n\n ",dia,mes,ano,dia,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
        if (mes == 2) {
            printf(" Fevereiro\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((ano%4)==0) {
                if ((dia >= 1)&&(dia <= 29))
                    printf(" %d/%d/%d - %d de fevereiro de %d\n\n ",dia,mes,ano,dia,ano);
                else
                    printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
            }
            else {
                if ((dia >= 1)&&(dia <= 28))
                    printf(" %d/%d/%d - %d de fevereiro de %d\n\n ",dia,mes,ano,dia,ano);
                else
                    printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
            }
        }
        if (mes == 3) {
            printf(" Mar%co\n",135);
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 31))
                printf(" %d/%d/%d - %d de mar%co de %d\n\n ",dia,mes,ano,dia,135,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
        if (mes == 4) {
            printf(" Abril\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 30))
                printf(" %d/%d/%d - %d de abril de %d\n\n ",dia,mes,ano,dia,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
        if (mes == 5) {
            printf(" Maio\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 31))
                printf(" %d/%d/%d - %d de maio de %d\n\n ",dia,mes,ano,dia,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
        if (mes == 6) {
            printf(" Junho\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 30))
                printf(" %d/%d/%d - %d de junho de %d\n\n ",dia,mes,ano,dia,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
        if (mes == 7) {
            printf(" Julho\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 31))
                printf(" %d/%d/%d - %d de julho de %d\n\n ",dia,mes,ano,dia,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
        if (mes == 8) {
            printf(" Agosto\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 31))
                printf(" %d/%d/%d - %d de agosto de %d\n\n ",dia,mes,ano,dia,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
        if (mes == 9) {
            printf(" Setembro\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 30))
                printf(" %d/%d/%d - %d de setembro de %d\n\n ",dia,mes,ano,dia,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
        if (mes == 10) {
            printf(" Outubro\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 31))
                printf(" %d/%d/%d - %d de outubro de %d\n\n ",dia,mes,ano,dia,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
        if (mes == 11) {
            printf(" Novembro\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 30))
                printf(" %d/%d/%d - %d de novembro de %d\n\n ",dia,mes,ano,dia,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
        if (mes == 12) {
            printf(" Dezembro\n");
            printf(" Informe o dia e o ano\n ");
            scanf("%d",&dia);
            printf(" ");
            scanf("%d",&ano);
            if ((dia >= 1)&&(dia <= 31))
                printf(" %d/%d/%d - %d de dezembro de %d\n\n ",dia,mes,ano,dia,ano);
            else
                printf(" O dia n%co atende os pr%c-requisitos deste m%cs\n\n ",198,130,136);
        }
    system("pause");
    return 0;
}
