#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int va, vb, vc;
    printf(" Insira o primeiro valor\n ");
    scanf("%d",&va);
    printf(" Insira o segundo valor\n ");
    scanf("%d",&vb);
    vc = va;
    va = vb;
    vb = vc;
    printf(" Os valores s%co %d e %d\n\n ",198,va,vb);
    system("pause");
    return 0;
}
