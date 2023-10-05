#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int tempF;
    printf(" Insira um valor de temperatura em Fahrenheit\n ");
    scanf("%d",&tempF);
    printf(" O equivalente %c %d %cF em Celcius %c %.1f %cC.\n\n ",133,tempF,248,130,(float)(tempF-32)*5/9,248);
    system("pause");
    return 0;
}
