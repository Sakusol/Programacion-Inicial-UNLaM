/*2.7 Una pizzería vende empanadas por unidad o por docena. Como primer paso, se pide al usuario
que ingrese el precio por docena y el precio por unidad del día. Si se compran empanadas que
no se agrupen en docenas, las adicionales se cobran por unidad. Indicar con leyendas
aclaratorias, el precio total a abonar, ingresando la cantidad de empanadas vendidas.*/

#include<stdio.h>

int main()
{
    int cantidadempanadas;
    float preciodocena, preciounidad, preciototal;

    printf("Ingrese el precio por docena: $");
    scanf("%f", &preciodocena);
    printf("Ingrese el precio por unidad: $");
    scanf("%f", &preciounidad);
    printf("Ingrese la cantidad de empanadas vendidas:");
    scanf("%d", &cantidadempanadas);

    preciototal = (cantidadempanadas / 12) * preciodocena + (cantidadempanadas % 12) * preciounidad;

    printf("\nEl precio a abonar es: $%.2f", preciototal);
    
    return 0;
}