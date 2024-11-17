/*9. Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado 
seu raio e sua altura.*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    float volumeLdO, raioLdO = 2.0, alturaRdO = 5.0, pi = 3.14; 

    volumeLdO = pi * (raioLdO * raioLdO) * alturaRdO; 
    printf("O volume da lata de oleo eh: %.2f\n", volumeLdO);

    system("PAUSE");
    return 0;
}