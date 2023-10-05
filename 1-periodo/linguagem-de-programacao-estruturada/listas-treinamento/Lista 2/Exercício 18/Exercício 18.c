#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int hora1, hora2, minutos1, minutos2, conta1, conta2;
    printf(" Informe os hor%crios de in%ccio e fim (m%cximo de 24 horas)\n\n Informe a hora do in%ccio jogo\n ",160,161,160,161);
    scanf("%d",&hora1);
    printf(" Informe os minutos do in%ccio do jogo\n ",
161);
    scanf("%d",&minutos1);
    printf(" Informe a hora do fim jogo\n ");
    scanf("%d",&hora2);
    printf(" Informe os minutos do fim do jogo\n ");
    scanf("%d",&minutos2);
    conta1 = hora2 - hora1;
    conta2 = minutos2 - minutos1;
    if (conta1 >= 0)
    {
        if (conta2 >= 0)
            printf(" O jogo teve dura%c%co de %d:%d horas\n\n ",135,198,conta1,conta2);
        else
            printf(" O jogo teve dura%c%co de %d:%d horas\n\n ",135,198,conta1-1,conta2 + 60);
    }
    else if (conta1 < 0)
    {
        if (conta2 >= 0)
            printf(" O jogo teve dura%c%co de %d:%d horas\n\n ",135,198,conta1 + 24,conta2);
        else
            printf(" O jogo teve dura%c%co de %d:%d horas\n\n ",135,198,conta1 + 23,conta2 + 60);
    }

    system("pause");
    return 0;
}

