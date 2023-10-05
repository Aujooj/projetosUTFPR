#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int codigo;
    float salario;
    printf(" Informe o n%cmero do funcion%crio\n ",163,160);
    scanf("%d",&codigo);
    printf(" Informe o sal%crio atual do funcion%crio\n ",160,160);
    scanf("%f",&salario);
    if (salario <= 0) {
        printf(" Valor indevido para sal%crio\n\n ",160);
    }
    else
        if ((salario > 0)&&(salario <=400.00)) {
        printf(" O funcion%crio %d tinha o sal%crio R$ %.2f, receber%c um aumento de 15%c e ter%c o sal%crio de R$ %.2f \n\n ",160,codigo,160,salario,160,37,160,160,salario*1.15);
    }
    else
        if ((salario >= 400.01)&&(salario <=700.00)) {
        printf(" O funcion%crio %d tinha o sal%crio R$ %.2f, receber%c um aumento de 12%c e ter%c o sal%crio de R$ %.2f \n\n ",160,codigo,160,salario,160,37,160,160,salario*1.12);
    }
    else
        if ((salario >= 700.01)&&(salario <=1000.00)) {
        printf(" O funcion%crio %d tinha o sal%crio R$ %.2f, receber%c um aumento de 10%c e ter%c o sal%crio de R$ %.2f \n\n ",160,codigo,160,salario,160,37,160,160,salario*1.1);
    }
    else
        if ((salario >= 1000.01)&&(salario <=1800.00)) {
        printf(" O funcion%crio %d tinha o sal%crio R$ %.2f, receber%c um aumento de 7%c e ter%c o sal%crio de R$ %.2f \n\n ",160,codigo,160,salario,160,37,160,160,salario*1.07);
    }
    else
        if ((salario >= 1800.01)&&(salario <=2500.00)) {
        printf(" O funcion%crio %d tinha o sal%crio R$ %.2f, receber%c um aumento de 4%c e ter%c o sal%crio de R$ %.2f \n\n ",160,codigo,160,salario,160,37,160,160,salario*1.04);
    }
    else {
        printf(" O funcion%crio %d tinha o sal%crio R$ %.2f, e n%co receber%c um aumento\n\n ",160,codigo,160,salario,198,160);
    }
    system("pause");
    return 0;
}
