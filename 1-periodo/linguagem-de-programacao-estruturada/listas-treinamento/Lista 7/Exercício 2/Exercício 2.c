#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num1, res = 0;
    printf(" Esses s%co os n%cmeros m%cltiplos de 7 entre 100 e 200 \n\n", 198, 163, 163);
    for (num1 = 105; num1 <= 196; num1 = num1 + 7)
    {
        printf(" %d \n", num1);
        res = res + num1;
    }
    printf("\n E a soma deles %c %d\n", 130, res);
    system("pause");
    return 0;
}
