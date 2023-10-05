#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int codigo;
    float preco;
    printf(" Informe o c%cdigo do produto\n ", 162);
    scanf("%d",&codigo);
    printf(" Informe o pre%co do produto\n ", 135);
    scanf("%f",&preco);
    switch (codigo) {
        case 1 : {
            printf(" R$:%.2f %c Sul\n\n ", preco, 45);
            return;
        }
        case 2 : {
            printf(" R$:%.2f %c Norte\n\n ", preco, 45);
            return;
        }
        case 3 : {
            printf(" R$:%.2f %c Leste\n\n ", preco, 45);
            return;
        }
        case 4 : {
            printf(" R$:%.2f %c Oeste\n\n ", preco, 45);
            return;
        }
        case 5 :
        case 6 :
        case 25 ... 50 : {
            printf(" R$:%.2f %c Nordeste\n\n ", preco, 45);
            return;
        }
        case 7 :
        case 8 :
        case 9 : {
            printf(" R$:%.2f %c Sudeste\n\n ", preco, 45);
            return;
        }
        case 10 ... 20 : {
            printf(" R$:%.2f %c Centro Oeste\n\n ", preco, 45);
            return;
        }
        default:{
            printf(" R$:%.2f %c Importado\n\n ", preco, 45);
        }
    }
    system("pause");
    return 0;
}
