/*4. Dado os três lados de um triângulo determinar o perímetro do mesmo.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float lado1T = 2, lado2T = 3, lado3T = 5, perimetro;  

    perimetro = (lado1T + lado2T + lado3T); 

    printf("O perimetro do triangulo eh: %.2f\n", perimetro);

    system("PAUSE");
    return 0;
}