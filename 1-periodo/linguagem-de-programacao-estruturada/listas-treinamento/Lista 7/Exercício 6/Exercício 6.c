#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char nomeFuncionario[20], sexo;
    int ciclo, idade, normal = 0, obeso = 0;
    float altura, peso, IMC;
    for (ciclo = 1; ciclo <= 50; ciclo++)
    {
        printf(" Informe o seu nome\n ");
        scanf("%s", &nomeFuncionario);
        printf(" Informe o seu sexo\n ");
        fflush(stdin);
        scanf("%c", &sexo);
        printf(" Informe o seu peso\n ");
        scanf("%f", &peso);
        printf(" Informe a sua altura\n ");
        scanf("%f", &altura);
        printf(" Informe a sua idade\n ");
        scanf("%d", &idade);
        IMC = (float) peso / (altura * altura);
        printf(" A(O) funcion%cria(o) %s tem IMC %.2f\n\n", 160, nomeFuncionario, IMC);
        if (IMC >= 30)
        {
            obeso++;
        }
        else if ((IMC <= 25 && sexo == 'M') || (IMC <= 27 && sexo == 'F'))
        {
            normal++;
        }
    }
    printf(" Obesos: %d\n Peso normal: %d\n\n", obeso, normal);
    system("pause");
    return 0;
}
