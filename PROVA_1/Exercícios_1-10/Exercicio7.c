/*7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    int idadeDias, convAnos, convMes, convDias;
    printf("Digite sua idade em dias: ");
    scanf("%d", &idadeDias);
    convAnos = idadeDias / 365; 
    convMes = convAnos * 12;
    convDias = convMes * 30;

    printf("Voce tem: %d", convAnos);
    printf(" anos\n");
    printf("Voce tem: %d", convMes);
    printf(" meses\n");
    printf("Voce tem: %d", convDias);
    printf(" dias\n");

    system("PAUSE");
    return 0;
}