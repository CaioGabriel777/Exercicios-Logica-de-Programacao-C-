/*5. Ler um número inteiro e exibir o seu sucessor.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int num, sucessor; 
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    sucessor = num + 1; 
    printf("\nO sucessor desse numero eh: %d\n", sucessor); 

    system("PAUSE");
    return 0;
}