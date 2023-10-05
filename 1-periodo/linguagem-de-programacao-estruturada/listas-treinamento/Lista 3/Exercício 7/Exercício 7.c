#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int conta;
    float valor1, valor2, valor3;
    printf(" %c Apenas calcula tr%cs valores %c\n\t1. Calcular a m%cdia aritm%ctica\n\t2. Calcular a m%cdia harm%cnica\n\t3. Calcular a m%cdia geom%ctrica\n ", 126, 136, 126, 130, 130, 130, 147, 130, 130);
    scanf("%d",&conta);
    printf(" Informe o primeiro valor\n ");
    scanf("%f",&valor1);
    printf(" Informe o segundo valor\n ");
    scanf("%f",&valor2);
    printf(" Informe o terceiro valor\n ");
    scanf("%f",&valor3);
    switch (conta) {
        case 1 : {
            printf(" A m%cdia aritm%ctica %c %.2f\n\n ", 130, 130, 130, (valor1 + valor2 + valor3)/3);
            break;
        }
        case 2 : {
            printf(" A m%cdia harm%cnica %c %f\n\n ", 130, 147, 130, pow(valor1*valor2*valor3,-3));
            break;
        }
        case 3 : {
            printf(" A m%cdia geom%ctrica %c %.2f\n\n ", 130, 130, 130, 3/(1/valor1 + 1/valor2 + 1/valor3));
            break;
        }
        default: {
            printf(" C%clculo desconhecido!\n\n ", 160);
        }
    }
    system("pause");
    return 0;
}
