/*Questão II (3.5) 
A sequencia de Recamán é uma sequência, onde seus os termos são dados pela seguinte 
relação:  
* A0 = 0; para n > 0,  
* An = An-1 – n, se o termo for positivo e já não estiver na sequência,  
* An = An-1 + n, caso contrário.  
Escreva um programa em C, que gere e armazene em um vetor de vinte posições, os 20 
primeiros termos da série (seu algoritmo deverá ser feito de forma a permitir a mudança 
do tamanho do vetor com o mínimo de impacto).  Exemplo da série de Recamán até o nono termo: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21...*/

#include <stdio.h>

int main(){

    int N = 20, A[N];

    for(int i = 0; i < N; i++){
        if(i == 0){
            A[i] = 0;
        }

        if(i != 0 && A[i] % 2 == 0){
            A[i] = A[i -1] - i;
        }

        if(i != 0){
          A[i] = A[i - 1] + i;
        }
        

        printf("%d ", A[i]);
    } 

    return 0;
}