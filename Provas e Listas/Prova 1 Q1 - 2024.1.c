// Questão 1 (5 Pontos)
#include <stdio.h>
int main(){
    int distanciaTotal, sensor1 = 1, sensor2 = 2, sensor3 = 3;
    printf("Digite a distancia total: ");
    scanf("%d", &distanciaTotal);
    if(distanciaTotal % 2 != 0){
        printf("A PARTICULA PAROU NO SENSOR: %d", sensor2); 
    }else if(distanciaTotal % 8 == 0){
        printf("A PARTICULA PAROU NO SENSOR: %d", sensor3); 
    }else if(distanciaTotal % 2 == 0 && distanciaTotal % 8 != 0){ 
        printf("A PARTICULA PAROU NO SENSOR: %d", sensor1);
    }else{
        printf("\nDigite um numero valido");
    }
    return 0;
}