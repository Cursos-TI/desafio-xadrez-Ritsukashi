#include <stdio.h>

// programa pra definir quantas casas cada peça (torre, rainha e bispo) ira andar
// utilizando uma estrutura de repetição
// seja for, while e do-while
// cada uma com uma quantia de casas já definida

int main(){
    int d = 1;
    int e = 1;
    int m = 1;

    //-- TORRE --

    // for de movimentação para a Torre
    for(int i = 0; i < 5; i++)
    {   //aqui ele vai ler quantas vezes ele vai para cima ou para vertical
        printf("Direita\n");
    }
    printf("A torre se moveu 5 casas para a direita\n\n");
    // com o número já determinado, ele fala quantas casas foram andadas

    //-- BISPO --

    // while para a movimentação do Bispo
    while (d <= 5)
    {   //aqui ele vai ler quantas vezes ele vai para diágonal
        printf("Cima Direita\n");
        d++; // aqui ele faz com que o looping n seja infinito
    }
    printf("O bispo se moveu 5 casas para a diagonal\n\n");
    // com o número já determinado, ele fala quantas casas foram andadas

    //-- RAINHA --

    // do-while para a movimentação da Rainha
    do
    {   //aqui ele vai ler quantas vezes ele vai para esquerda
        printf("Esquerda\n");
        e++;
    } while (e <= 8); // vai se fazer uma contagem de quantas casas a rainha vai andar
    printf("A rainha se moveu 8 casas para a esquerda\n\n");
    // com o número já determinado, ele fala quantas casas foram andadas

    //-- CAVALO --

    while (m--)
    {   // for pra definir quantas casas ele vai andar
        for(int i = 0; i <= 1; i++){
            printf("Baixo\n"); // vai imprimir a casa pra baixo duas vezes
        }
        printf("Esquerda\n"); // vai imprimir a casa pra esquerda uma vez
    }
    printf("O cavalo se moveu 2 casas para baixo e 1 para a esquerda\n\n");
    // com o número já determinado, ele fala quantas casas foram andadas

    return 0;
}
