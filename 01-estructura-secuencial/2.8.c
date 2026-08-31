/*2.8 Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%.
Confeccionar un programa que recibiendo el precio original y un código que indica si es o no
con descuento (0 no aplica el descuento y 1 aplica el descuento). Informe con leyenda
aclaratoria el precio final.*/

#include <stdio.h>

int main()
{
    float preciooriginal, preciofinal;
    int codigodescuento;

    printf("Ingrese el precio original del artículo: $");
    scanf("%f", &preciooriginal);
    printf("Ingrese el código de descuento (0 para sin descuento, 1 para con descuento): ");
    scanf("%d", &codigodescuento);

    preciofinal = preciooriginal - (preciooriginal * 0.2 * codigodescuento);

    printf("El precio final del artículo es: $%.2f\n", preciofinal);

    return 0;
}