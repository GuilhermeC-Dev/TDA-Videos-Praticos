/*
  TRABALHO TDA - 2025.2
  Dupla: Guilherme Costa de Oliveira e Marconi José Batista de Oliveira Filho
  Tema: Sequencia, Condicional e Repeticao
*/

#include <stdio.h>

int main() {
    printf("Inimigo encontrado: Dragao da Montanha!\n");
    
    int vida_dragao = 100;
    int dano_ataque = 0;
    int escolha_arma = 0; // Nova variavel para guardar o que o usuario digitar

    // --- MENU DE ESCOLHA ---
    printf("\nEscolha sua arma para a batalha:\n");
    printf("1 - Espada Magica (Dano alto)\n");
    printf("2 - Espada de Madeira (Dano baixo)\n");
    printf("Digite sua opcao: ");
    
    // O scanf le o numero digitado e guarda na variavel 'escolha_arma'
    scanf("%d", &escolha_arma); 

    // --- VERIFICA A ESCOLHA ---
    if (escolha_arma == 1) {
        printf("\n>> Voce equipou a Espada Magica... Dano dobrado!\n");
        dano_ataque = 20;
    } else {
        // Se digitar 2 (ou qualquer outro numero), cai aqui
        printf("\n>> Voce equipou a Espada de Madeira...\n");
        dano_ataque = 10;
    }

    printf("--- A Batalha Comecou ---\n");
    
    int turno = 1;
    while(vida_dragao > 0) {
        vida_dragao = vida_dragao - dano_ataque;
        
        if(vida_dragao < 0) vida_dragao = 0; 

        printf("Turno %d: Ataque realizado! Vida do Dragao: %d\n", turno, vida_dragao);
        turno++;
    }
    
    // Pequeno ajuste para mostrar o total de turnos no final
    printf("\nVitoria! O Dragao foi derrotado em %d turnos.\n", turno - 1);
    
    return 0;
}
