#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char estado;
    printf(" Escolha o estado civil:\n   Casado %c C\n   Desquitado %c E\n   Divorciado %c D\n   Solteiro %c S\n   Vi%cvo %c V\n ",45,45,45,45,163,45);
    fflush(stdin);
    scanf("%c",&estado);
    switch (estado) {
        case 'c':
        case 'C': {
            printf(" Descri%c%co:\n %c o indiv%cduo que possui uma uni%co matrimonial atrav%cs do casamento civil, independente do regime de bens adotado.\n\n ",135,198,144,161,198,130);
            break;
        }
        case 'e':
        case 'E':{
            printf(" Descri%c%co:\n %c quem n%co vive mais com o companheiro, por%cm ainda n%co est%c divorciado. A pessoa que est%c separada, pode decretar a separa%c%co judicial, para acabar com os deveres da sociedade conjugal.\n\n ",135,198,144,198,130,198,160,160,135,198);
            break;
        }
        case 'd':
        case 'D':{
            printf(" Descri%c%co:\n %c a pessoa que teve homologado seu pedido de div%crcio atrav%cs da justiça, ou de uma escritura.\n\n ",135,198,144,162,130);
            break;
        }
        case 's':
        case 'S':{
            printf(" Descri%c%co:\n %c a pessoa que nunca se casou, independente se possui um relacionamento est%cvel ou n%co.\n\n ",135,198,144,160,198);
            break;
        }
        case 'v':
        case 'V':{
            printf(" Descri%c%co:\n %c o indiv%cduo que o c%cnjuge (marido ou esposa) faleceu.\n\n ",135,198,144,161,147);
            break;
        }
        default : {
            printf("\n Estado civil desconhecido!\n\n ");
        }
    }
    system("pause");
    return 0;
}
