/*3. Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    float raioC = 10, areaC, perimetroC, pi = 3.14; 

    areaC = pi * (raioC * raioC);
    perimetroC = 2 * pi * raioC; 

    printf("A area da circunferencia eh: %.1f\n", areaC);
    printf("O perimetro da circunferencia eh: %.1f\n", perimetroC);

    system("PAUSE");
    return 0;
}