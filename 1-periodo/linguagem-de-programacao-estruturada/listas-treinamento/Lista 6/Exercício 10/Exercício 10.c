#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char sexo;
    int pessoas = 0, sim = 0, nao = 0, feminino = 0, masculino = 0, resp, t1 = 0, t2 = 0;
    do
    {
        printf(" Informe o seu sexo:\n\t<F>eminino\n\t<M>asculino\n ");
        fflush(stdin);
        scanf("%c", &sexo);
        printf(" Voc%c gosta do produto?:\n\t0. N%co\n\t1. Sim\n ", 136, 198);
        scanf("%d", &resp);
        printf("\n ");
        if (resp == 1)
        {
            sim++;
        }
        else if (resp == 0)
        {
            nao++;
        }
        else
        {
            printf(" Resposta inv%clida\n\n", 160);
        }
        if (sexo == 'F')
        {
            feminino++;
            if (resp == 1)
            {
                t1++;
            }
        }
        else if (sexo == 'M')
        {
            masculino++;
            if (resp == 0)
            {
                t2++;
            }
        }
        else
        {
            printf(" Resposta inv%clida\n\n", 160);
        }
        pessoas++;
    } while (pessoas < 2000);
    printf("\n %d responderam SIM\n %d responderam N%cO\n %.0f%c das mulheres responderam SIM e %.0f%c dos homens responderam N%cO\n\n", sim, nao, 199, (float)t1/feminino * 100, 37, (float)t2/masculino * 100, 37, 199);
    system("pause");
    return 0;
}
