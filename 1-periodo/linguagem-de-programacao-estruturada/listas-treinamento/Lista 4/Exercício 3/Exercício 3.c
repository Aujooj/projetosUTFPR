#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//--------------------------------------------------
float areaTriangulo(float altura, float base)
{
    float res;
    res = (base*altura)/2;
    return res;
}
//--------------------------------------------------
float areaCirculo(float raio)
{
    const float pi = 3.14;
    float res;
    res = pi * (pow( raio, 2));
    return res;
}
//--------------------------------------------------
float areaCubo(float aresta)
{
    float res;
    res = 6 * (pow( aresta, 2));
    return res;
}
//--------------------------------------------------
float areaCilindro(float altura, float raio)
{
    const float pi = 3.14;
    float res;
    res = 2 * (pi * pow(raio,2)) + 2 * (pi * raio * altura);
    return res;

}
//                {programa principal}
int main ()
{
    int opcao;
    float valor1, valor2, funcao;
    printf(" Escolha o que deseja calcular:\n\t1. A %crea de um tri%cngulo\n\t2. A %crea de um circulo\n\t3. A %crea de um cubo\n\t4. A %crea de um cilindro\n ", 160, 131, 160, 160, 160);
    scanf("%d",&opcao);
    if (opcao == 1)
    {
        printf(" Informe o valor da altura do tri%cngulo\n ", 131);
        scanf("%f", &valor1);
        printf(" Informe o valor da base do tri%cngulo\n ", 131);
        scanf("%f", &valor2);
        funcao = areaTriangulo(valor1, valor2);
        printf(" A %crea do tri%cngulo %c %.2f\n\n", 160, 131, 130, funcao);
    }
    else if (opcao == 2)
    {
        printf(" Informe o valor do raio do circulo\n ");
        scanf("%f", &valor1);
        funcao = areaCirculo(valor1);
        printf(" A %crea do circulo %c %.2f\n\n", 160, 130, funcao);
    }
    else if (opcao == 3)
    {
        printf(" Informe o valor da aresta do cubo\n ");
        scanf("%f", &valor1);
        funcao = areaCubo(valor1);
        printf(" A %crea do cubo %c %.2f\n\n", 160, 130, funcao);
    }
    else if (opcao == 4)
    {
        printf(" Informe o valor da altura do cilindro\n ");
        scanf("%f",&valor1);
        printf(" Informe o valor do raio do cilindro\n ");
        scanf("%f",&valor2);
        funcao = areaCilindro( valor1, valor2);
        printf(" A %crea do cilindro %c %.2f\n\n", 160, 130, funcao);
    }
    else
    {
        printf(" Op%c%co desconhecida!\n\n", 135, 198);
    }
    system("pause");
    return 0;
}
