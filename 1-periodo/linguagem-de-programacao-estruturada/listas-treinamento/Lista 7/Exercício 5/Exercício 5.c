#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int idade, idoso = 0, jovem = 0, pessoas;
    float altura, media = 0, maiorA = 0;
    for (pessoas = 1; pessoas <= 15; pessoas++)
    {
        printf(" Informe a sua idade\n ");
        scanf("%d", &idade);
        printf(" Informe a sua altura\n ");
        scanf("%f", &altura);
        if (idade > 50)
        {
            idoso++;
        }
        else if (idade >= 10 && idade <= 20)
        {
            jovem++;
            media = media + altura;
        }
        if (altura > maiorA)
        {
            maiorA = altura;
        }
        printf("\n");
    }
    printf(" A quantidade de pessoas com idade superior a 50 anos %c %d\n", 130, idoso);
    printf(" A m%cdia das alturas das pessoas com idade entre 10 e 20 anos %c %.2f\n", 130, 130, (float) media / jovem);
    printf(" A maior altura encontrada %c %.2f\n\n", 130, maiorA);
    system("pause");
    return 0;
}
