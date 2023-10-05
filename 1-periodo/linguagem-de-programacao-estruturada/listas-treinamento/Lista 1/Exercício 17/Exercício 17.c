#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float comprimento,largura,conta;
    printf(" Informe o comprimento, em metros, do c%cmodo\n ",147);
    scanf("%f",&comprimento);
    printf(" Informe a largura, em metros, do c%cmodo\n ",147);
    scanf("%f",&largura);
    conta = comprimento*largura;
    printf(" O c%cmodo mede %.2fm%c, e precisar%c de %.2fW de pot%cncia\n\n ",147,conta,253,160,conta*18,136);
    system("pause");
    return 0;
}
