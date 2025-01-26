/* Uma das maneiras de conseguir a raiz quadrada de um número é subtrair do número os ímpares consecutivos a partir                                       
de 1, até que o resultado da subtração seja menor ou igual a zero. O número de vezes que se conseguir fazer esta                                             
subtração é a raiz quadrada exata (quando o resultado da última subtração é 0) ou aproximada do número (quando o                                       
resultado da última subtração é negativo). 
Ex,.: Raiz de 16: 16­1 => 15­3 => 12­5 => 7­7 = 0 Logo, a raiz de 16 é 4.  
Raiz de 27: 27 – 1 => 26 – 3 => 23 – 5 => 18 – 7 => 11 – 9 => 2 – 11 = ­ 9. Logo, a raiz de 27 é 6. 
Escreva em C um algoritmo que use esta técnica para calcular a raiz quadrada (exata ou aproximada) de um número                                       
inteiro. */

#include <stdio.h>

int main(){

    int num, numImpar = 1, numResultado, i = 0; 

    printf("Digite um numero para tirar a raiz quadrada: ");
    scanf("%d", &num); 

    numResultado = num; 
    while(numResultado > 0){
        numResultado -= numImpar;
        numImpar += 2;
        i++; 
    }      

    if(numResultado == 0){
        printf("\nA raiz de %d eh: %d\n", num, i);
    }else{
        printf("A raiz de %d nao eh um numero exato", num);
        printf("\nA raiz aproximada eh: %d", i);
    }
 

    return 0;
}