/*
    Projeto Final - Movimentos de Xadrez
    Autor: Ivair Rocha
    Desafio: Nível Mestre
    Descrição:
        - Implementação de Torre, Bispo, Rainha (recursividade)
        - Cavalo (loops complexos)
        - Bispo também com loops aninhados
*/

#include <stdio.h>

// ===================== TORRE =====================
// Movimenta a torre recursivamente para cima
void moverTorreCima(int casas) {
    if (casas == 0) return; // Condição de parada
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

// Movimenta a torre recursivamente para a direita
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// ===================== BISPO =====================
// Recursividade para diagonal cima-direita
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(casas - 1);
}

// Bispo com loops aninhados (externo = vertical, interno = horizontal)
void moverBispoLoops(int casas) {
    for (int i = 0; i < casas; i++) { // Vertical
        printf("Cima\n");
        for (int j = 0; j < 1; j++) { // Horizontal
            printf("Direita\n");
        }
    }
}

// ===================== RAINHA =====================
// Combina torre (reta) e bispo (diagonal)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverRainha(casas - 1);
}

// ===================== CAVALO =====================
// Usa loops aninhados para simular movimento em "L"
// Duas casas para cima e uma para a direita
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n");
                continue; // Pula para próxima iteração (mantém "subindo")
            }
            if (j == 2) {
                printf("Direita\n");
                break; // Sai do loop interno depois de completar o "L"
            }
        }
    }
}

// ===================== MAIN =====================
int main() {
    int casasTorre = 3;
    int casasBispo = 3;
    int casasRainha = 3;
    int movimentosCavalo = 2;

    printf("=== Movimentos da Torre ===\n");
    moverTorreCima(casasTorre);
    moverTorreDireita(casasTorre);
    printf("\n");

    printf("=== Movimentos do Bispo (Recursivo) ===\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("=== Movimentos do Bispo (Loops Aninhados) ===\n");
    moverBispoLoops(casasBispo);
    printf("\n");

    printf("=== Movimentos da Rainha ===\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("=== Movimentos do Cavalo ===\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    return 0;
}
