#include <stdio.h>

// Função para somar dois números
float soma(float num1, float num2) {
    return num1 + num2;
}

// Função para subtrair dois números
float subtracao(float num1, float num2) {
    return num1 - num2;
}

// Função para multiplicar dois números
float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

// Função para dividir dois números
float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 0;
    }
}