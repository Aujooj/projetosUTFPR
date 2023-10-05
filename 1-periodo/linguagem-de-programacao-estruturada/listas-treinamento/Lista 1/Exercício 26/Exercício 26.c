#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num;
    printf(" Insira um n%cmero n%co nulo de tr%cs d%cgitos\n ",163,198,136,161);
    scanf("%d",&num);
    printf(" O contr%crio do seu n%cmero %c %d\n\n ",160,163,130,((num%10)*100)+(((num/10)%10)*10)+(num/100)%10);
    system("pause");
    return 0;
}
