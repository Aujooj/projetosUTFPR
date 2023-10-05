#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float salario_bruto,proventos;
    printf(" Informe o sal%crio bruto do funcion%crio e os proventos, se houverem\n ",160,160);
    scanf("%f",&salario_bruto);
    printf(" ");
    scanf("%f",&proventos);
    if (salario_bruto <= 50) {
        printf(" O sal%crio ser%c R$: %.2f\n\n ",160,160,salario_bruto+proventos-(salario_bruto*0.05));
    }
    else {
        printf(" O sal%crio ser%c R$: %.2f\n\n ",160,160,salario_bruto+proventos-(salario_bruto*0.1));
    }
    system("pause");
    return 0;
}
