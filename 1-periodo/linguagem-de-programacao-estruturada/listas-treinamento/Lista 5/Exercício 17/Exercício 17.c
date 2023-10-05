#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char sexo;
    int idade, quant, ciclo = 1, menor10 = 0, FL = 0, idadeH = 0, HL = 0, NH = 0, pessoas = -1;
    while (ciclo == 1)
    {
        pessoas++;
        printf(" Informe seu sexo <M>asculino ou <F>eminino\n ");
        fflush(stdin);
        scanf("%c", &sexo);
        printf(" Informe sua idade\n ");
        scanf("%d", &idade);
        printf(" Informe quantos livros que voc%c leu no ano de 2010\n ", 136);
        scanf("%d", &quant);
        if (idade < 0)
        {
            ciclo = 0;
        }
        else
        {
            if (idade < 10)
            {
                menor10 = menor10 + quant;
            }
            if (sexo == 'F' && quant >= 5)
            {
                FL++;
            }
            if (sexo == 'M' && quant < 5)
            {
                HL++;
                idadeH = idadeH + idade;
            }
            if (quant == 0)
            {
                NH++;
            }
        }
    }
    printf("\n A quantidade total de livros lidos pelos entrevistados menores de 10 anos %c %d\n", 130, menor10);
    printf(" A quantidade de mulheres que leram 5 livros ou mais %c %d\n", 130, FL);
    printf(" A m%cdia de idade dos homens que leram menos que 5 livros %c %d\n", 130, 130, idadeH/HL);
    printf(" O percentual de pessoas que n%co leram livros %c %.2f%c\n\n", 198, 130, (float)NH/pessoas, 37 );
    system("pause");
    return 0;
}
