#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int expoente(int num)
{
    int res;
    if (num == 0)
    {
        return 1;
    }
    else
    {
        res = num * 2;
    }
    return res;
}
// ----------------------------------------------
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
    int ciclo = 1, valorX, valorN, numFatorial, exp, num1, num2;
    float valorS = 0;
    printf(" Informe o valor de X\n ");
    scanf("%d", &valorX);
    printf(" Informe o valor de n\n ");
    scanf("%d", &valorN);
    for ( numFatorial = 1, exp = 0; ciclo <= valorN; numFatorial = numFatorial + 2, exp++, ciclo++)
    {
        num1 = fatorial(numFatorial);
        num2 = expoente(exp);
        if (ciclo&2 == 1)
        {
                valorS = valorS + (pow(valorX, num2) / num1);
        }
        else
        {
                valorS = valorS - (pow(valorX, num2) / num1);
        }
    }
    printf(" S = %f\n\n", valorS);
    system("pause");
    return 0;
}
