#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int divisor (int num)
{
    int res;
    res = pow(2, num) - 1;
    return res;
}
//-----------------------------------------------
int fatorial(int num)
{
    int res;
    res = num;
    while (num >= 2)
    {
        res = res * --num;
    }
    return res;
}
// ----------------------------------------------
int main ()
{
    int  valorX, numFatorial, exp, num1, num2;
    float res = 0;
    for ( numFatorial = 1; numFatorial <= 50; numFatorial++)
    {
        num1 = fatorial(numFatorial);
        num2 = divisor(numFatorial);
        if (numFatorial&2 == 1)
        {
                res = res + (float) num1 / num2;
        }
        else
        {
                res = res - (float) num1 / num2;
        }
    }
    printf(" R = %.0f\n\n", res);
    system("pause");
    return 0;
}
