#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num, numMostrar, numAux;
    printf(" Informe um n%cmero que voc%c deseja calcular a fatorial\n ", 163, 136);
    scanf("%d", &num);
    numAux = num;
    numMostrar = num;
    while (num >= 2)
    {
        numAux = numAux * --num;
    }
    printf("\n %d! %c %d\n\n", numMostrar, 130, numAux);
    system("pause");
    return 0;
}
