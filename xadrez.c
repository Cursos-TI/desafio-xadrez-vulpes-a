#include <stdio.h>

int main() {
    
    // Definição de Variáveis
    int rainha = 0;
    int bispo = 0;
    int torre;

    // Movimentação do Bispo
    while (bispo < 5) {
        
        printf("Bispo: Cima Direita \n");

        bispo++;
    }

    //Movimentação da Torre
    for (torre = 0; torre < 5; torre++) {
        printf("Torre : Direita \n");
    }

    //Movimentação da Rainha
    do {

        printf("Rainha: Esquerda \n");
        rainha++;
        
    } while (rainha < 8);

    return 0;
}
