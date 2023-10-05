#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int ciclo = 1;
    float resultado = 0, num1 = 480, num2 = 10;
    do
    {
        if (ciclo % 2 == 0)
        {
            resultado = resultado + (num1/num2);
        }
        else
        {
            resultado = resultado - (num1/num2);
        }
        num1 = num1 - 5;
        num2++;
        ciclo++;
    } while (ciclo <= 30);
    printf(" S = %f\n\n", resultado);
    system("pause");
    return 0;
}
