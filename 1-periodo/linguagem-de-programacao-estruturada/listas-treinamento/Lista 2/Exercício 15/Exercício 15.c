#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float valorX, valorY;
    printf(" Informe o valor de X\n ");
    scanf("%f",&valorX);
    printf(" Informe o valor de Y\n ");
    scanf("%f",&valorY);
    if ((valorX == 0)&&(valorY == 0))
        printf(" O ponto est%c na origem\n\n ",160);
    else {
            if ((valorX != 0)&&(valorY == 0))
                printf(" O ponto est%c no eixo das abscissas\n\n ",160);
            else {
                    if ((valorX == 0)&&(valorY != 0))
                        printf(" O ponto est%c no eixo das ordenadas\n\n ",160);
                    else {
                            if ((valorX > 0)&&(valorY > 0))
                                printf(" O ponto est%c no 1%c Quadrante\n\n ",160,248);
                            else {
                                    if ((valorX < 0)&&(valorY > 0))
                                        printf(" O ponto est%c no 2%c Quadrante\n\n ",160,248);
                                    else {
                                            if ((valorX < 0)&&(valorY < 0))
                                                printf(" O ponto est%c no 3%c Quadrante\n\n ",160,248);
                                            else
                                                printf(" O ponto est%c no 4%c Quadrante\n\n ",160,248);
                                    }
                            }
                    }
            }
    }
    system("pause");
    return 0;
}
