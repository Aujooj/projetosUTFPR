#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num1,num2,conta;
    printf(" Insira a base\n ");
    scanf("%d",&num1);
    printf(" Insira o expoente\n ");
    scanf("%d",&num2);
    conta = pow(num1,num2);
    printf(" O resultado de %d elevado %c %d %c igual a %d \n\n",num1,133,num2,130,conta);
    system("pause");
    return 0;
}
