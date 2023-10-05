#include<stdio.h>
#include<stdlib.h>
//-------------------------------------------------------------------
float mediaAritmetica(float valor1, float valor2, float valor3)
{
    float res;
    res = (valor1 + valor2 + valor3) / 3;
    return res;
}
//-------------------------------------------------------------------
float mediaPonderada(float valor1, float valor2, float valor3)
{
    float res;
    res = (valor1 * 5 + valor2 * 3 + valor3 * 2)/10;
    return res;
}
//-------------------------------------------------------------------
void verificaPeso()
{
    char c1;
    float n1, n2, n3, resultado;
    printf(" Informe as tr%cs notas do aluno e o caractere da escolha de m%cdia\n ", 136, 130);
    scanf("%f", &n1);
    printf(" ");
    scanf("%f", &n2);
    printf(" ");
    scanf("%f", &n3);
    printf(" ");
    fflush(stdin);
    scanf("%c", &c1);
    if (c1 == 'A')
    {
        resultado = mediaAritmetica(n1, n2, n3);
        printf(" A m%cdia desse aluno %c %.1f\n\n", 130, 130, resultado);
    }
    else if (c1 == 'P')
    {
        resultado = mediaPonderada(n1, n2, n3);
        printf(" A m%cdia desse aluno %c %.1f\n\n", 130, 130, resultado);
    }
    else
    {
        printf(" Op%c%co desconhecida!\n\n", 135, 198);
    }
}
//                      {programa principal}
int main ()
{
    verificaPeso();
    system("pause");
    return 0;
}
