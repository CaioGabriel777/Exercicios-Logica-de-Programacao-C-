// Questão 3 (4 Pontos)
#include <stdio.h> 

main(){
    int numLamp, minPotencia, classe, largura, comprimento, area, potenciaLampW = 60;

     printf("Digite a classe do comodo, a largura e comprimento dele: ");
     scanf("%d %d %d", &classe, &largura, &comprimento);
    area = largura * comprimento;

    if(classe == 1){
        minPotencia = area * 12;
        numLamp = minPotencia / potenciaLampW;
        printf ("\nO minimo de lampadas para a classe 1 eh: %d", numLamp);
    }else if(classe == 2){
        minPotencia = area * 15;
        numLamp = minPotencia / potenciaLampW;
        printf ("\nO minimo de lampadas para a classe 2 eh: %d", numLamp);
    }else if(classe == 3){
        minPotencia = area * 20;
        numLamp = minPotencia / potenciaLampW;
        printf ("\nO minimo de lampadas para a classe 3 eh: %d", numLamp);
    }
}