#include<stdio.h>
#include<stdlib.h>
//-------------------------------------------------------------------------------
FILE *file;
//-------------------------------------------------------------------------------
void verificaExtenso();
void imprimirTodos();
void converteNum(int dinheiro);
void e(int num1);
void unidade(int num);
void dezena(int num1, int num2);
void centena(int num);
//                programa principal
int main ()
{
    int ciclo = 1, opcao;
    while (ciclo == 1)
    {
        printf(" Escolha uma op%c%co:\n\t1- Escrever um n%cmero por extenso\n\t2- Imprimir todos os n%cmeros do arquivo em tela\n\t3- Sair\n ", 135, 198, 163, 163);
        fflush(stdin);
        scanf("%d", &opcao);
        system("cls");
        switch (opcao)
        {
            // função que recebece os números e os converte em int para realizar a separação e escrita em outra função
            case 1:
            {
                printf(" Escreva os algarismos do valor desejado e o programa ir%c retornar-lo por extenso:\n\n", 160);
                verificaExtenso();
                break;
            }
            // função que lê o arquivo e apresenta todos os números já inseridos
            case 2:
            {
                imprimirTodos();
                printf("\n");
                break;
            }
            // encerramento do programa
            case 3:
            {
                printf("\n Encerrando ...\n\n");
                ciclo--;
                break;
            }
            default:
                printf("\n Op%c%co inv%clida!\n\n", 135, 198, 160);

        }
        system("pause");
        system("cls");
    }
    return 0;
}
//-------------------------------------------------------------------------------
void verificaExtenso()
{
    // aqui é necessário double, pois o float apresenta overflow no momento de conversão para int
    double aux;
    int num = 0;
    printf(" Informe um n%cmero entre 0 e 9999.99\n ", 163);
    scanf("%lf", &aux);
    printf("\n");
    num = aux * 100;    // troca de double para int para evitar decimais indesejados
    if (aux > 0 && aux < 10000)
    {
        converteNum(num);
        printf("\n");
    }
    else
        printf("\n N%cmero inv%clido!\n", 163, 160);
}
//-------------------------------------------------------------------------------
void imprimirTodos()
{
    // string que armazenará os valores do arquivo
    char cheque[100];
    file = fopen ("Cheque - Joao Augusto de Souza Santos.txt", "r");
    // condição feita para fechar o programa caso o arquivo não seja encontrado
    if (file == NULL)
    {
        printf(" N%co foi poss%cvel abrir o arquivo\n\n", 198, 161);
        system("pause");
        exit(0);
    }
    // laço que apenas é encerrado quando não há mais valores a serem lidos no arquivo
    while (fgets(cheque, 100, file) != NULL)
    {
        printf("%s", cheque);
    }
    fclose(file);
}
//-------------------------------------------------------------------------------
void converteNum(int dinheiro)
{
    // (alg = algaritmo), dinheiro equivale a alg6 (é usado 'dinheiro' para melhor aproveitar as variaveis já declaradas)
    int alg1 = 0, alg2 = 0, alg3 = 0, alg4 = 0, alg5 = 0;
    // usa-se o "a", pois ele possibilita a alteração do arquivo sem a sopreposição do que havia antes
    file = fopen ("Cheque - Joao Augusto de Souza Santos.txt", "a");
    // bloco que irá definir o valor de cada algarismo do valor inserido
    alg1 = dinheiro/100000;
    dinheiro -= alg1*100000;
    alg2 = dinheiro/10000;
    dinheiro -= alg2*10000;
    alg3 = dinheiro/1000;
    dinheiro -= alg3*1000;
    alg4 = dinheiro/100;
    dinheiro -= alg4*100;
    alg5 = dinheiro/10;
    dinheiro -= alg5*10;
    // reais
    if (alg1 > 0)
    {
        if (alg1 > 1)
            unidade(alg1);
        printf(" MIL");
        fprintf(file, " MIL");
    }
    if (alg2 != 0 && (alg3 == 0 && alg4 == 0))
        e(alg2);
    if (alg2 > 0)
    {
        if (alg2 == 1 && alg3 == 0 && alg4 == 0)
        {
            printf(" CEM");
            fprintf(file, " CEM");
        }
        else if(alg2 == 1 && (alg3 != 0 || alg4 != 0))
        {
            printf(" CENTO");
            fprintf(file, " CENTO");
        }
        else
            centena(alg2);
    }
    if (alg1 != 0 || alg2 != 0)
        e(alg3);
    if (alg3 > 0)
    {
        dezena(alg3, alg4);
    }
    if ((alg3 > 1 || alg3 == 0) && (alg1 != 0 || alg2 != 0 || alg3 != 0))
    {
        e(alg4);
    }
    if (alg4 > 0 && alg3 != 1)
    {
        unidade(alg4);
    }
    if (alg1 != 0 || alg2 != 0 || alg3 != 0 || alg4 != 0)
    {
        if (alg1 == 0 && alg2 == 0 && alg3 == 0 && alg4 == 1)
        {
            printf(" REAL");
            fprintf(file, " REAL");
        }
        else
        {
            printf(" REAIS");
            fprintf(file, " REAIS");
        }
    }
    if (alg5 == 0 && dinheiro == 0)
    {
        printf("\n");
        fprintf(file, "\n");
    }
    // centavos
    if (alg1 != 0 || alg2 != 0 || alg3 != 0 || alg4 != 0)
        e(alg5);
    if (alg5 > 0)
    {
        dezena(alg5, dinheiro);
    }
    if ((alg1 != 0 || alg2 != 0 || alg3 != 0 || alg4 != 0 || alg5 > 1) || ((alg1 != 0 || alg2 != 0 || alg3 != 0 || alg4 != 0) && alg5 == 0))
        e(dinheiro);
    if (dinheiro > 0 && alg5 != 1)
    {
        unidade(dinheiro);
    }
    if (alg5 != 0 || dinheiro != 0)
    {
        if (alg5 == 0 && dinheiro == 1)
        {
            printf(" CENTAVO\n");
            fprintf(file, " CENTAVO\n");
        }
        else
        {
            printf(" CENTAVOS\n");
            fprintf(file, " CENTAVOS\n");
        }
    }
    fclose(file);
}
//-------------------------------------------------------------------------------
void e(int num)
{
    if (num != 0)
    {
        printf(" E");
        fprintf(file, " E");
    }
}
//-------------------------------------------------------------------------------
void unidade(int num)
{
    switch (num)
    {
        case 1:
        {
            printf(" UM");
            fprintf(file, " UM");
            break;
        }
        case 2:
        {
            printf(" DOIS");
            fprintf(file, " DOIS");
            break;
        }
        case 3:
        {
            printf(" TRES", 210);
            fprintf(file, " TRES");
            break;
        }
        case 4:
        {
            printf(" QUATRO");
            fprintf(file, " QUATRO");
            break;
        }
        case 5:
        {
            printf(" CINCO");
            fprintf(file, " CINCO");
            break;
        }
        case 6:
        {
            printf(" SEIS");
            fprintf(file, " SEIS");
            break;
        }
        case 7:
        {
            printf(" SETE");
            fprintf(file, " SETE");
            break;
        }
        case 8:
        {
            printf(" OITO");
            fprintf(file, " OITO");
            break;
        }
        default:
        {
            printf(" NOVE");
            fprintf(file, " NOVE");
            break;
        }
    }
}
//-------------------------------------------------------------------------------
void dezena(int num1, int num2)
{
    switch (num1)
    {
        case 1:
        {
            switch (num2)
            {
                case 0:
                {
                    printf(" DEZ");
                    fprintf(file, " DEZ");
                    break;
                }
                case 1:
                {
                    printf(" ONZE");
                    fprintf(file, " ONZE");
                    break;
                }
                case 2:
                {
                    printf(" DOZE");
                    fprintf(file, " DOZE");
                    break;
                }
                case 3:
                {
                    printf(" TREZE");
                    fprintf(file, " TREZE");
                    break;
                }
                case 4:
                {
                    printf(" QUATORZE");
                    fprintf(file, " QUATORZE");
                    break;
                }
                case 5:
                {
                    printf(" QUINZE");
                    fprintf(file, " QUINZE");
                    break;
                }
                case 6:
                {
                    printf(" DEZESSEIS");
                    fprintf(file, " DEZESSEIS");
                    break;
                }
                case 7:
                {
                    printf(" DEZESSETE");
                    fprintf(file, " DESESSETE");
                    break;
                }
                case 8:
                {
                    printf(" DEZOITO");
                    fprintf(file, " DEZOITO");
                    break;
                }
                default:
                {
                    printf(" DEZENOVE");
                    fprintf(file, " DEZENOVO");
                    break;
                }
            }
            break;
        }
        case 2:
        {
            printf(" VINTE");
            fprintf(file, " VINTE");
            break;
        }
        case 3:
        {
            printf(" TRINTA");
            fprintf(file, " TRINTA");
            break;
        }
        case 4:
        {
            printf(" QUARENTA");
            fprintf(file, " QUARENTA");
            break;
        }
        case 5:
        {
            printf(" CINQUENTA");
            fprintf(file, " CINQUENTA");
            break;
        }
        case 6:
        {
            printf(" SESSENTA");
            fprintf(file, " SESSENTA");
            break;
        }
        case 7:
        {
            printf(" SETENTA");
            fprintf(file, " SETENTA");
            break;
        }
        case 8:
        {
            printf(" OITENTA");
            fprintf(file, " OITENTA");
            break;
        }
        default:
        {
            printf(" NOVENTA");
            fprintf(file, " NOVENTA");
            break;
        }
    }
}
//-------------------------------------------------------------------------------
void centena(int num)
{
    switch (num)
    {
        case 2:
        {
            printf(" DUZENTOS");
            fprintf(file, " DUZENTOS");
            break;
        }
        case 3:
        {
            printf(" TREZENTOS");
            fprintf(file, " TREZENTOS");
            break;
        }
        case 4:
        {
            printf(" QUATROCENTOS");
            fprintf(file, " QUATROCENTOS");
            break;
        }
        case 5:
        {
            printf(" QUINHENTOS");
            fprintf(file, " QUINHENTOS");
            break;
        }
        case 6:
        {
            printf(" SEISCENTOS");
            fprintf(file, " SEISCENTOS");
            break;
        }
        case 7:
        {
            printf(" SETECENTOS");
            fprintf(file, " SETECENTOS");
            break;
        }
        case 8:
        {
            printf(" OITOCENTOS");
            fprintf(file, " OITOCENTOS");
            break;
        }
        default:
        {
            printf(" NOVECENTOS");
            fprintf(file, " NOVECENTOS");
            break;
        }
    }
}
