#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int result,varA;
    printf(" Insira um numero para A\n ");
    scanf("%d",&varA);
    result = (2*varA%3)-varA;
    printf(" Considerando: %d como o valor de variavel, o resultado %c: %d\n\n ",varA,130,result);
    system("pause");
    return 0;
}
