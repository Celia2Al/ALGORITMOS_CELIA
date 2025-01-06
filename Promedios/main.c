#include <stdio.h>

int main() {
    int numero;
    int pares = 0, impares = 0;

    do {
        printf("Ingrese un número (negativo para terminar): ");
        scanf("%d", &numero);

        if (numero > 0) {
            if (numero % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    } while (numero >= 0);

    printf("Cantidad de números pares: %d\n", pares);
    printf("Cantidad de números impares: %d\n", impares);

    return 0;
}



