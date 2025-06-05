#include <stdio.h>

/*
 * Desafio: Movimentando as Peças do Xadrez (nível novato)
 * 
 * Este programa simula o movimento de três peças de xadrez (Torre, Bispo e Rainha)
 * utilizando estruturas de repetição diferentes para cada peça:
 *   - Torre: for
 *   - Bispo: while
 *   - Rainha: do-while
 * 
 * Para cada casa percorrida pela peça, o programa imprime no console a direção correspondente.
 */

int main() {
    // Definição do número de casas a serem movidas para cada peça
    int casasTorre = 5;    // Torre deve mover 5 casas para a direita
    int casasBispo = 5;    // Bispo deve mover 5 casas na diagonal (cima + direita)
    int casasRainha = 8;   // Rainha deve mover 8 casas para a esquerda

    /*
     * 1) Movimento da Torre (Rook)
     *    - A Torre se move em linha reta horizontal ou vertical.
     */
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int passo = 1; passo <= casasTorre; passo++) {
        printf("Direita\n");
    }
    printf("\n");

    /*
     * 2) Movimento do Bispo (Bishop)
     *    - O Bispo se move na diagonal.
     */
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    /*
     * 3) Movimento da Rainha (Queen)
     *    - A Rainha se move em todas as direções (horizontal, vertical e diagonal).
     */
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}

