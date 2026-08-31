/* 2.9 Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena e
informarlos con mensaje aclaratorio */

#include <stdio.h>

int main()
{
    int numero, unidad, decena, centena;

    printf("Ingrese un número entero de 3 cifras: ");
    scanf("%d", &numero);

    centena = numero / 100;
    decena = (numero / 10) % 10;
    unidad = numero % 10;

    printf("\nCentena: %d", centena);
    printf("\nDecena: %d", decena);
    printf("\nUnidad: %d", unidad);

    return 0;
}