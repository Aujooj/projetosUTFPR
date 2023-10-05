#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int lados;
    float medida;
    printf(" Informe o n%cmero de lados do pol%cgono\n ",163,161);
    scanf("%d",&lados);
    printf(" Informe a medida do lado dele\n ");
    scanf("%f",&medida);
    if (lados == 3) {
        printf(" TRIANGULO, o valor do seu per%cmetro %c %.2f\n\n ",161,130,medida*3);
    }
    else
        if (lados == 4) {
        printf(" QUADRADO, o valor da sua %crea %c %.2f\n\n ",160,130,medida*medida);
    }
    else
        if (lados == 5) {
        printf(" PENTAGONO\n\n ");
    }
    else
        if (lados < 3) {
        printf(" N%co %c um pol%cgono\n\n ",198,130,161);
    }
    else {
        printf(" Pol%cgono n%co identificado\n\n ",161,198);
    }
    system("pause");
    return 0;
}
