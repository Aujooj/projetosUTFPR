#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char forma;
    float medida1, medida2;
    printf(" Informe a forma geom%ctrica desejada:\n\tCilindro - C\n\tC%crculo - R\n\tCubo - U\n\tTri%cngulo - T\n ",130,161,131);
    fflush(stdin);
    scanf("%c",&forma);
    switch (forma) {
        case 'C' : {
            printf(" Informe a altura\n ");
            scanf("%f",&medida1);
            printf(" Informe o raio do cilindro\n ");
            scanf("%f",&medida2);
            printf(" A %crea do cilindro %c %.2f\n\n ", 160, 130, 2*3.14*medida2*(medida2+medida1));
            break;
        }
        case 'R' : {
            printf(" Informe o raio do c%crculo\n ", 161);
            scanf("%f",&medida1);
            printf(" A %crea do c%cculo %c %.2f\n\n ", 160, 161, 130, 3.14*pow(medida1,2));
            break;
        }
        case 'U' : {
            printf(" Informe a medida do lado do cubo\n ");
            scanf("%f",&medida1);
            printf(" A %crea do cubo %c %.0f\n\n ", 160, 130, 6*pow(medida1,2));
            break;
        }
        case 'T' : {
            printf(" Informe a altura do tri%cngulo \n", 160);
            scanf("%f",&medida1);
            printf(" Informe a base do tri%cngulo \n", 160);
            scanf("%f",&medida2);
            printf(" A %crea do tri%cngulo %c %.2f\n\n ", 160, 131, 130, (medida2*medida1)/2);
            break;
        }
        default: {
            printf(" Forma geom%ctrica desconhecida!\n\n ",130);
        }
    }
    system("pause");
    return 0;
}
