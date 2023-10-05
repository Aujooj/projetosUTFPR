#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 50
//-------------------------------------------------------------------
int ano, bissexto;
struct calendario
{
    int meses[31][2];
};
struct ficha
{
    int flag;
    int flagHoras;
    int codigo;
    char nome[40];
    char cargo[20];
    float valorHora;
    struct calendario mes[12];
}FUNCIONARIO[tam];
//-------------------------------------------------------------------
void iniciarFichas();
int posicaoLivre();
void iniciarCalendario();
int identificaFuncionario(char temporario[40]);
void cadastrarFuncionario();
void inserirHoras();
void calcularSalario();
void listarFuncionarios();
void alterarInf();
void excluirFuncionario();
//-------------------------------------------------------------------
int main ()
{
    int opcao, sair = 0;
    iniciarFichas();
    printf(" Informe o ano que estas fichas ser%co cadastradas\n ", 198);
    scanf("%d", &ano);
    if (ano % 4 == 0)
        bissexto = 1;
    else
        bissexto = 0;

    while (sair == 0)
    {
        printf(" Escolha uma op%c%co:\n\t1. Cadastar funcion%crio\n\t2. Inserir horas trabalhadas\n\t3. Calcular sal%crio\n\t4. Listar funcion%crios cadastrados\n\t5. Alterar informa%c%ces de um funcion%crio\n\t6. Excluir um funcion%crio\n\t7. Sair\n ", 135, 198, 160, 160, 160, 135, 228, 160, 160);
        fflush(stdin);
        scanf("%d", &opcao);
        system("cls");
        switch (opcao)
        {
            case 1:
            {
                cadastrarFuncionario();
                break;
            }
            case 2:
            {
                inserirHoras();
                break;
            }
            case 3:
            {
                calcularSalario();
                break;
            }
            case 4:
            {
                listarFuncionarios();
                break;
            }
            case 5:
            {
                alterarInf();
                break;
            }
            case 6:
            {
                excluirFuncionario();
                break;
            }
            case 7:
            {
                printf(" Encerrando ...\n\n");
                sair++;
                break;
            }
            default:
            {
                printf(" Op%c%co inv%clida!\n\n", 135, 198, 160);
                break;
            }
        }
        system("pause");
        system("cls");
    }
    return 0;
}
//-------------------------------------------------------------------
void iniciarFichas()
{
    int cont;
    for (cont = 0; cont < tam; cont++)
    {
        FUNCIONARIO[cont].flag = 0;
        FUNCIONARIO[cont].flagHoras = 0;
    }
}
//-------------------------------------------------------------------
int posicaoLivre()
{
    int cont;
    for (cont = 0; cont < tam; cont++)
    {
        if(FUNCIONARIO[cont].flag == 0)
            return cont;
    }
    return -1;
}
//-------------------------------------------------------------------
void iniciarCalendario(int fichaLivre)
{
    int i, j, k, cont;
    for (k = 0; k < 12; k++)
    {
        for (i = 0, cont = 1; i < 31; i++, cont++)
        {
            for (j = 0; j < 2; j++)
            {
                if (j == 0)
                    FUNCIONARIO[fichaLivre].mes[k].meses[i][j] = cont;
                else
                    FUNCIONARIO[fichaLivre].mes[k].meses[i][j] = 0;
            }
        }
    }
}
//-------------------------------------------------------------------
int identificaFuncionario(char temporario[40])
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (strcmp(FUNCIONARIO[i].nome, temporario) == 0)
            return i;
    }
    return -1;
}
//-------------------------------------------------------------------
void cadastrarFuncionario()
{
    int fichaLivre, i, j;
    fichaLivre = posicaoLivre();
    if (fichaLivre != -1)
    {
        FUNCIONARIO[fichaLivre].flag = 1;
        printf(" Informe o c%cdigo do funcion%crio\n ", 162, 160);
        scanf("%d", &FUNCIONARIO[fichaLivre].codigo);
        printf(" Informe o nome do funcion%crio\n ", 160);
        fflush(stdin);
        gets(FUNCIONARIO[fichaLivre].nome);
        printf(" Informe o cargo desse funcion%crio\n ", 160);
        fflush(stdin);
        gets(FUNCIONARIO[fichaLivre].cargo);
        printf(" Informe o valor hora desse funcion%crio\n ", 160);
        scanf("%f", &FUNCIONARIO[fichaLivre].valorHora);
        iniciarCalendario(fichaLivre);
        printf("\n Cadastro conclu%cdo\n\n", 161);
    }
    else
        printf(" N%co h%c mais espa%co para cadastros!\n\n", 198, 160, 135);
}
//-------------------------------------------------------------------
void inserirHoras()
{
    char aux [40];
    int id, i, j, auxHoras;
    printf(" Informe o nome do funcion%crio que deseja inserir as horas trabalhadas!\n ", 160);
    fflush(stdin);
    gets(aux);
    id = identificaFuncionario(aux);
    if (FUNCIONARIO[id].flagHoras != 0)
        id = -1;
    if (id != -1)
    {
        printf("\n Quando desejar parar, informe um n%cmero negativo\n ", 163);
        for (i = 0; i < 12; i++)
        {
            for (j = 0; j < 31; j++)
            {
                if ((i == 1 && bissexto == 0 && j > 27) ||(i == 1 && bissexto == 1 && j > 28) || (i == 3 || i == 5 || i == 8 || i == 10) && j > 29)
                    j = 32;
                else
                {
                    printf("\n %2d/%2d/%d: ", FUNCIONARIO[id].mes[i].meses[j][0], i+1, ano);
                    fflush(stdin);
                    scanf("%d", &auxHoras);
                    if (auxHoras < 0)
                    {
                        i = 13;
                        j = 32;
                    }
                    else if (auxHoras > 24)
                    {
                        printf(" Valor inv%clido de horas!\n", 160);
                        j--;
                    }
                    else
                        FUNCIONARIO[id].mes[i].meses[j][1] = auxHoras;
                }
            }
        }
        printf("\n Cadastro de horas conclu%cdo\n\n", 161);
        FUNCIONARIO[id].flagHoras = 1;
    }
    else
        printf("\n As horas trabalhadas deste funcion%crio j%c foram inseridas ou este c%cdigo ainda n%co foi cadastrado, favor verificar!\n\n", 160, 160, 162, 198);
}
//-------------------------------------------------------------------
void calcularSalario()
{
    char aux[40];
    int id, i, j, tempo;
    float auxSoma;
    printf(" Informe o nome do funcion%crio que deseja calcular o sal%crio!\n ", 160, 160);
    fflush(stdin);
    gets(aux);
    printf(" Informe qual m%cs deseja saber o sal%crio\n ", 136, 160);
    scanf("%d", &tempo);
    if (tempo > 0 && tempo < 13)
    {
        id = identificaFuncionario(aux);
        if (id != -1)
        {
            for ( i = tempo-1, auxSoma = 0; i < tempo; i++)
            {
                for ( j = 0; j < 31; j++)
                    auxSoma += FUNCIONARIO[id].mes[i].meses[j][1];
            }
            printf("\n O sal%crio do funcion%crio %s ser%c de R$: %.2f\n\n", 160, 160, FUNCIONARIO[id].nome, 160, auxSoma*FUNCIONARIO[id].valorHora);
        }
        else
            printf("\n Nome n%co encontrado! Verifique se o nome j%c foi cadastrado\n\n", 198, 160);
    }
    else
        printf("\n M%cs inv%clido\n\n", 138, 160);
}
//-------------------------------------------------------------------
void listarFuncionarios()
{
    int i, j, cont;
    for (i = 0, cont = 0; i < tam; i++)
    {
        if (FUNCIONARIO[i].flag == 1)
        {
            printf("------------------------------------------------------------------------------------------------------------------------");
            printf("\n C%cdigo: %d\n Nome: %s\n Ano: %d\n Cargo: %s\n Valor hora: R$%.2f\n", 162, FUNCIONARIO[i].codigo, FUNCIONARIO[i].nome, ano, FUNCIONARIO[i].cargo, FUNCIONARIO[i].valorHora);
            cont++;
        }
    }
    printf("------------------------------------------------------------------------------------------------------------------------\n ");
    if (cont == 0)
    {
        printf("N%co h%c nenhum funcion%crio cadastrado no momento\n", 198, 160, 160);
        printf("------------------------------------------------------------------------------------------------------------------------\n ");
    }
}
//-------------------------------------------------------------------
void alterarInf()
{
    char aux[40];
    int opcao, id;
    printf(" Informe o que deseja alterar:\n\t1. Ano\n\t2. C%cdigo \n\t3. Nome\n\t4. Cargo\n\t5. Valor hora\n\t6. Horas trabalhadas\n ", 162);
    scanf("%d", &opcao);
    printf("\n");
    if (opcao == 1)
    {
        printf(" Informe o novo ano\n ");
        scanf("%d", &ano);
        if (ano % 4 == 0)
            bissexto = 1;
        else
            bissexto = 0;
        printf("\n Salvo!\n");
    }
    else
    {
        printf(" Informe o nome do funcion%crio!\n ", 160);
        fflush(stdin);
        gets(aux);
        id = identificaFuncionario(aux);
        if (id != -1)
        {
            switch (opcao)
            {
                case 2:
                {
                    printf("\n Informe o novo c%cdigo\n ", 162);
                    scanf("%d", &FUNCIONARIO[id].codigo);
                    printf("\n Salvo!\n");
                    break;
                }
                case 3:
                {
                    printf("\n Informe o novo nome\n ", 160);
                    fflush(stdin);
                    gets(FUNCIONARIO[id].nome);
                    printf("\n Salvo!\n");
                    break;
                }
                case 4:
                {
                    printf("\n Informe o novo cargo\n ", 160);
                    fflush(stdin);
                    gets(FUNCIONARIO[id].cargo);
                    printf("\n Salvo!\n");
                    break;
                }
                case 5:
                {
                    printf("\n Informe o novo valor hora\n ", 160);
                    scanf("%f", &FUNCIONARIO[id].valorHora);
                    printf("\n Salvo!\n");
                    break;
                }
                case 6:
                {
                    iniciarCalendario(id);
                    inserirHoras();
                    printf("\n Salvo!\n");
                    break;
                }
                default:
                {
                    printf("\n Op%c%co inv%clida!\n\n", 135, 198, 160);
                    break;
                }
            }
        }
        else
            printf("\n Nome n%co encontrado! Verifique se o nome j%c foi cadastrado\n\n", 198, 160);
    }
    printf("\n ");
}
//-------------------------------------------------------------------
void excluirFuncionario()
{
    int i, id, aux;
    printf(" Informe o c%cdigo do funcion%crio!\n ", 162, 160);
    scanf("%d", &aux);
    for (i = 0; i < tam; i++)
    {
        if (FUNCIONARIO[i].codigo == aux)
        {
            id = i;
            break;
        }
        if (i == tam-1)
            id = -1;
    }
    if (id != -1)
    {
        FUNCIONARIO[id].flag = 0;
        FUNCIONARIO[id].flagHoras = 0;
        iniciarCalendario(id);
        printf("\n Funcion%crio exclu%cdo\n\n", 160, 161);
    }
    else
        printf("\n Nome n%co encontrado! Verifique se o nome j%c foi cadastrado\n\n", 198, 160);
}
//-------------------------------------------------------------------
