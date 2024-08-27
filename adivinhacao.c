//
// Created by eballico on 8/26/24.
//
#include <stdio.h>

int main() {
    // Imprime cabeçalho do jogo
    printf(" ________________________________________ \n");
    printf("|                                        |\n");
    printf("| Bem vindo ao nosso jogo de adivinhação |\n");
    printf("|________________________________________|\n");

    printf("\n");

    int numeroSecreto = 42;

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("%d\n", chute);

    return 0;
}