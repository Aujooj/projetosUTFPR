#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float valorX, valorY;

    do
    {
        printf(" Informe o valor de X\n ");
        scanf("%f", &valorX);
        if (valorX >= 0)
        {
            valorY = 2.5 * cos(valorX / 2);
            printf(" O valor de X %c: %.2f;\n O valor de Y %c: %.2f\n\n", 130, valorX, 130, valorY);
        }
    } while (valorX >= 0);
    system("pause");
    return 0;
}
