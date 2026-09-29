#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("=== CALCULADORA EM C ===\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;

        case '-':
            resultado = num1 - num2;
            break;

        case '*':
            resultado = num1 * num2;
            break;

        case '/':
            if (num2 == 0) {
                printf("Erro: nao e possivel dividir por zero.\n");
                return 1;
            }
            resultado = num1 / num2;
            break;

        default:
            printf("Operacao invalida.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
