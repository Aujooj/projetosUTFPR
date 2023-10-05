#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float  celsius, fahr = 50.0;
    printf(" Celsius            Fahreinheit\n");
    do
    {
        celsius = (float)5/9 * (fahr - 32);
        printf("   %.0f                  %.1f\n",fahr , celsius);
        fahr++;
    } while (fahr <= 150);
    system("pause");
    return 0;
}
