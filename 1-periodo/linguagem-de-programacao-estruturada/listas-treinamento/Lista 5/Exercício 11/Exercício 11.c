#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int numX, ciclo = 1;
    float result = 0;
    printf(" Informe um valor para X\n ");
    scanf("%d", &numX);
    while (ciclo <= 20)
    {
        result = result + (float)(1/pow(numX,ciclo));
        ciclo++;
    }
    printf(" O resultado da express%co %c %f\n\n", 198, 130, result);
    system("pause");
    return 0;
}
