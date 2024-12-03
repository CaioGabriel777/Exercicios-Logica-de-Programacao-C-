//Questão 04
#include <stdio.h>

int main(){
    int dia, mes;

    printf("Digite um dia e um mes: ");
    scanf("%d %d", &dia, &mes); 

    if(dia >= 1 && dia <= 31){
        if(dia == 1){
            printf("Primeiro ");
        }
        else if(dia == 2){
            printf("Dois ");
        }
        else if(dia == 3){
            printf("Tres ");
        }
        else if(dia == 4){
            printf("Quatro ");
        }
        else if(dia == 5){
            printf("Cinco ");
        }
        else if(dia == 6){
            printf("Seis ");
        }
        else if(dia == 7){
            printf("Sete ");
        }
        else if(dia == 8){
            printf("Oito ");
        }
        else if(dia == 9){
            printf("Nove ");
        }
        else if(dia == 10){
            printf("Dez ");
        }
        else if(dia == 11){
            printf("Onze ");
        }
        else if(dia == 12){
            printf("Doze ");
        }
        else if(dia == 13){
            printf("Treze ");
        }
        else if(dia == 14){
            printf("Quatorze ");
        }
        else if(dia == 15){
            printf("Quinze ");
        }
        else if(dia == 16){
            printf("Dezeseis ");
        }
        else if(dia == 17){
            printf("Dezesete ");
        }
        else if(dia == 18){
            printf("Dezoito ");
        }
        else if(dia == 19){
            printf("Dezenove ");
        }
        else if(dia == 20){
            printf("Vinte ");
        }
    }

    if(dia >= 21 && dia < 30){
        printf("Vinte e ");
        if(dia % 10 == 1){
            printf("Um");
        }
        else if(dia % 10 == 2){
            printf("Dois ");
        }
        else if(dia % 10 == 3){
            printf("Tres ");
        }
        else if(dia % 10 == 4){
            printf("Quatro ");
        }
        else if(dia % 10 == 5){
            printf("Cinco ");
        }
        else if(dia % 10 == 6){
            printf("Seis ");
        }
        else if(dia % 10 == 7){
            printf("Sete ");
        }
        else if(dia % 10 == 8){
            printf("Oito ");
        }
        else if(dia % 10 == 9){
            printf("Nove ");
        }
    }
    else if(dia == 30){
        printf("Trinta ");
    }else if (dia == 31){
        printf("Trinta e Um ");
    }

    switch (mes)
    {
        case 1: 
        printf("de Janeiro");
        break;
        case 2: 
        printf("de Fevereiro");
        break;
        case 3: 
        printf("de Marco");
        break;
        case 4: 
        printf("de Abril");
        break;
        case 5: 
        printf("de Maio");
        break;
        case 6: 
        printf("de Junho");
        break;
        case 7: 
        printf("de Julho");
        break;
        case 8: 
        printf("de Agosto");
        break;
        case 9: 
        printf("de Setembro");
        break;
        case 10: 
        printf("de Outubro");
        break;
        case 11: 
        printf("de Novembro");
        break;
        case 12: 
        printf("de Dezembro");
        break;
    }

    return 0;
}