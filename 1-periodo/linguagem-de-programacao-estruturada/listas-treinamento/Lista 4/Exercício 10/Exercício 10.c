#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//-------------------------------------------------------------------
void casoPositivo(float valor1, float valor2, float valor3)
{
    printf(" O per%cmetro do tri%cngulo %c %.2f\n\n", 161, 131, 130, valor1 + valor2 + valor3);
}
//-------------------------------------------------------------------
void casoNegativo(float base1, float base2, float altura)
{
    printf(" A %crea do trap%czio %c %.2f\n\n", 160, 130, 130, ((base1 + base2)*altura)/2);
}
//-------------------------------------------------------------------
void validaTriangulo(float A, float B, float C)
{
    if (((B + C)  > A) && ((A + C)  > B) && ((A + B)  > C))
    {
        printf(" Os valores informados formam um tri%cngulo\n", 131);
        casoPositivo(A, B, C);
    }
    else
    {
        printf(" Os valores informados formam um tri%cngulo, ent%co de um trap%czio com as medidas informadas\n", 131, 198, 130);
        casoNegativo(A, B, C);
    }
}
//                         {programa principal}
int main ()
{
    float valorA, valorB, valorC;
    printf(" Informe os valores dos lados do tri%cngulo\n ", 131);
    scanf("%f", &valorA);
    printf(" ");
    scanf("%f", &valorB);
    printf(" ");
    scanf("%f", &valorC);
    validaTriangulo(valorA, valorB, valorC);
    system("pause");
    return 0;
}
