#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char sexo;
    float altura, media = 0, maiorA = 0, menorA = 3;
    int ciclo, homens = 0, mulheres = 0;
    for ( ciclo = 0; ciclo < 50; ciclo++)
    {
        printf(" Informe o seu sexo\n ");
        fflush(stdin);
        scanf("%c", &sexo);
        printf(" Informe a sua altura\n ");
        scanf("%f", &altura);
        if (sexo == 'F')
        {
            mulheres++;
            media = media + altura;
            if (altura > maiorA)
            {
                maiorA = altura;
            }
            if (altura < menorA)
            {
                menorA = altura;
            }
        }
        else if (sexo == 'M')
        {
            homens++;
            if (altura > maiorA)
            {
                maiorA = altura;
            }
            if (altura < menorA)
            {
                menorA = altura;
            }
        }
        else
        {
            printf(" Op%c%co inv%clida!\n", 135, 198, 160);
        }
        printf("\n");
    }
    printf(" A maior e a menor altura do grupo s%co: %.2f e %.2f;\n", 198, maiorA, menorA);
    printf(" A m%cdia de altura das mulheres %c %.2f;\n", 130, 130, (float) media / mulheres);
    printf(" O n%cmero de homens %c %d.\n\n", 163, 130, homens);
    system("pause");
    return 0;
}
