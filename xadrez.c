#include <stdio.h>

// Movimento da Torre: recursivo, movendo para a direita 'steps' vezes.
void torre_move(int steps) {
    if (steps <= 0) {
        return;
    }
    // Cada chamada representa uma casa para a direita
    printf("Direita\n");
    torre_move(steps - 1);
}

// Movimento da Rainha: recursivo, movendo para a esquerda 'steps' vezes.
void rainha_move(int steps) {
    if (steps <= 0) {
        return; // caso base
    }
    printf("Esquerda\n");
    rainha_move(steps - 1);
}

// Movimento do Bispo
void bispo_move(int steps) {
    if (steps <= 0) {
        return;
    }
    for (int vertical = 0; vertical < 1; vertical++) {
        
        printf("Cima ");
       
        for (int horizontal = 0; horizontal < 1; horizontal++) {
         
            printf("Direita");
        }
    }
    printf("\n");
    bispo_move(steps - 1); 
}

// Movimento do Cavalo
void cavalo_move(int movimentos_L) {
    int feito = 0;
    
    while (feito < movimentos_L) {
       
        for (int tentativa = 0; tentativa < 1; tentativa++) { 
            int contadorCima = 0;
            for (; contadorCima < 2; contadorCima++) { 
                
                if (contadorCima > 1) {
                    break; 
                }
                printf("Cima");
                if (contadorCima == 0) {
                   
                    printf(", ");
                }
            }

            if (feito == movimentos_L - 1) {
                
            } else {
                ;
            }

            printf(", Direita\n");
        }

        feito++;

        if (feito > movimentos_L) {
            break;
        }
    }
}

int main() {
    // Definições de quantas casas cada peça fará
    const int casas_torre = 5;
    const int casas_rainha = 8;
    const int passos_bispo = 5;
    const int movimentos_cavalo = 3;

    // Movimentação do Bispo
    printf("--Bispo--\n");
    bispo_move(passos_bispo);
    printf("\n");

    // Movimentação da Torre
    printf("--Torre--\n");
    torre_move(casas_torre);
    printf("\n");

    // Movimentação da Rainha
    printf("--Rainha--\n");
    rainha_move(casas_rainha);
    printf("\n");

    // Movimentação do Cavalo
    printf("--Cavalo--\n");
    cavalo_move(movimentos_cavalo);
    printf("\n");

    return 0;
}
