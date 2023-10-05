#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num;
    printf(" Insira um n%cmero inteiro\n ",163);
    scanf("%d",&num);
    if ((num%2)==0) {
        printf(" O n%cmero %d %c par e ",163,num,130);
    }
    else {
        printf(" O n%cmero %d %c %cmpar e ",163,num,130,161);
    }
    if (num >= 0) {
        printf("positivo\n\n ");
    }
    else {
        printf("negativo\n\n ");
    }
    system("pause");
    return 0;
}
