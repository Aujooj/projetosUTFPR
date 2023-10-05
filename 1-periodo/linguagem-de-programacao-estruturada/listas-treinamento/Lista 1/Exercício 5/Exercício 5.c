#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float altura, comprimento, largura;
    printf(" Insira um valor para a altura em metros\n ");
    scanf("%f",&altura);
    printf(" Insira um valor para o comprimento em metros\n ");
    scanf("%f",&comprimento);
    printf(" Insira um valor a largura em metros\n ");
    scanf("%f",&largura);
    printf(" O volume da caixa retangular %c de %.2f m%c\n\n ",130,comprimento*largura*altura,252);
    system("pause");
    return 0;
}
