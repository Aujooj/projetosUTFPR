#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int codigo, numVagas, numH, numM;
    do
    {
        printf(" Informe o c%cdigo do curso\n ", 162);
        scanf("%d", &codigo);
        if (codigo != 0)
        {
            printf(" Informe o n%cmero de vagas\n ", 163);
            scanf("%d", &numVagas);
            printf(" Informe o n%cmero de candidatos do sexo masculino\n ", 163);
            scanf("%d", &numH);
            printf(" Informe o n%cmero de candidatos do sexo feminino\n ", 163);
            scanf("%d", &numM);
            printf(" No curso %d, s%co %.1f candidatos por vaga e %.0f%c s%co do sexo feminino\n\n", codigo, 198, (float)(numH + numM)/numVagas, (float)(numM)/(numH + numM) * 100, 37, 198);
        }
    } while (codigo != 0);
    system("pause");
    return 0;
}
