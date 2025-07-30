#include <stdio.h>

int main() {
    
    // Definição de Variáveis
    int rainha = 0;
    int bispo = 0;
    int torre;

    // Movimentação do Bispo

    printf("--Bispo--\n");

    while (bispo < 5) {
        
        printf("Cima Direita \n");

        bispo++;
    }
    printf("\n");

    //Movimentação da Torre

   printf("--Torre--\n");

    for (torre = 0; torre < 5; torre++) {
        printf("Direita \n");
    }
    printf("\n");

    //Movimentação da Rainha

    printf("--Rainha--\n");

    do {

        printf("Esquerda \n");
        rainha++;
        
    } while (rainha < 8);
    printf("\n");

    //Movimentação do Cavalo

    printf("--Cavalo--\n");
    for (int cavalo = 0; cavalo <= 2; cavalo++) {
        while (cavalo < 2) {
            printf("Baixo, ");
            cavalo++;
        }
        printf("Esquerda \n");
    }
    printf("\n");

    return 0;
}
