#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int numAux = 0, num1 = 0, num2 = 0, num3 = 0, ciclo;
    printf(" Informe quantos n%cmeros deseja inserir\n ", 163);
    scanf("%d", &ciclo);
    while (ciclo >= 1)
    {
        printf(" Informe um n%cmero\n ", 163);
        scanf("%d", &numAux);
        if ((numAux >= 0) && (numAux <= 24))
        {
            num1++;
        }
        else if ((numAux >= 25) && (numAux <= 50))
        {
            num2++;
        }
        else
        {
            num3++;
        }
        ciclo--;
    }
    printf(" %d est%co no grupo 1, %d est%co no grupo 2 e %d est%co no grupo 3\n\n", num1, 198, num2, 198, num3, 198);
    system("pause");
    return 0;
}
