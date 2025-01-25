/*6. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles. */

#include <stdlib.h>
#include <stdio.h>

int main(){

    int num1 = 10, num2 = 5, quociente, restoDiv; 

    quociente = num1 / num2;  
    restoDiv = num1 % num2; 

    printf("O quociente de 10 dividido por 5 eh: %d\n", quociente);
    printf("O resto da divisao de 10 e 5 eh: %d\n", restoDiv); 

    system("PAUSE");
    return 0;
}