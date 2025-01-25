//Questão 1 (2 Pontos)
#include <stdio.h>

main(){
    float salario, desconto, descontoMax = 570.88;
    printf("Informe seu salario: ");
    scanf("%f", &salario);
    desconto = salario * 0.11;
    if (desconto >= descontoMax){
        desconto = descontoMax;
    }
    printf("\nSeu desconto: %.2f", desconto);
    printf("\nSeu salario com desconto: %.2f", salario - desconto);
}