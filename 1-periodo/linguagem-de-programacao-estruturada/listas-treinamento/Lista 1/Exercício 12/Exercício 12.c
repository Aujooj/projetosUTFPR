#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int quant1,quant2,codigo1,codigo2;
    float ipi,valor1,valor2;
    printf(" Insira a IPI a ser acrescida no valor das pe%cas\n ",135);
    scanf("%f",&ipi);
    printf(" Insira o c%cdigo da primeira pe%ca\n ",162,135);
    scanf("%d",&codigo1);
    printf(" Insira o valor unit%crio da primeira pe%ca\n ",160,135);
    scanf("%f",&valor1);
    printf(" Insira a quantidade desejada\n ");
    scanf("%d",&quant1);
    printf(" Insira o c%cdigo da segunda pe%ca\n ",162,135);
    scanf("%d",&codigo2);
    printf(" Insira o valor unit%crio da segunda pe%ca\n ",160,135);
    scanf("%f",&valor2);
    printf(" Insira a quantidade desejada\n ");
    scanf("%d",&quant2);
    printf(" As pe%cas inseridas s%co %d e %d\n",135,198,codigo1,codigo2);
    printf(" O valor total a ser pago %c de %.2f\n\n ",130,(valor1*quant1+valor2*quant2)*(ipi/100+1));
    system("pause");
    return 0;
}
