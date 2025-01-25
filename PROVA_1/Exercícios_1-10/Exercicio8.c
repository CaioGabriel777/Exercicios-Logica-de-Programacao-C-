/*8. Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um 
valor de temperatura em Fahrenheit e exibi-lo em Celsius*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    float tempF, tempC; 

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &tempF);
    tempC = 5.0/9.0 * (tempF - 32.0);
    printf("\nA temperatura digitada em Celsius eh: %.1f", tempC); 
    printf(" C\n"); 

    system("PAUSE");
    return 0;
}