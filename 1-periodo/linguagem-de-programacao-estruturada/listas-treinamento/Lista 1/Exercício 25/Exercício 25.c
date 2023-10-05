#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int total;
    printf(" Informe o valor em segundos\n ");
    scanf("%d",&total);
    printf(" %d:%d:%d.\n\n ",total/3600,(total%3600)/60,(total%3600)%60);
    system("pause");
    return 0;
}
