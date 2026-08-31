/* 2.4 Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a: yardas,
pulgadas, centímetros y metros. Informar con mensajes aclaratorios. NOTA: 1 pie = 12
pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms*/

#include <stdio.h>

int main()
{
    int pies, yardas, pulgadas;
    float centimetros, metros;

    printf("Ingrese la medida en pies: ");
    scanf("%d", &pies);

    yardas = pies / 3;
    pulgadas = pies * 12;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100;

    printf("\nLa medida ingresada en pies es: %d", pies);

    printf("\n\nCONVERSIONES:");

    printf("\n\nLa medida en yardas es: %d", yardas);
    printf("\nLa medida en pulgadas es: %d", pulgadas);
    printf("\nLa medida en centímetros es: %.2f", centimetros);
    printf("\nLa medida en metros es: %.2f", metros);

    return 0;
}