/* 2.10 Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide
transformarlo a un número con formato (aammdd) e informar el número original y el
resultante con leyenda aclaratoria. */

#include <stdio.h>

int main()
{
    int fecha, dia, mes, anio;

    printf("Ingrese una fecha con formato (ddmmaa): ");
    scanf("%d", &fecha);

    dia = fecha / 10000;
    mes = (fecha / 100) % 100;
    anio = fecha % 100;

    printf("\nFecha original: %02d/%02d/%02d", dia, mes, anio);
    printf("\nFecha formatada: %02d/%02d/%02d", anio, mes, dia);

    return 0;
}