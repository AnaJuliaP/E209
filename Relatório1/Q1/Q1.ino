#include <stdio.h>

int main() {
    int numero;

    printf("Entrada: ");
    scanf("%d", &numero);

    while (numero < 0 || numero > 50) {
        printf("Valor inválido! Digite um número entre 0 e 50: ");
        scanf("%d", &numero);
    }

    for (int i = numero - 1; i > 0; i--) {
        printf("Resto da divisao de %d por %d: %d\n", numero, i, numero % i);
    }

    return 0;
}