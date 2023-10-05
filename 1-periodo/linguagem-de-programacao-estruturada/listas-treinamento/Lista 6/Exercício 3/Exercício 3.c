#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int ciclo = 1;
    float resultado = 0, num1 = 1000, num2 = 1;
    do
    {
        if (ciclo % 2 == 1)
        {
            resultado = resultado + (num1/num2);
        }
        else
        {
            resultado = resultado - (num1/num2);
        }
        num1 = num1 - 3;
        num2++;
        ciclo++;
    } while (ciclo <= 50);
    printf(" S = %f\n\n", resultado);
    system("pause");
    return 0;
}
