#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int numer1, denom1, numer2, denom2;
    printf(" Insira o numerador da primeira fra%c%co\n ",135,198);
    scanf("%d",&numer1);
    printf(" Insira o denominador da primeira fra%c%co\n ",135,198);
    scanf("%d",&denom1);
    printf(" Insira o numerador da segunda fra%c%co\n ",135,198);
    scanf("%d",&numer2);
    printf(" Insira o denominador da segunda fra%c%co\n ",135,198);
    scanf("%d",&denom2);
    printf(" O valor da soma e do produto s%co respectivamente %.2f e %.2f\n\n ",198,(float)((numer1*denom2)+(numer2*denom1))/(denom1*denom2),(float)(numer1*numer2)/(denom1*denom2));
    system("pause");
    return 0;
}

