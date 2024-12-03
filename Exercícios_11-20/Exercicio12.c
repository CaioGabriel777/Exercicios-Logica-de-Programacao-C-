/*12.  Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para 
Km/h. Para tal, multiplique o valor em m/s por 3,6. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float velms; 

    printf("\nDigite uma velocidade em m/s: ");
    scanf("%f", &velms);
    velms *= 3.6;
    printf("O valor digitado em m/s para km/h eh: %.1f\n", velms);

    system("PAUSE");
    return 0;
}