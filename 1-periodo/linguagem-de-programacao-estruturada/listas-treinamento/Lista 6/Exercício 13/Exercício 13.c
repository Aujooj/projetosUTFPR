#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int idade, maiorIdade1 = 0, idadeRuim = 0, maiorIdade2 = 0, maiorIdade3 = 0, opniao, ciclo = 0, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    do
    {
        printf(" Informe a sua idade\n ");
        scanf("%d", &idade);
        printf(" Informe a sua opni%co:\n\t5. %ctimo\n\t4. Bom\n\t3. Regular\n\t2. Ruim\n\t1. P%cssimo\n ", 198, 224, 130);
        scanf("%d", &opniao);
        if (opniao == 5)
        {
            otimo++;
            if (idade > maiorIdade1)
            {
                maiorIdade1 = idade;
            }
            ciclo++;
        }
        else if (opniao == 4)
        {

            bom++;
            ciclo++;
        }
        else if (opniao == 3)
        {

            regular++;
            ciclo++;
        }
        else if (opniao == 2)
        {
            if (idade > maiorIdade2)
            {
                maiorIdade2 = idade;
            }
            ruim++;
            idadeRuim = idadeRuim + idade;
            ciclo++;
        }
        else if (opniao == 1)
        {
            if (idade > maiorIdade3)
            {
                maiorIdade3 = idade;
            }
            pessimo++;
            ciclo++;
        }
        else
        {
            printf(" Op%c%co inv%clida!\n\n", 135, 198, 160);
        }
    } while (ciclo < 100);
    printf(" Houveram %d respostas %ctimo\n", otimo, 162);
    printf(" A diferen%ca percentual entre respostas bom e regular %c %.0f%c\n", 135, 130, (float)(bom / regular - 1) * 100, 37);
    printf(" A m%cdia de idade das pessoas que responderam ruim %c %.1f\n", 130, 130, (float)idadeRuim/ruim);
    printf(" A percentagem de respostas p%cssimo %c %d%c e a maior idade que utilizou esta op%c%co %c %d\n", 130, 130, pessimo, 37, 135, 198, 130, maiorIdade3);
    printf(" A diferen%ca de idade entre a maior idade que respondeu %ctimo e a maior idade que respondeu ruim %c %d\n\n", 135, 162, 130, maiorIdade1 - maiorIdade2);
    system("pause");
    return 0;
}
