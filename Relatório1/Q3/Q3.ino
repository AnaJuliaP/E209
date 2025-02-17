#include <stdio.h>

void contarNumeros(int valores[], int n) {
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 5; i++) {
        if (valores[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (valores[i] > 0) {
            positivos++;
        } else if (valores[i] < 0) {
            negativos++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
    printf("Quantidade de numeros positivos: %d\n", positivos);
    printf("Quantidade de numeros negativos: %d\n", negativos);
}

int main() {
    int n;

    printf("Entrada: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int valores[5];

        printf("Digite 5 valores inteiros: ");
        for (int j = 0; j < 5; j++) {
            scanf("%d", &valores[j]);
        }

        contarNumeros(valores, 5);
    }

    return 0;
}