//Questão 2 (4 Pontos)
#include <stdio.h>

main(){
    int dia, mes, ano, diaPos, diasMax, mesMax = 12;

    printf("Informe o dia, mes e ano na ordem: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    diaPos = dia + 1;
    
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || 
    mes == 10 || mes == 12){
        diasMax = 31;
        if(diaPos > diasMax){
            diaPos -= diasMax;
            mes++; 
         }
    }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        diasMax = 30;
        if(diaPos > diasMax){
            diaPos -= diasMax;
            mes++; 
         }
    }else if(mes == 2){
        if(ano % 4 == 0){
            diasMax = 29;
            if(diaPos > diasMax){
            diaPos -= diasMax;
            mes++; 
         }
        }else{
            diasMax = 28;
            if(diaPos > diasMax){
            diaPos -= diasMax;
            mes++; 
         }
        }
    }if(mes > mesMax){
        mes -= mesMax;
        ano++; 
    }

    printf("\n DIA POSTERIOR: %d / %d / %d", 
    diaPos, mes, ano);
}