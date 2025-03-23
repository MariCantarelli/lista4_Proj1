#include <stdio.h>

// Função para converter minutos em horas e minutos
void converter_minutos(int mnts, int *h, int *m) {
    *h = mnts / 60;  // Calcula as horas
    *m = mnts % 60;  // Calcula os minutos restantes
}

int main() {
    int minutos, horas, minutos_restantes;
    
    // Entrada do usuário
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);
    
    // Chamada da função de conversão
    converter_minutos(minutos, &horas, &minutos_restantes);
    
    // Exibição do resultado
    printf("%d minutos equivalem a %d hora(s) e %d minuto(s).\n", minutos, horas, minutos_restantes);
    
    return 0;
}