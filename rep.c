#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
// Função para emb.o array 
void shuffle(int arr[], int n) { for (int i = n - 1; i > 0; i--) { int j = rand() % (i + 1); int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp; } } int main() { int vars[4]; printf("Digite 4 valores:\n"); for (int i = 0; i < 4; i++) { scanf("%d", &vars[i]); } // Inicializa a semente do gerador de números aleatórios srand(time(0)); // Embaralha o array shuffle(vars, 4); printf("Valores em ordem aleatória:\n"); for (int i = 0; i < 4; i++) { printf("%d ", vars[i]); } return 0; }
