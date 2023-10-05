#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float res = 0, valorX, num2 = 1, potencia = 25;
    int ciclo = num2;
    printf(" Informe um valor para X\n ");
    scanf("%f", &valorX);
    do
    {
        if (ciclo%2 == 1)
        {
            res = res + (pow(valorX, potencia) / num2);
        }
        else
        {
            res = res - (pow(valorX, potencia) / num2);
        }
        potencia--;
        num2++;
        ciclo++;
    } while (ciclo < 25);
    printf(" O resultado %c %.0f\n\n", 130, res);
    system("pause");
    return 0;
}
