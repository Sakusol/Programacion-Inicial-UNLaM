/*2.5 Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB)1
y lo informe
expresado en: TiB, GiB, MiB, con leyendas aclaratorias. NOTA: 1MiB = 1024 KiB; 1GiB = 1024
MiB; 1TiB = 1024 GiB.*/

#include <stdio.h>

int main()
{
    float kib, tib, gib, mib;

    printf("Ingrese el valor en Kibibyte (KiB): ");
    scanf("%f", &kib);

    mib = kib / 1024.0;
    gib = mib / 1024.0;
    tib = gib / 1024.0;

    printf("\nLa medida ingresada en Kibibyte (KiB) es: %d", kib);

    printf("\n\nCONVERSIONES:");

    printf("\n\nEl valor en Mebibyte (MiB) es: %.8f", mib);
    printf("\nEl valor en Gibibyte (GiB) es: %.8f", gib);
    printf("\nEl valor en Tebibyte (TiB) es: %.8f", tib);

    return 0;
}