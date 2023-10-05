#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num1,num2;
    printf(" Insira o primeiro n%cmero\n ",163);
    scanf("%d",&num1);
    printf(" Insira o segundo n%cmero\n ",163);
    scanf("%d",&num2);
    printf(" A soma dos n%cmeros %c %d, a subtra%c%co %c %d, o produto %c %d e a divis%co %c %.1f\n\n",163,130,num1+num2,135,198,130,num1-num2,130,num1*num2,198,130,(float)num1/num2);
    system("pause");
    return 0;
}
