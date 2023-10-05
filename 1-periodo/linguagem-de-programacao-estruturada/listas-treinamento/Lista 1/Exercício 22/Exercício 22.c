#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int anos,meses,dias;
    printf(" Digite os anos de idade da pessoa\n ");
    scanf("%d",&anos);
    printf(" Digite os meses de idade da pessoa\n ");
    scanf("%d",&meses);
    printf(" Digite os dias de idade da pessoa\n ");
    scanf("%d",&dias);
    printf(" A idade da pessoa em dias %c %d\n\n ",130,anos*365+meses*30+dias);
    system("pause");
    return 0;
}

