#include<stdio.h>
#include<stdlib.h>
//------------------------------------------------------------------------
void decomporNotas(int total)
{
    int notas100, notas50, notas10, notas5, notas1, total2, total3, total4;
    notas100 = total/100;
    total2 = total - (notas100 * 100);
    notas50 = total2/50;
    total3 = total2 - (notas50 * 50);
    notas10 = total3/10;
    total4 = total3 - (notas10 * 10);
    notas5 = total4/5;
    notas1 = total4 - (notas5 * 5);
    printf(" O menor n%cmero poss%cvel de notas s%co: %d notas de 100, %d notas de 50, %d notas de 10, %d notas de 5 e %d notas de 1.\n\n", 163, 161, 198, notas100, notas50, notas10, notas5, notas1);
}
//                        {programa principal}
int main ()
{
    int dinheiro;
    printf(" Informe um valor em reais, e o programa ir%c calcular o menor n%cmero poss%cvel de notas de 100, 50, 10, 5 e 1 em que o valor pode ser decomposto\n ", 160, 163, 161);
    scanf("%d", &dinheiro);
    decomporNotas(dinheiro);
    system("pause");
    return 0;
}
