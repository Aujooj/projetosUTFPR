#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num;
    printf(" Insira o c%cdigo\n ",162);
    scanf("%d",&num);
    switch(num) {
        case 1 : {
            printf(" Grupo com 50%c de promo%c%co\n\n ",37,135,198);
            break;
        }
        case 3:
        case 5 : {
            printf(" Grupo sem desconto\n\n ");
            break;
        }
        case 10 ... 20 : {
            printf(" Grupo com 10%c de desconto\n\n ",37);
            break;
        }
        default: {
            printf(" C%cdigo n%co v%clido\n\n ",162,198,160);
            break;
        }
    }
    system("pause");
    return 0;
}

