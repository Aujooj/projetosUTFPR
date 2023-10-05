#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int sexo;
    float altura;
    printf(" Insira a sua altura\n ");
    scanf("%f",&altura);
    printf(" Informe o seu sexo:\n 0 %c Feminino\n 1 %c Masculino\n ",45,45);
    scanf("%d",&sexo);
    if ((sexo!=0)&&(sexo!=1)) {
        printf(" O sexo informado n%co est%c nas capacidades do programa\n\n ",198,160);
    }
    else if (sexo==0) {
        printf(" O seu peso ideal %c %.1f\n\n ",130,(altura*62.1)-44.7);
    }
    else {
        printf(" O seu peso ideal %c %.1f\n\n ",130,(altura*72.7)-58);
    }
    system("pause");
    return 0;
}
