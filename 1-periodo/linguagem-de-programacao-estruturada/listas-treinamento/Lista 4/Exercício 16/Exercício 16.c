#include<stdio.h>
#include<stdlib.h>
//------------------------------------------------------------
float conta(float saco, float gato)
{
    float res;
    res = ((((saco * 1000) / (gato * 2)) - 5) * (gato * 2)) / 1000;
    return res;
}
//                    {programa principal}
int main ()
{
    int peso_saco, quant_racao;
    printf(" Informe o peso do saco de ra%c%co, em kg\n ", 135, 198);
    scanf("%d", &peso_saco);
    printf(" Informe a quantidade de ra%c%co fornecida pra cada gato, em gramas\n ", 135, 198);
    scanf("%d", &quant_racao);
    printf(" Ap%cs cinco dias ainda restam %.2f kg de ra%c%co\n\n", 162, conta(peso_saco, quant_racao), 135, 198);
    system("pause");
    return 0;
}
