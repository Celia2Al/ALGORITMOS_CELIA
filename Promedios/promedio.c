#include <stdio.h>
int main() {
    char respuesta;
    float diametro, altura;
    float sumaDiametros = 0, sumaAlturas = 0;
    int contador = 0;
    do {
        printf("Ingrese el diámetro del tronco: ");
        scanf("%f", &diametro);

        printf("Ingrese la altura del tronco: ");
        scanf("%f", &altura);

        sumaDiametros += diametro;
        sumaAlturas += altura;
        contador++;
        printf("¿Desea continuar? (S/N): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 'S' || respuesta == 's');
    if (contador > 0) {
        printf("Promedio de diámetro: %.2f\n", sumaDiametros / contador);
        printf("Promedio de altura: %.2f\n", sumaAlturas / contador);
    } else {
        printf("No se ingresaron datos.\n");
    }
    return 0;
}
