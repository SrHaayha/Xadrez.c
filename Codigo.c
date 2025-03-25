#include <stdio.h>

// Função recursiva para a movimentação da Torre (5 casas para a direita)
void mover_torre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    mover_torre(casas - 1);
}

// Função recursiva para a movimentação da Rainha (8 casas para a esquerda)
void mover_rainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// Função recursiva e com loops aninhados para o Bispo (5 casas na diagonal para cima e à direita)
void mover_bispo_recursivo(int casas, int movimento_vertical, int movimento_horizontal) {
    if (casas == 0) {
        return;
    }
    // Movimenta-se na diagonal (cima e direita)
    printf("Cima, Direita\n");

    // Loops aninhados para simular movimento em L
    for (int i = 0; i < movimento_vertical; i++) {
        for (int j = 0; j < movimento_horizontal; j++) {
            // Movimentação horizontal e vertical
            printf("Movimento adicional vertical: Cima\n");
            printf("Movimento adicional horizontal: Direita\n");
        }
    }
    mover_bispo_recursivo(casas - 1, movimento_vertical, movimento_horizontal);
}

// Função para a movimentação do Cavalo com loops aninhados e múltiplas variáveis
void mover_cavalo() {
    printf("\nMovimento do Cavalo:\n");
    
    // Movimenta 2 casas para cima e 1 para a direita
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }

    int movimento_direita = 1;
    while (movimento_direita > 0) {
        printf("Direita\n");
        movimento_direita--;
    }
    
    // Condições complexas com break e continue
    for (int i = 0; i < 2; i++) {
        if (i == 1) {
            break; // Termina o loop após a segunda casa
        }
        printf("Movendo mais uma vez: Cima\n");
    }
}

int main() {
    // Movimentação da Torre usando recursividade
    printf("Movimento da Torre:\n");
    mover_torre(5); // 5 casas para a direita

    // Movimentação do Bispo usando recursividade e loops aninhados
    printf("\nMovimento do Bispo:\n");
    mover_bispo_recursivo(5, 1, 1); // 5 casas na diagonal para cima e direita, com movimento adicional

    // Movimentação da Rainha usando recursividade
    printf("\nMovimento da Rainha:\n");
    mover_rainha(8); // 8 casas para a esquerda

    // Movimentação do Cavalo com loops aninhados e condições complexas
    mover_cavalo();

    return 0;
}
