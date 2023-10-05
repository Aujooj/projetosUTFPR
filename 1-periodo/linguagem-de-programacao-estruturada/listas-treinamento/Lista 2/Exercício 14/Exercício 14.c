#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float indice_poluicao;
    printf(" Informe o indice de polui%c%co\n ",135,198);
    scanf("%f",&indice_poluicao);
    if (indice_poluicao < 0.05)
        printf(" O indice de polui%c%co est%c bom\n\n ",135,198,160);
    else if ((indice_poluicao >= 0.05)&&(indice_poluicao <= 0.25))
        printf(" O indice de polui%c%co est%c aceit%cvel\n\n ",135,198,160,160);
    else if ((indice_poluicao >= 0.3)&&(indice_poluicao < 0.4))
        printf(" As ind%cstrias do 1%c grupo devem ser intimadas a suspenderem suas atividades\n\n ",163,248);
    else if ((indice_poluicao > 0.4)&&(indice_poluicao < 0.5))
        printf(" As ind%cstrias do 1%c e 2%c grupo devem ser intimadas a suspenderem suas atividades\n\n ",163,248,248);
    else
        printf(" Todas as ind%cstrias devem ser intimadas a suspenderem suas atividades\n\n ",163);
    system("pause");
    return 0;
}
