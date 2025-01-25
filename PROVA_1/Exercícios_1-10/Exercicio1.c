/*1. Dado o tamanho da base e da altura de um ret�ngulo, calcular a sua �rea e o seu per�metro*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int baseR = 10, alturaR = 2, area, perimetro; 

    area = baseR * alturaR;
    perimetro = 2*(baseR + alturaR); 
    
    printf("A area do retangulo eh: %d\n", area); 
    printf("O perimetro do retangulo eh: %d\n", perimetro); 

    system("PAUSE");
    return 0;
}