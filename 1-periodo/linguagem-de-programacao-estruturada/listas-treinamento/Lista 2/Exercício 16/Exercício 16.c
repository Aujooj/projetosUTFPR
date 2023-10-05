#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int valorX, valorY, valorZ;
    printf(" Insira os valores dos 3 lados do tri%cngulo\n",131);
    printf(" Valor de X: ");
    scanf("%d",&valorX);
    printf(" Valor de Y: ");
    scanf("%d",&valorY);
    printf(" Valor de Z: ");
    scanf("%d",&valorZ);
    if ((valorX+valorY>valorZ)&&(valorX+valorZ>valorY)&&(valorY+valorZ>valorX))
    {
        if ((valorX==valorY)&&(valorY==valorZ))
            printf("\n Esse tri%cngulo %c equil%ctero\n\n ",131,130,160);
        else if ((valorX!=valorY)&&(valorY!=valorZ))
            printf("\n Esse tri%cngulo %c escaleno\n\n ",131,130);
        else
            printf("\n Esse tri%cngulo %c is%csceles\n\n ",131,130,162);
    }
    else
        printf("\n Os valores informados n%co formam um tri%cngulo\n\n ",198,131);

    system("pause");
    return 0;
}
