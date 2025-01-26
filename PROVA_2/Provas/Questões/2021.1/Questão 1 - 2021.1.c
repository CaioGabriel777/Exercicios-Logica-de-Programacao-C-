/*1) (5.0) DESAFIO DOS VETORES: Você foi contratado para desvendar os três desafios do VETOR.  
 
O Primeiro desafio:  
 
1-  Dado dois arrays de números inteiros com 10 elementos imprima os números do primeiro array que não estão 
presentes no segundo array. Lembrando que os números não podem ser repetidos no vetor 1 e vetor 2.  
 
Vetor 1- 
2  3  4  5  6  12  1  23  11  32 
 
Vetor 2- 
2  31  4  51  16  12  1  23  111  323 
 
Reposta:  
3  5  6  11 
 
O Segundo desafio: 
  
2-  Após resolver a etapa um você deve realizar a soma do vetor 1 e vetor 2 e imprimir os valores do Vetor 1 , Vetor2 
e o nome vetor que pode ser chamado de resultado. 
O Terceiro desafio: 
 
3-  Para finalizar, você deve informar quais são os números primos no Vetor1, Vetor2 e Vetor Resultado.   
*/

#include <stdio.h>

int main(){

    //Primeiro Desafio

    int vetor1[] = {2, 3, 4, 5, 6, 12, 1, 23, 11, 32}, vetor2[] = {2, 31, 4, 51, 16, 12, 1, 23, 111, 323};
    int encontrado, resultado[9], primo;

    printf("Resposta: ");

    for(int i = 0; i <= 9; i++){
        encontrado = 0;

        for(int k = 0; k <= 9; k++){
            if(vetor1[i] == vetor2[k]){
                encontrado = 1;
                break; 
            }
        }
        if(encontrado != 1){
            printf("%d ", vetor1[i]);
        }

    }

    // Segundo Desafio
    printf("\nA soma dos dois vetores sao: ");
    for(int i = 0; i <= 9; i++){
        resultado[i] = vetor1[i] + vetor2[i];
        printf("%d ", resultado[i]);
    }


    // Terceiro Desafio
     printf("\n");
    //VETOR 1
    for(int i = 0; i <= 9; i++){
        if(vetor1[i] == 2){
            primo = vetor1[i];
        }
        for(int k = 2; k < vetor1[i]; k++){
            if(vetor1[i] % k == 0){
                break;
            }else{
                primo = vetor1[i];
            }
        }
        if(primo == vetor1[i]){
            printf("%d ", primo);
        }
    }
    
    printf("\n"); 
    //VETOR 2
    for(int i = 0; i <= 9; i++){
        if(vetor2[i] == 2){
            primo = vetor2[i];
        }
        for(int k = 2; k < vetor2[i]; k++){
            if(vetor2[i] % k == 0){
                break;
            }else{
                primo = vetor2[i];
            }
        }
        if(primo == vetor2[i]){
            printf("%d ", primo);
        }
    }


    printf("\n");
    //RESULTADO
    for(int i = 0; i <= 9; i++){
        if(resultado[i] == 2){
            primo = resultado[i];
        }
        for(int k = 2; k < resultado[i]; k++){
            if(resultado[i] % k == 0){
                break;
            }else{
                primo = resultado[i];
            }
        }
        if(primo == resultado[i]){
            printf("%d ", primo);
        }
    }

    return 0;
}