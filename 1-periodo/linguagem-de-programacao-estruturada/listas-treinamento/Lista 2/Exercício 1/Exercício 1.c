#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float num1, num2, num3;
    printf(" Insira 3 n%cmeros\n ",163);
    scanf("%f",&num1);
    printf(" ");
    scanf("%f",&num2);
    printf(" ");
    scanf("%f",&num3);
    if (num1 > 0) {
        printf(" A raiz quadrada do 1%c n%cmero %c %.0f\n",248,163,130,sqrt(num1));
    }
    else {
        printf(" O quadrado do 1%c n%cmero %c %.0f\n",248,163,130,pow(num1,2));
    }
    if ((num2 >= 10)&&(num2 <= 100)) {
        printf(" N%cmero est%c entre 10 e 100 %c intervalo permitido\n",163,160,45);
    }
    if (num3 < num2) {
        printf(" O diferen%ca entre %.0f e %.0f %c de %.0f\n\n ",135,num2,num3,130,num2-num3);
    }
    else {
        printf(" O resultado de %.0f %c 1 %c %.0f\n\n ",num3,43,130,num3+1);
    }
    system("pause");
    return 0;
}
