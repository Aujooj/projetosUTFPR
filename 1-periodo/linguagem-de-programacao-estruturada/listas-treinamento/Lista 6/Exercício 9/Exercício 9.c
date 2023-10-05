#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int anos;
    float fulano = 1.5, ciclano = 1.1;
    do
    {
        fulano = fulano + 0.02;
        ciclano = ciclano + 0.03;
        anos++;
    } while (ciclano < fulano);
    printf(" Foram necess%crios %d anos!\n\n", 160, anos);
    system("pause");
    return 0;
}
