#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//-------------------------------------------
void quadradoNum(float a)
{
    printf(" O quadrado do n%cmero %.0f %c %.0f\n\n", 163, a, 130, pow( a, 2));
}
//-------------------------------------------
void raizCubicaNum(float b)
{
    printf(" A raiz c%cbica do n%cmero %.0f %c %.2f\n\n", 163, 163, b, 130, pow(b , 1/3.));
}
//-------------------------------------------
void raizQuadradaNum(float c)
{
    printf(" A raiz quadrada do n%cmero %.0f %c %.2f\n\n", 163, c, 130, pow(c , 1/2.));
}
//-------------------------------------------
void cuboNum(float d)
{
    printf(" O cubo do n%cmero %.0f %c %.0f\n\n", 163, d, 130, pow( d, 3));
}
//          {programa principal}
int main ()
{
    float num;
    printf(" Informe um n%cmero positivo diferente de zero\n ", 163);
    scanf("%f",&num);
    quadradoNum(num);
    raizCubicaNum(num);
    raizQuadradaNum(num);
    cuboNum(num);
    system("pause");
    return 0;
}
