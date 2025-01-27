/*Questão I (3.5) 
Um número primo é um número que possui somente dois divisores: ele mesmo e o número 1. 
Um número primo p é um número primo de Chen se o próximo número ímpar (p + 2) é primo ou o produto de dois primos (subprimo). 
Escreva um programa em C, que leia um número e verifique se ele é um número primo 
de Chen. Por exemplo,  2 é um primo de Chen, pois 2+2 = 4 e 4 é subprimo (2*2). 3 é um primo de Chen, pois 3+2 = 5 e 5 é primo.*/

#include <stdio.h>

int main(){

    int numPrimo, num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    numPrimo = num + 2;

    for(i = 2; i < numPrimo; i++){
        if(numPrimo % i == 0 && num != 2){
            printf("\nNao eh primo de Chen");
            break;
        }
    }
    if(numPrimo == i || numPrimo == i * i){
        printf("\n O numero %d eh primo de Chen", num);
    }
   
    return 0;
}