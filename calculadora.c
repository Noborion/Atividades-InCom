#include <stdio.h>
#include <math.h>

int main() {
    char operador;
    double num1, num2, resultado;

    // Solicita ao usuário para inserir o operador
    printf("Digite um operador (+, -, *, /): ");
    scanf(" %c", &operador);

    // Solicita ao usuário para inserir os dois números
    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    // Realiza a operação com base no operador inserido
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '/':
            // Verifica se o segundo número é zero para evitar divisão por zero
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            // Caso o operador seja inválido
            printf("Operador inválido!\n");
    }

    return 0;
}