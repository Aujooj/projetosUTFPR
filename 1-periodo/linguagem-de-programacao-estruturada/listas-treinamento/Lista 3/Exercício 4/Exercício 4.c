#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char letra;
    printf(" Insira uma letra\n ");
    scanf("%c",&letra);
    if ((letra >= 'A')&&(letra <= 'Z')||(letra >= 'a')&&(letra <= 'z')) {
        switch (letra) {
            case 'a' :
            case 'e' :
            case 'i' :
            case 'o' :
            case 'u' : {
                printf(" A letra inserida %c uma vogal min%cscula\n\n ",130,163);
                break;
            }
            case 'A' :
            case 'E' :
            case 'I' :
            case 'O' :
            case 'U' : {
                printf(" A letra inserida %c uma vogal mai%cscula\n\n ",130,163);
                break;
            }
            default:
                printf(" A letra inserida %c uma consoante\n\n ",130);
        }
    }
    else {
        printf(" Letra desconhecida! Utilize apenas letras do alfabeto\n\n ");
    }
    system("pause");
    return 0;
}
