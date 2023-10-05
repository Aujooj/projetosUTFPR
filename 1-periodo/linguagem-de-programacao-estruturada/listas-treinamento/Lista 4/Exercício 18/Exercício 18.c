#include<stdio.h>
#include<stdlib.h>
//------------------------------------------------------------------------
float polegadas(float pes)
{
    float res;
    res = pes * 12;
    return res;
}
//------------------------------------------------------------------------
float jardas(float pes)
{
    float res;
    res = pes / 3;
    return res;
}
//------------------------------------------------------------------------
float milhas(float pes)
{
    float res;
    res = pes / 5280;
    return res;
}
//                         {programa principal}
int main ()
{
    float valorPes, fpolegadas, fjardas, fmilhas;
    printf(" Informe a medida em p%cs\n ", 130);
    scanf("%f", &valorPes);
    fpolegadas = polegadas(valorPes);
    fjardas = jardas(valorPes);
    fmilhas = milhas(valorPes);
    printf("\n %.2f p%cs correspondem a %.2f polegadas\n", valorPes, 130, fpolegadas);
    printf(" %.2f p%cs correspondem a %.2f jardas\n", valorPes, 130, fjardas);
    printf(" %.2f p%cs correspondem a %.2f milhas\n\n", valorPes, 130, fmilhas);
    system("pause");
    return 0;
}
