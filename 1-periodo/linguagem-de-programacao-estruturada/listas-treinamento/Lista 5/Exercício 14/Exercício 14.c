#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num = 1, ciclo = 100;
    while (ciclo >= 1)
    {
        if (num%2 == 0 || num%3 == 0 || num%5 == 0 || num%7 == 0)
        {
            if (num == 2 || num == 3 || num == 5 || num == 7)
            {
                printf(" %d\n", num);
            }
        }
        else
        {
            printf(" %d\n", num);
        }
    num++;
    ciclo--;
    }
    system("pause");
    return 0;
}
