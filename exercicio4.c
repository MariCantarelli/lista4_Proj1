#include <stdio.h>

// Função para somar minutos a uma hora específica
void somar_minutos(int hora, int minutos, int soma_minutos, int *nova_hora, int *novo_minuto) {
    int total_minutos = hora * 60 + minutos + soma_minutos;
    *nova_hora = (total_minutos / 60) % 24;  // Garante que a hora fique no formato 24h
    *novo_minuto = total_minutos % 60;
}

int main() {
    int hora, minutos, soma_minutos;
    
    // Entrada do usuário
    printf("Digite a hora (0-23): ");
    scanf("%d", &hora);
    printf("Digite os minutos (0-59): ");
    scanf("%d", &minutos);
    printf("Digite a quantidade de minutos a adicionar: ");
    scanf("%d", &soma_minutos);
    
    int nova_hora, novo_minuto;
    somar_minutos(hora, minutos, soma_minutos, &nova_hora, &novo_minuto);
    
    // Exibição do resultado
    printf("Hora atualizada: %02d:%02d\n", nova_hora, novo_minuto);
    
    return 0;
}