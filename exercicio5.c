#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// Função para calcular seno e cosseno de um ângulo em graus
void calcular_seno_cosseno(float angulo, float *seno, float *cosseno) {
    float radianos = angulo * (PI / 180.0); // Converte graus para radianos
    *seno = sin(radianos);
    *cosseno = cos(radianos);
}

int main() {
    float angulo, seno, cosseno;
    
    // Entrada do usuário
    printf("Digite um ângulo em graus: ");
    scanf("%f", &angulo);
    
    // Chamada da função
    calcular_seno_cosseno(angulo, &seno, &cosseno);
    
    // Exibição do resultado
    printf("Seno de %.2f graus: %.6f\n", angulo, seno);
    printf("Cosseno de %.2f graus: %.6f\n", angulo, cosseno);
    
    return 0;
}
