
#include <stdio.h>
#include <locale.h>
#include <C:\Users\Peeta\Documents\Projetos em C\TesteCalculadoraC\funcoes.h>


int main() {
    //Criando variáveis
    float numero1, numero2, resultado;
    char operador;

    //solicitando números e Operador ao usuario
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); // Espaço antes do %c para ignorar espaços em branco

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    //Chamando as funções de acordo com o operador para realizar o calculo
    switch (operador) {
        case '+':
            resultado = soma(numero1, numero2);
            break;
        case '-':
            resultado = subtracao(numero1, numero2);
            break;
        case '*':
            resultado = multiplicacao(numero1, numero2);
            break;
        case '/':
            resultado = divisao(numero1, numero2);
            break;
        default:
            printf("Operador inválido.\n");
            return 1;
    }

    //Resultado da conta
    printf("Resultado: %.2f\n", resultado);

    return 0;
}