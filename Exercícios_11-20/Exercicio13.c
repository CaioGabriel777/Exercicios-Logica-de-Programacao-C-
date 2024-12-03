/*13.   Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em 
sequência de uma resistência R3. Faça um algoritmo para calcular a resistência 
equivalente desse circuito.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int R1, R2, R3, Rp, Req;
    
    Rp = (R1 * R2)/(R1 + R2);
    Req = Rp + R3;  

    system("PAUSE");
    return 0;
}