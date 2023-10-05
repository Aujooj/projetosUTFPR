#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int valorA,valorB,valorC,valorD,valorU,valorV,valorX,valorY;
    printf(" Insira um valor para A\n ");
    scanf("%d",&valorA);
    printf(" Insira um valor para B\n ");
    scanf("%d",&valorB);
    printf(" Insira um valor para C\n ");
    scanf("%d",&valorC);
    printf(" Insira um valor para D\n ");
    scanf("%d",&valorD);
    printf(" Insira um valor para U\n ");
    scanf("%d",&valorU);
    printf(" Insira um valor para V\n ");
    scanf("%d",&valorV);
    valorX = (valorD/(valorA*valorD-valorB*valorC ))*valorU-(valorB/(valorA*valorD-valorB*valorC))*valorV;
    valorY = (-valorC/(valorA*valorD-valorB*valorC))*valorU+(valorA/(valorA*valorD-valorB*valorC))*valorV;
    printf(" A solu%c%co para x %c %d e a solu%c%co para y %c %d\n\n ",135,198,130,valorX,135,198,130,valorY);
    system("pause");
    return 0;
}
