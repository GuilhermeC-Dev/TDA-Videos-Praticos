/*
  TRABALHO TDA - 2025.2
  Dupla: Guilherme Costa de Oliveira e Marconi José Batista de Oliveira
  Tema: Arrays e Strings
*/

#include <stdio.h>

int main() {
    int visualizacoes[3] = {15000, 32000, 85000};
    
    char artista[] = "The Weeknd";

    printf("Top 3 Musicas mais ouvidas de: %s\n", artista);
    printf("---------------------------------\n");

    for(int i = 0; i < 3; i++) {
        printf("Faixa %d teve %d plays este mes.\n", i+1, visualizacoes[i]);
    }

    return 0;
}