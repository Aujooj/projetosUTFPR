#include <stdio.h>
#include<stdlib.h>

int main()
{
    int num, aux, reverso = 0;
    printf(" Insira um n%cmero\n ", 163);
    scanf("%d", &num);
    aux = num;
    while (aux != 0)
    {
        reverso = reverso * 10 + aux % 10;
        aux = aux / 10;
    }
    if (reverso == num)
    {
        printf(" %d %c palindrome\n\n", num, 130);
    }
    else
    {
        printf(" %d n%co %c palindrome\n\n", num, 198, 130);
    }
    system("pause");
    return 0;
}
