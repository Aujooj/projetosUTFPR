#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int numU;
    float result = 1, num1 = 1, num2 = 2;
    printf(" Informe um valor\n ");
    scanf("%d", &numU);
    while (num2 <= numU)
    {
        result = result + (num1/num2);
        num2++;
    }
    printf(" O resultado da express%co H %c %f\n\n", 198, 130, result);
    system("pause");
    return 0;
}
