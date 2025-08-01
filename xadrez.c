#include <stdio.h>

// Movimento da Torre: recursivo, movendo para a direita 'steps' vezes.
void torre_move(int steps) {
    if (steps <= 0) {
        return; // caso base: nada mais a fazer
    }
    // Cada chamada representa uma casa para a direita
    printf("Direita\n");
    torre_move(steps - 1); // chamada recursiva para a próxima casa
}

// Movimento da Rainha: recursivo, movendo para a esquerda 'steps' vezes.
void rainha_move(int steps) {
    if (steps <= 0) {
        return; // caso base
    }
    printf("Esquerda\n");
    rainha_move(steps - 1);
}

// Movimento do Bispo: recursivo com loops aninhados. Cada passo diagonal consiste
// em um movimento vertical ("Cima") e horizontal ("Direita").
// O loop mais externo interno da função faz "Cima", e o interno faz "Direita".
// A recursão controla quantos desses passos diagonais são feitos.
void bispo_move(int steps) {
    if (steps <= 0) {
        return; // caso base
    }
    // Loop mais externo: vertical
    for (int vertical = 0; vertical < 1; vertical++) {
        // Simula "Cima"
        printf("Cima ");
        // Loop interno: horizontal
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            // Simula "Direita"
            printf("Direita");
        }
    }
    printf("\n"); // fim do passo diagonal
    bispo_move(steps - 1); // recursão para o próximo passo
}

// Movimento do Cavalo: aprimorado com loops aninhados e controle de fluxo.
// Faz 'L' para cima e para a direita: duas casas para cima e uma para a direita.
// Aqui definimos um número fixo de movimentos em "L" e usamos aninhamento,
// continue e break para controle.
void cavalo_move(int movimentos_L) {
    int feito = 0;

    // Enquanto não completarmos o número desejado de movimentos em L
    while (feito < movimentos_L) {
        // Primeiro, subir duas casas. Usamos um loop aninhado para demonstrar múltiplas variáveis.
        for (int tentativa = 0; tentativa < 1; tentativa++) { // "nível externo" para controle
            int contadorCima = 0;
            for (; contadorCima < 2; contadorCima++) { // subir duas vezes
                // Caso hipotético: se já fizéssemos mais do que o esperado, sair precocemente
                if (contadorCima > 1) {
                    break; // não deve ocorrer, mas ilustra uso de break
                }
                printf("Cima");
                if (contadorCima == 0) {
                    // separador entre os dois "Cima" do L
                    printf(", ");
                }
            }

            // Após subir, movemos uma para a direita. Condição ilustrativa: se for o último movimento L
            // fazemos o deslocamento normalmente; caso contrário, apenas imprimir.
            if (feito == movimentos_L - 1) {
                // último, sem lógica extra
            } else {
                // outra lógica poderia ir aqui; usamos continue para mostrar seu uso
                // porém não queremos pular o movimento à direita, então apenas uma ilustração leve
                // continue; // comentado para não pular o "Direita"
                ;
            }

            // imprimir a parte direita do "L"
            printf(", Direita\n");
        }

        feito++;

        // Ilustração de controle extra: se por algum motivo extrapolarmos, interrompemos
        if (feito > movimentos_L) {
            break;
        }
    }
}

int main() {
    // Definições de quantas casas/movimentos cada peça fará (fixas no código)
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
