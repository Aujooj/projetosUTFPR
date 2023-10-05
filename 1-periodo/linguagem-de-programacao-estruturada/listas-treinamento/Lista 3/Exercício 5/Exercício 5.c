#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char categoria;
    float preco;
    printf(" Informe o pre%co do produto\n ",135);
    scanf("%f",&preco);
    printf(" Informe a categoria dele\n\tA %c 50%c\n\tB %c 25%c\n\tC %c 15%c\n\tD %c 5%c\n ", 45, 37, 45, 37, 45, 37, 45, 37);
    fflush(stdin);
    scanf("%c",&categoria);
    switch (categoria) {
        case 'A' : {
            printf(" O valor antigo era R$:%.2f, o reajuste ser%c de 50%c, deixando o pre%co R$:%.2f\n\n ", preco, 160, 37, 135, preco*1.5);
           break;
        }
        case 'B' : {
            printf(" O valor antigo era R$:%.2f, o reajuste ser%c de 25%c, deixando o pre%co R$:%.2f\n\n ", preco, 160, 37, 135, preco*1.25);
           break;
        }
        case 'C' : {
            printf(" O valor antigo era R$:%.2f, o reajuste ser%c de 15%c, deixando o pre%co R$:%.2f\n\n ", preco, 160, 37, 135, preco*1.15);
            break;
        }
        case 'D' : {
            printf(" O valor antigo era R$:%.2f, o reajuste ser%c de 5%c, deixando o pre%co R$:%.2f\n\n ", preco, 160, 37, 135, preco*1.05);
            break;
        }
        default: {
            printf(" Categoria desconhecida!\n\n ");
        }
    }
    system("pause");
    return 0;
}
