#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num_vend,quant_vendas;
    float comissao,salario_fix;
    printf(" Insira o n%cmero do vendedor\n ",163);
    scanf("%d",&num_vend);
    printf(" Insira o sal%crio fixo dele\n ",160);
    scanf("%f",&salario_fix);
    printf(" Insira o total de vendas por ele efetuadas\n ");
    scanf("%d",&quant_vendas);
    printf(" Insira o percentual ele que ganha sobre o total de vendas\n ");
    scanf("%f",&comissao);
    printf(" O sal%crio do vendedor %d ser%c R$: %.2f\n\n ",160,num_vend,160,salario_fix+quant_vendas*(comissao/100+1));
    system("pause");
    return 0;
}
