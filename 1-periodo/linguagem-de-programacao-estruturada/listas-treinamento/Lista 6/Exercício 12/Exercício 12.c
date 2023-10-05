#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char sexo;
    int tempo, ciclo = 0;
    float salario, salarioI, montante = 0;
    do
    {
        printf(" Informe o sexo do funcion%crio\n\t<F>eminino\n\t<M>asculino\n ", 160);
        fflush(stdin);
        scanf("%c", &sexo);
        printf(" Informe o tempo de casa do funcion%crio\n ", 160);
        scanf("%d", &tempo);
        printf(" Informe o sal%crio do funcion%crio\n ", 160, 160);
        scanf("%f", &salario);
        if (sexo == 'F')
        {
            if (tempo > 10)
            {
                float salarioI;
                salarioI = salario;
                salario = salario * 1.25;
                montante = montante + (salario - salarioI);
                printf(" O novo sal%crio %c %.2f\n\n", 160, 130, salario);
            }
            else
            {
                salario = salario + 5000;
                montante = montante + 5000;
                printf(" O novo sal%crio %c %.2f\n\n", 160, 130, salario);
            }
            ciclo++;
        }
        else if (sexo == 'M')
        {
            if (tempo > 15)
            {
                float salarioI;
                salarioI = salario;
                salario = salario * 1.2;
                montante = montante + (salario - salarioI);
                printf(" O novo sal%crio %c %.2f\n\n", 160, 130, salario);
            }
            else
            {
                salario = salario + 5000;
                montante = montante + 5000;
                printf(" O novo sal%crio %c %.2f\n\n", 160, 130, salario);
            }
            ciclo++;
        }
        else
        {
            printf(" Op%c%co inv%clida!\n\n ", 135, 198, 160);
        }
    } while (ciclo < 30);
    printf(" O montante final a ser pago %c %.2f\n\n ", 130, montante);
    system("pause");
    return 0;
}
