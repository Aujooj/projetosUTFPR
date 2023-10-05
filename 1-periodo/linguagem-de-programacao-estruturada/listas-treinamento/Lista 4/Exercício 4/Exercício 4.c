#include<stdio.h>
#include<stdlib.h>
//--------------------------------------------------------
float tempCelsius(int fahr)
{
    float res;
    res = ((fahr - 32) * 5)/9;
    return res;
}
//--------------------------------------------------------
float tempFahr(int celsius)
{
    float res;
    res = ((celsius * 9)/5) + 32;
    return res;
}
//             {programa principal}
int main ()
{
    int opcao, temp, resultado;
    printf(" Escolha a temperatura que voc%c quer saber:\n\t1. Celsius\n\t2. Fahrenheit\n ", 136);
    scanf("%d", &opcao);
    printf(" Informe a temperatura a ser convertida\n ");
    scanf("%d", &temp);
    if (opcao == 1)
    {
        resultado = tempCelsius(temp);
        printf(" A temperatura em Celsius %c %.1f%cC\n\n", 130, (float)resultado, 248);
    }
    else if (opcao == 2)
    {
        resultado = tempFahr(temp);
        printf(" A temperatura em Fahrenheit %c %.1f%cF\n\n", 130, (float)resultado, 248);
    }
    else
    {
        printf(" Op%c%co desconhecida!\n\n", 135, 198);
    }
    system("pause");
    return 0;
}
