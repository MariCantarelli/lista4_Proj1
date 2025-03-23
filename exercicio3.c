#include <stdio.h>

// Função para encontrar o maior e o menor valor em um vetor de inteiros positivos
void encontrar_maior_menor(int vetor[], int tamanho, int *maior, int *menor) {
    if (tamanho <= 0) {
        return;
    }
    
    *maior = *menor = vetor[0]; // Inicializa com o primeiro elemento
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int n;
    
    // Entrada do usuário
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("O vetor deve ter pelo menos um elemento.\n");
        return 1;
    }
    
    int vetor[n];
    printf("Digite os %d elementos do vetor: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    
    int maior, menor;
    encontrar_maior_menor(vetor, n, &maior, &menor);
    
    // Exibição do resultado
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    
    return 0;
}
