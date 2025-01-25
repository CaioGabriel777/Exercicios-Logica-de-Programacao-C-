// Questão 2 (5 Pontos)
#include <stdio.h>

int main()
{
    int r1, r2, r3, ea1, ea2, ea3, senha, estadoAtual, m1, m2, m3, cima, baixo, distancia;

    printf("Ditie a senha atual: ");
    scanf("%d", &senha);
    printf("Agora digte um numero correspondente para cada roda do cadeado em ordem: ");
    scanf("%d", &estadoAtual);
    if (estadoAtual > 999 || (estadoAtual < 100 && estadoAtual != 000))
    {
        printf("\nNumero invalido! Digite 3 digitos!");
    }
    r1 = senha / 100;
    ea1 = estadoAtual / 100;
    if (r1 <= ea1)
    {
        cima = ea1 - r1;
    }
    else
    {
        cima = r1 - ea1;
    }
    baixo = 10 - cima;
    if (cima <= baixo)
    {
        distancia += cima;
    }
    else
    {
        distancia += baixo;
    }
    m1 = distancia;

    r2 = (senha / 10) % 10;
    ea2 = (estadoAtual / 10) % 10;
    if (r2 <= ea2)
    {
        cima = ea2 - r2;
    }
    else
    {
        cima = r2 - ea2;
    }
    baixo = 10 - cima;
    if (cima <= baixo)
    {
        distancia += cima;
        m2 = cima;
    }
    else
    {
        distancia += baixo;
        m2 = baixo;
    }

    r3 = senha % 10;
    ea3 = estadoAtual % 10;
    if (r3 <= ea3)
    {
        cima = ea3 - r3;
    }
    else
    {
        cima = r3 - ea3;
    }
    baixo = 10 - cima;
    if (cima <= baixo)
    {
        distancia += cima;
        m3 = cima;
    }
    else
    {
        distancia += baixo;
        m3 = baixo;
    }

    printf("\nOs numeros minimos sao: %d %d %d", m1, m2, m3);
    printf("\nDistancia: %d", distancia);

    //DIGITO 101;
    //a minimo de movimentos tem que ser: 1 3 2
    return 0;   
}
