#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int vA, vB, vC, vD;
    printf(" Insira o primeiro valor\n ");
    scanf("%d",&vA);
    printf(" Insira o segundo valor\n ");
    scanf("%d",&vB);
    printf(" Insira o terceiro valor\n ");
    scanf("%d",&vC);
    vD = vA;
    vA = vB;
    vB = vC;
    vC = vD;
    printf(" Os valores s%co %d, %d e %d\n\n ",198,vA,vB,vC);
    system("pause");
    return 0;
}
