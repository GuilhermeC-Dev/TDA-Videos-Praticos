/*
  TRABALHO TDA - 2025.2
  Dupla: Guilherme Costa de Oliveira e Marconi José Batista de Oliveira
  Tema: Sequencia, Condicional e Repeticao
*/

#include <stdio.h>

int main() {
    printf("Inimigo encontrado: Dragao da Montanha!\n");
    
    int vida_dragao = 100;
    int espada_magica = 1; 

    if (espada_magica == 1) {
        printf("Equipando Espada Magica... Dano dobrado!\n");
    } else {
        printf("Equipando Espada de Madeira...\n");
    }

    printf("--- A Batalha Comecou ---\n");
    
    for(int turno = 1; turno <= 5; turno++) {
        vida_dragao = vida_dragao - 20;
        printf("Turno %d: Ataque realizado! Vida do Dragao: %d\n", turno, vida_dragao);
    }
    
    printf("Vitoria! O Dragao foi derrotado.\n");
    
    return 0;
}