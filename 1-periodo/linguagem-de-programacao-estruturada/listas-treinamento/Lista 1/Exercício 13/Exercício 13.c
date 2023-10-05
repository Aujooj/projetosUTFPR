#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int codigo,quant;
    float valor;
    printf(" Insira o c%cdigo da pe%ca desejada\n ",162,135);
    scanf("%d",&codigo);
    printf(" Insira o valor da pe%ca desejada\n ",135);
    scanf("%f",&valor);
    printf(" Insira a quantidade da pe%ca desejada\n ",135);
    scanf("%d",&quant);
    printf(" O valor total em estoque da pe%ca %d %c de R$: %.2f\n\n ",135,codigo,130,quant*valor);
    system("pause");
    return 0;
}
