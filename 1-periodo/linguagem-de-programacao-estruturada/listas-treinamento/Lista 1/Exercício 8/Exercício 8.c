#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float altura, base;
    printf(" Insira um valor para a altura do tri%cngulo\n ",131);
    scanf("%f",&altura);
    printf(" Insira um valor para a base do tri%cngulo\n ",131);
    scanf("%f",&base);
    printf(" A %crea do tri%cngulo %c de %.2f\n\n ",160,131,130,(base*altura)/2);
    system("pause");
    return 0;
}
