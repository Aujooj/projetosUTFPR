#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int valorX, valorY, valorZ;
    printf(" Insira tr%cs valores\n ",136);
    scanf("%d",&valorX);
    printf(" ");
    scanf("%d",&valorY);
    printf(" ");
    scanf("%d",&valorZ);
    if ((valorX < valorY)&&(valorX < valorZ)) {
        printf(" O menor deles %c %d\n\n ",130,valorX);
    }
    else
        if ((valorY < valorX)&&(valorY < valorZ)) {
        printf(" O menor deles %c %d\n\n ",130,valorY);
    }
    else {
        printf(" O menor deles %c %d\n\n ",130,valorZ);
    }
    system("pause");
    return 0;
}
