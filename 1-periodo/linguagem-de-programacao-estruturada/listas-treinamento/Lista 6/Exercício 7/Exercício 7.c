#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    const float PI = 3.14;
    float  res, raio = 0;
    do
    {
        res = (float)(4/3 * PI) * pow(raio, 3);
        printf("   %.1f                  %.1f\n", raio , res);
        raio = raio + 0.5;
    } while (raio <= 20);
    system("pause");
    return 0;
}
