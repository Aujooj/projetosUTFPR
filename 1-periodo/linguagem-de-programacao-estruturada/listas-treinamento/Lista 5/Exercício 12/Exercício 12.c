#include<stdio.h>
#include<stdlib.h>
//------------------------------------------------
int fatorial(int num)
{
    int res;
    res = num;
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        while (num >= 2)
        {
            res = res * --num;
        }
        return res;
    }
}
//          {programa principal}
int main ()
{
    int num;
    float result, aux;
    num = 0;
    while (num <= 14)
    {
        aux = fatorial(num);
        result = result + (1/aux);
        num++;
    }
    printf("e = %f\n\n", result);
    system("pause");
    return 0;
}
