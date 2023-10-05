#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int codigo, quantidade;
    printf(" Informe o c%cdigo do produto desejado\n ",162);
    scanf("%d",&codigo);
    printf(" Informe a quantidade comprada\n ");
    scanf("%d",&quantidade);
    switch (codigo) {
        case 987 :
        case 1001 : {
            printf(" O valor total a ser pago %c R$:%.2f\n\n ",130, (float)quantidade*5.32);
            break;
            }
        case 1324 :
        case 7623 : {
            printf(" O valor total a ser pago %c R$:%.2f\n\n ",130, (float)quantidade*6.45);
            break;
            }
        case 6548 : {
            printf(" O valor total a ser pago %c R$:%.2f\n\n ",130, (float)quantidade*2.37);
            break;
            }
        default: {
            printf(" C%cdigo inv%clido!\n\n ",162,160);
        }
    }
    system("pause");
    return 0;
}
