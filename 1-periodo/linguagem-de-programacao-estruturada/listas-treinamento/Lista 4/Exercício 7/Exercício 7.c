#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//-----------------------------------------------------------
int calculaR(int A, int B)
{
    int res;
    res = pow(A + B, 2);
    return res;
}
//-----------------------------------------------------------
int calculaS(int B, int C)
{
    int res;
    res = pow(B + C, 2);
    return res;
}
//               {programa principal}
int main ()
{
    int valorA, valorB, valorC, R, S;
    printf(" Insira tr%cs n%cmeros inteiros e positivos\n ", 136, 163);
    scanf("%d", &valorA);
    printf(" ");
    scanf("%d", &valorB);
    printf(" ");
    scanf("%d", &valorC);
    R = calculaR(valorA, valorB);
    S = calculaS(valorB, valorC);
    printf(" O resultado da opera%c%co %c %.1f\n\n", 135, 198, 130, (float)(R + S)/2);
    system("pause");
    return 0;
}
