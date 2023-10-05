#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------   // Funções usadas para o trabalho
void comandoBreak();
void comandoContinue();
void comandoReturn();
float comandoReturnConta(char conta, float numA, float numB); // Função auxiliar para demonstração do exemplo return
void comandoGoto();
void funcaoExit();
int sair(int confirmar);                                      // Função de fechamento do programa
void linhaSeparadora();                                       // Função usada para identar melhor o programa para o usuário
//--------------------------------------------------------- 
int main ()
{
    int opcao, ciclo = 0;
    do
    {
        fflush(stdin);
        printf(" Escolha uma das 6 op%c%ces:\n", 135, 228);   // Menu do programa
        printf("\t1. Exemplo comando break;\n\t2. Exemplo comando continue;\n\t3. Exemplo comando return;\n\t4. Exemplo comando goto;\n\t5. Exemplo fun%c%co exit;\n\t6. Sair\n ", 135, 198);
        scanf("%d",&opcao);
        linhaSeparadora();
        switch (opcao)                                        //Exemplos:
        {
        case 1:
        {
            comandoBreak();
            break;
        }
        case 2:
        {
            comandoContinue();
            break;
        }
        case 3:
        {
            comandoReturn();
            break;
        }
        case 4:
        {
            comandoGoto();
            break;
        }
        case 5:
        {
            funcaoExit();
            break;
        }
        case 6:
        {

            int confirmar;
            ciclo = sair(confirmar);
            break;
        }
        default:
        {
            printf(" Op%c%co desconhecida!!!\n\n", 135, 198);
            system("pause");
            system("cls");
        }
    }
    }
    while (ciclo == 0);
    return 0;
}
//---------------------------------------------------------
void comandoBreak()
{
    int descricao, escolhido, numPrograma = 1, ciclo = 0;
    printf(" Exemplo comando break\n\t1. Descri%c%co\n\t2. Executar c%cdigo\n ", 135, 198, 162); // Menu da função
    scanf("%d",&descricao);
    switch (descricao)
    {
        case 1:
        {
            linhaSeparadora();
            printf(" Descri%c%co:\n O programa necessita a entrada de um n%cmero entre 1 e 10. Esse n%cmero corresponde a quantidade de vezes que o ciclo se repete. Esse %c um exemplo do comando break para a quebra do ciclo de repeti%c%co.", 135, 198, 163, 163, 130, 135, 198);
            linhaSeparadora();
        }
        case 2:
        {
            printf("\n Informe um n%cmero de 1 a 10\n ", 163, 163);
            scanf("%d",&escolhido);
            if (escolhido >= 1 && escolhido <= 10)
            {
                printf("\n");                            // Usado para identar melhor o programa para o usuario, aparecerá novamente no código
                while (ciclo == 0)
                {
                    if (numPrograma <= escolhido)
                    {
                        printf(" %d\n",numPrograma++);
                    }
                    else
                    {
                        printf("\n");
                        break;
                    }
                }
            }
            else
            {
                printf("\n N%cmero inv%clido!\n\n", 163, 160);
            }
            break;
        }
        default:
            printf("\n Op%c%co desconhecida!\n\n", 135, 198);
    }
    printf(" A fun%c%co vai encerrar!\n", 135, 198); // Aviso para o usuário que a função vai ser encerrada, e limpeza da tela, apareceram
    system("pause");                                 // novamente no código
    system("cls");
}
//---------------------------------------------------------
void comandoContinue()
{
    int descricao, numPrograma = 0, escolhido;
    printf(" Exemplo comando continue\n\t1. Descri%c%co\n\t2. Executar c%cdigo\n ", 135, 198, 162);
    scanf("%d",&descricao);
    switch (descricao)
    {
        case 1:
        {
            linhaSeparadora();
            printf(" Descri%c%co:\n O programa necessita a entrada de um n%cmero entre 1 e 10. Esse n%cmero representa onde o comando continue age, pulando a execu%c%co.", 135, 198, 163, 163, 135, 198);
            linhaSeparadora();
        }
        case 2:
        {
            printf("\n Informe um n%cmero de 1 a 10\n ", 163);
            scanf("%d",&escolhido);
            if (escolhido >= 1 && escolhido <= 10)
            {
                printf("\n");
                do
                {
                    numPrograma++;
                    if (numPrograma >= escolhido &&  numPrograma <= escolhido)
                    {
                        continue;
                    }
                    printf (" %d\n", numPrograma);
                }
                while (numPrograma <= 9);
                printf("\n");
            }
            else
            {
                printf("\n N%cmero inv%clido!\n\n", 163, 160);
            }
            break;
        }
        default:
            printf("\n Op%c%co desconhecida!\n\n", 135, 198);
    }
    printf(" A fun%c%co vai encerrar!\n", 135, 198);
    system("pause");
    system("cls");
}
//---------------------------------------------------------
void comandoReturn()
{
    char operacao;
    float num1, num2;
    int descricao;
    printf(" Exemplo comando return\n\t1. Descri%c%co\n\t2. Executar c%cdigo\n ", 135, 198, 162);
    scanf("%d",&descricao);
    switch (descricao)
    {
        case 1:
        {
            linhaSeparadora();
            printf(" Descri%c%co:\n O programa necessita a entrada de uma opera%c%co, em seguida pede dois n%cmeros e executa a opera%c%co escolhida. Realiza a opera%c%co em uma fun%c%co usando o comando return para voltar a resposta para a fun%c%co principal.\n ", 135, 198, 135, 198, 163, 135, 198, 135, 198, 135, 198, 135, 198);
            linhaSeparadora();
        }
        case 2:
        {
            printf("\n Escolha uma opera%c%co:\n\t* Multiplica%c%co\n\t/ Divis%co\n ", 135, 198, 135, 198, 198);
            fflush(stdin);
            scanf("%c",&operacao);
            printf(" Informe um n%cmero\n ", 163);
            scanf("%f",&num1);
            printf(" Informe outro n%cmero\n ", 163);
            scanf("%f",&num2);
            if (operacao == '*')
            {
                printf("\n A multiplica%c%co: %.0f*%.0f %c igual a %.0f\n\n", 135, 198, num1, num2, 130, comandoReturnConta(operacao, num1, num2));
            }
            else if (operacao == '/')
            {
                if (num2 == 0)
                {
                    printf("\n Divis%co por 0 n%co existe!\n\n", 198, 198);
                }
                else
                {
                    printf("\n A divis%co: %.2f/%.2f %c igual a %.2f\n\n", 198, num1, num2, 130, comandoReturnConta(operacao, num1, num2));
                }
            }
            else
                printf("\n Opera%c%co desconhecida!\n\n", 135, 198);
            break;
        }
        default:
            printf("\n Op%c%co desconhecida!\n\n", 135, 198);
    }
    printf(" A fun%c%co vai encerrar!\n", 135, 198);
    system("pause");
    system("cls");
}
//---------------------------------------------------------
float comandoReturnConta(char conta, float numA, float numB)    // Função auxiliar
{
    float res;
    if (conta == '*')
    {
        res = numA*numB;
        return res;
    }
    else
    {
        res = numA/numB;
        return res;
    }
}
//---------------------------------------------------------
void comandoGoto()
{
    int descricao, codigo, tentativas = 0, ciclo = 0;
    printf(" Exemplo comando goto\n\t1. Descri%c%co\n\t2. Executar c%cdigo\n ", 135, 198, 162);
    scanf("%d",&descricao);
    switch (descricao)
    {
        case 1:
        {
            linhaSeparadora();
            printf(" Descri%c%co:\n O programa %c um ciclo que s%c %c parado ao digitar a senha correta, ou ap%cs tr%cs tentativas falhas. Neste caso %c usado o comando goto para a quebra do ciclo antes da condi%c%co esperada.", 135, 198, 130, 162, 130, 162, 136, 130, 135, 198);
            linhaSeparadora();
        }
        case 2:
        {
            printf("\n Tente descobrir a senha. Ela %c um n%cmero de apenas um d%cgito!\n", 130, 163, 161);
            do
            {
                printf("\n Voc%c tem %d chances antes da senha ser revelada\n ", 136, -(tentativas-3));  // Contador de tentativas
                scanf("%d",&codigo);
                if (codigo == 1)
                {
                    printf("\n Parab%cns, voc%c acertou a senha!\n\n", 130, 136);
                    goto fim;
                }
                else
                {
                    tentativas++;
                    if (tentativas == 3)
                    {
                        linhaSeparadora();
                        printf(" A senha %c 1", 130);
                        linhaSeparadora();
                        printf("\n");
                        ciclo = 1;
                    }
                }
            }
            while (ciclo == 0);
            break;
        }
        default:
            printf("\n Op%c%co desconhecida!\n\n", 135, 198);
    }
    fim:
    printf(" A fun%c%co vai encerrar!\n", 135, 198);
    system("pause");
    system("cls");
}
//---------------------------------------------------------
void funcaoExit()
{
    int descricao;
    printf(" Exemplo fun%c%co exit\n\t1. Descri%c%co\n\t2. Executar c%cdigo\n ", 135, 198, 135, 198, 162);
    scanf("%d",&descricao);
    switch (descricao)
    {
        case 1:
        {
            linhaSeparadora();
            printf(" Descri%c%co:\n O programa executado ir%c confirmar se o usu%crio deseja fechar o programa, caso afirmativo usar%c a fun%c%co exit para finaliz%c-lo.", 135, 198, 160, 160, 160, 135, 198, 160);
            linhaSeparadora();
        }
        case 2:
        {
            system("pause");
            int confirmar;
            system("cls");
            printf(" Deseja mesmo fechar o programa?\n\t1. N%co\n\t2. Sim\n ", 198);
            scanf("%d",&confirmar);
            if (confirmar == 2)
            {
                exit (0);
            }
            system("cls");
            break;
        }
        default:
            printf("\n Op%c%co desconhecida!\n\n", 135, 198);
            printf(" A fun%c%co vai encerrar!\n", 135, 198);
            system("pause");
            system("cls");
    }
}
//---------------------------------------------------------
int sair(int confirmar)
{
    system("cls");
    printf(" Deseja mesmo fechar o programa?\n\t1. N%co\n\t2. Sim\n ", 198);    // Confirmação com o usuário
    scanf("%d",&confirmar);
    if (confirmar == 2)
    {
        system("cls");
        printf(" Encerrando ...\n");
        return 1;
    }
    else
    {
        system("cls");
        return 0;
    }
}
//---------------------------------------------------------
void linhaSeparadora()
{
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
}
