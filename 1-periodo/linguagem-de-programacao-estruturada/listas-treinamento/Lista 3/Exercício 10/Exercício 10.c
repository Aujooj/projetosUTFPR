#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char opcao;
    printf(" Escolha uma das op%c%ces:\n\t<M>am%cferos\n\t<A>ves\n ", 135, 228, 161);
    fflush(stdin);
    scanf("%c",&opcao);
    switch (opcao) {
        case 'M' : {
            printf(" Escolha uma das op%c%ces:\n\t<Q>uadrupde\n\t<B>%cpede\n ", 135, 228, 161);
            fflush(stdin);
            scanf("%c",&opcao);
            switch (opcao) {
                case 'Q': {
                    printf(" Escolha uma das op%c%ces:\n\t<C>arn%cvoro\n\t<H>erb%cvoro\n ", 135, 228, 161, 161);
                    fflush(stdin);
                    scanf("%c",&opcao);
                    switch (opcao) {
                        case 'C': {
                            printf(" Le%co!\n\n ",198);
                            break;
                        }
                        case 'H': {
                            printf(" Cavalo!\n\n ");
                            break;
                        }
                        default: {
                            printf(" Op%c%co inv%clida!\n\n ", 135,198,160);
                        }
                    }
                    break;
                }
                case 'B': {
                    printf(" Escolha uma das op%c%ces:\n\t<O>n%cvoro\n\t<F>rut%cfero\n ", 135, 228, 161, 161);
                    fflush(stdin);
                    scanf("%c",&opcao);
                    switch (opcao) {
                        case 'O': {
                            printf(" Homem!\n\n ");
                            break;
                        }
                        case 'F': {
                            printf(" Macaco!\n\n ");
                            break;
                        }
                        default: {
                            printf(" Op%c%co inv%clida!\n\n ", 135,198,160);
                        }
                    }
                    break;
                }
                default: {
                    printf(" Op%c%co inv%clida!\n\n ", 135,198,160);
                }
            }
            break;
        }
        case 'A': {
            printf(" Escolha uma das op%c%ces:\n\tN%co%c<V>oadores\n\t<N>adadora\n ", 135, 228, 198, 45);
            fflush(stdin);
            scanf("%c",&opcao);
            switch (opcao) {
                    case 'V': {
                        printf(" Escolha uma das op%c%ces:\n\t<T>ropical\n\t<P>olar\n ", 135, 228);
                        fflush(stdin);
                        scanf("%c",&opcao);
                        switch (opcao) {
                            case 'T': {
                                printf(" Avestruz!\n\n ");
                                break;
                            }
                            case 'P': {
                                printf(" Pinguim!\n\n ");
                                break;
                            }
                            default: {
                                printf(" Op%c%co inv%clida!\n\n ", 135,198,160);
                                break;
                            }
                        }
                        break;
                    }
                    case 'N': {
                        printf(" Pato!\n\n ");
                        break;
                    }
                    default: {
                        printf(" Op%c%co inv%clida!\n\n ", 135,198,160);
                    }
            }
            break;
        }
        default: {
            printf(" Op%c%co inv%clida!\n\n ", 135,198,160);
        }
    }
    system("pause");
    return 0;
}

