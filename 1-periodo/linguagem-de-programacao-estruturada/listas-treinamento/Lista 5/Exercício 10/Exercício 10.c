#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int num1 = 1, num2 = 1;
    float result = 0, resultAux;
    while (num1 <= 10)
    {
        resultAux = (float)num1 / num2;
        if (num1%2 == 1)
        {
            result = result + resultAux;
        }
        else
        {
            result = result - resultAux;
        }
        num1++;
        num2 = pow(num1,2);
    }
    printf(" O resultado da express%co S %c %f\n\n", 198, 130, result);
    system("pause");
    return 0;
}

