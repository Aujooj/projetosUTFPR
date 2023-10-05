#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num1, num2;
    printf(" Informe um n%cmero inteiro!\n ", 163);
    scanf("%d", &num1);
    printf("\n");
    for (num2 = 1; num2 <= 10; num2++)
    {
        printf(" %d * %d = %d\n", num1, num2, num1 * num2);
    }
    printf("\n");
    system("pause");
    return 0;
}
