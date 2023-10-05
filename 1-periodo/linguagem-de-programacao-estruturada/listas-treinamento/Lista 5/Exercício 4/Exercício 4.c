#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int numAux, num1 = 0, num2 = 0, num3 = 0, ciclo, media1 = 0, media2 = 0, media3 = 0;
    printf(" Informe quantos n%cmeros deseja inserir\n ", 163);
    scanf("%d", &ciclo);
    while (ciclo >= 1)
    {
        printf(" Informe um n%cmero\n ", 163);
        scanf("%d", &numAux);
        if ((numAux >= 0) && (numAux <= 24))
        {
            media1 = media1 + numAux;
            num1++;
        }
        else if ((numAux >= 25) && (numAux <= 50))
        {
            media2 = media2 + numAux;
            num2++;
        }
        else
        {
            media3 = media3 + numAux;
            num3++;
        }
        ciclo--;
    }

    printf("\n No grupo 1 existem %d n%cmeros e a m%cdia aritm%ctica entre eles %c %.2f\n", num1, 163, 130, 130, 130, (float)(media1 / num1));
    printf(" No grupo 2 existem %d n%cmeros e a m%cdia aritm%ctica entre eles %c %.2f\n", num2, 163, 130, 130, 130, (float)(media2 / num2));
    printf(" No grupo 3 existem %d n%cmeros e a m%cdia aritm%ctica entre eles %c %.2f\n\n", num3, 163, 130, 130, 130, (float)(media3 / num3));
    system("pause");
    return 0;
}

