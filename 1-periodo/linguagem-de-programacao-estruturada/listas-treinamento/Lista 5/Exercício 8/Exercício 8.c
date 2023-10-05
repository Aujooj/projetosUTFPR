#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float result = 0, num1 = 1, num2 = 1;;
    while (num2 <= 50)
    {
        result = result + (num1/num2);
        num1 = num1 + 2;
        num2++;
    }
    printf(" O resultado da express%co S %c %f\n\n", 198, 130, result);
    system("pause");
    return 0;
}
