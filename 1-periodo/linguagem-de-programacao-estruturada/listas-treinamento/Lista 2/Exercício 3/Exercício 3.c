#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int idade;
    printf(" Informe a sua idade\n ");
    scanf("%d",&idade);
    if ((idade >= 1)&&(idade <= 13)) {
        printf(" Voc%c pertence ao grupo das crian%cas\n\n ",136,135);
    }
    else
        if ((idade > 13)&&(idade <= 20)) {
        printf(" Voc%c pertence ao grupo dos adolescentes\n\n ",136);
    }
    else
        if ((idade > 20)&&(idade <= 50)) {
        printf(" Voc%c pertence ao grupo dos adultos\n\n ",136);
    }
    else
        if (idade > 50) {
        printf(" Voc%c pertence ao grupo dos idosos\n\n ",136);
    }
    else {
        printf(" Voc%c %c um beb%c\n\n ",136,130,136);
    }
    system("pause");
    return 0;
}
