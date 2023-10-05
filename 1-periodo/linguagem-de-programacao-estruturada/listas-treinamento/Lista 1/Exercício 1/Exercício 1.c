#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int NUM1,NUM2;
    printf(" Informe o primeiro n%cmero\n ",163);
    scanf("%d",&NUM1);
    printf(" Informe o segundo n%cmero\n ",163);
    scanf("%d",&NUM2);
    printf(" O resultado da m%cdia aritm%ctica entre %d e %d %c %.1f\n\n ",130,130,NUM1,NUM2,130,(float)(NUM1+NUM2)/2);
    system("pause");
    return 0;
}
