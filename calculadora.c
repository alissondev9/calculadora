#include <stdio.h>
#include <stdlib.h>

// ---------- Funções Básicas ----------
float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
    return a / b;
}

// ---------- Funções Programador ----------
void decimalParaBinario(int n) {
    int bin[32], i = 0;

    if (n == 0) {
        printf("Binario: 0\n");
        return;
    }

    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }

    printf("Binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
}

void decimalParaHexadecimal(int n) {
    printf("Hexadecimal: %X\n", n);
}

// ---------- Menu ----------
void menu() {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - AND (Programador)\n");
    printf("6 - OR (Programador)\n");
    printf("7 - XOR (Programador)\n");
    printf("8 - Shift Left (<<)\n");
    printf("9 - Shift Right (>>)\n");
    printf("10 - Decimal para Binario\n");
    printf("11 - Decimal para Hexadecimal\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    float a, b;
    int x, y;

    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                printf("Resultado: %.2f\n", soma(a, b));
                break;

            case 2:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                printf("Resultado: %.2f\n", subtracao(a, b));
                break;

            case 3:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                printf("Resultado: %.2f\n", multiplicacao(a, b));
                break;

            case 4:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                printf("Resultado: %.2f\n", divisao(a, b));
                break;

            case 5:
                printf("Digite dois inteiros: ");
                scanf("%d %d", &x, &y);
                printf("Resultado (AND): %d\n", x & y);
                break;

            case 6:
                printf("Digite dois inteiros: ");
                scanf("%d %d", &x, &y);
                printf("Resultado (OR): %d\n", x | y);
                break;

            case 7:
                printf("Digite dois inteiros: ");
                scanf("%d %d", &x, &y);
                printf("Resultado (XOR): %d\n", x ^ y);
                break;

            case 8:
                printf("Digite o numero e quantos bits deslocar: ");
                scanf("%d %d", &x, &y);
                printf("Resultado: %d\n", x << y);
                break;

            case 9:
                printf("Digite o numero e quantos bits deslocar: ");
                scanf("%d %d", &x, &y);
                printf("Resultado: %d\n", x >> y);
                break;

            case 10:
                printf("Digite um numero decimal: ");
                scanf("%d", &x);
                decimalParaBinario(x);
                break;

            case 11:
                printf("Digite um numero decimal: ");
                scanf("%d", &x);
                decimalParaHexadecimal(x);
                break;

            case 0:
                printf("Encerrando a calculadora...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
