/*
  TRABALHO TDA - 2025.2
  Dupla: Guilherme Costa de Oliveira e Marconi José Batista de Oliveira
  Tema: Arrays e Strings
*/

#include <stdio.h>

int main() {
    int visualizacoes[3] = {15000, 32000, 85000};
    char artista[] = "The Weeknd";
    int i; 

    printf("=== SPOTIFY CHARTS ===\n");
    printf("Artista selecionado: %s\n", artista);
    printf("Vamos revelar o Top 3 mensal...\n");
    printf("---------------------------------\n");

    for(i = 0; i < 3; i++) {
        printf("\n[Pressione ENTER para revelar o Top %d...]", i+1);
        getchar();
      
        printf(">>> SUCESSO! A faixa #%d teve %d plays.\n", i+1, visualizacoes[i]);
    }

    printf("\n---------------------------------\n");
    printf("Todas as estatisticas foram mostradas.\n");

    return 0;
}
