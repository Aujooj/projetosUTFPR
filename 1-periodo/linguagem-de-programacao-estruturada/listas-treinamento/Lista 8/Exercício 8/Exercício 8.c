#include<stdio.h>
#include<stdlib.h>
//-------------------------------------------------------------------
void calculaMedia(int N)
{
    int conj1[N], conj2[N], conj3[N], ciclo, aux;
    float media[3];
    printf(" Informe os %d n%cmeros do primeiro conjunto\n", N, 163);
    for (ciclo = 1; ciclo <= N; ciclo++)
    {
        printf(" ");
        scanf("%d", &conj1[ciclo]);
        media[1] += conj1[ciclo];
    }
    media[1] = media[1]/N;
    printf(" Agora informe os %d n%cmeros do segundo conjunto\n", N, 163);
    for (ciclo = 1; ciclo <= N; ciclo++)
    {
        printf(" ");
        scanf("%d", &conj2[ciclo]);
        media[2] += conj2[ciclo];
    }
    media[2] = media[2]/N;
    printf(" Por fim informe os %d n%cmeros do terceiro conjunto\n", N, 163);
    for (ciclo = 1; ciclo <= N; ciclo++)
    {
        printf(" ");
        scanf("%d", &conj3[ciclo]);
        media[3] += conj3[ciclo];
    }
    media[3] = media[3]/N;
    printf("\n %.2f %.2f %.2f\n\n", media[1], media[2], media[3]);
}
//-------------------------------------------------------------------
int main ()
{
    int num;
    printf(" Informe quantos n%cmeros seram informados\n ", 163);
    scanf("%d", &num);
    calculaMedia(num);
    system("pause");
    return 0;
}
