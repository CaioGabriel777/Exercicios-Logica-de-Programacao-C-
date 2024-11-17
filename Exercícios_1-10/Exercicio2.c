/*2. Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo. */

#include <stdlib.h>
#include <stdio.h>

int main(){
    int ladoQ = 10, areaQ, perimetroQ; 
    
    areaQ = ladoQ * ladoQ;
    perimetroQ = 4 * ladoQ;

    printf("A area do Quadrado eh: %d\n", areaQ);
    printf("O perimetro do Quadrado: eh %d\n", perimetroQ);

    system("PAUSE");
    return 0;
}