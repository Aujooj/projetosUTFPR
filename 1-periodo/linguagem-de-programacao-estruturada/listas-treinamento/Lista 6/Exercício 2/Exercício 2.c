#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int ciclo = 1;
    float resultado = 0, num2 = 500;
    do
    {
        if (ciclo % 2 == 1)
        {
            resultado = resultado + (2/num2);
        }
        else
        {
            resultado = resultado - (5/num2);
        }
        num2 = num2 - 50;
        ciclo++;
    } while (ciclo <= 10);
    printf(" %f\n\n", resultado);
    system("pause");
    return 0;
}

