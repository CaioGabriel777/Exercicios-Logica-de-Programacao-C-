/*11.  Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é  obtida 
pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 
2 notas de provas.*/
#include <stdlib.h>
#include <stdio.h>

int main(){
float notaSemes, bimestre1, bimestre2, prova1, prova2, prova3, prova4;
printf("Digite sua nota da primeira prova do primeiro bimestre: ");
scanf("%f", &prova1);
printf("\nAgora da segunda prova: ");
scanf("%f", &prova2); 
bimestre1 = prova1 + prova2;
printf("\nSeu primeiro bimestre: %.1f", bimestre1);
printf("\nDigite sua nota da terceira prova do segundo bimestre: ");
scanf("%f", &prova3);
printf("\nAgora da quarta prova: ");
scanf("%f", &prova4); 
bimestre2 = prova3 + prova4;
printf("\nSeu segundo bimestre: %.1f", bimestre2);
notaSemes = (bimestre1 + bimestre2)/2; 
printf("\nSua nota semestral eh: %.1f\n", notaSemes);

system("PAUSE");
return 0;
}