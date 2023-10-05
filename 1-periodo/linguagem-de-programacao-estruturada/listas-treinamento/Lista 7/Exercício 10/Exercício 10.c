#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, divisor, soma = 0;
	printf(" Informe um n%cmero\n ", 163);
	scanf("%d", &num);
    for (divisor = 1; divisor < num; divisor++)
    {
        if (num % divisor == 0)
            soma = soma + divisor;

    }
    if(soma == num)
    {
        printf("\n %d %c perfeito!\n\n", num, 130);
    }
    else
    {
        printf("\n %d n%co %c perfeito!\n\n", num, 198, 130);
    }
    system("pause");
    return 0;
}
