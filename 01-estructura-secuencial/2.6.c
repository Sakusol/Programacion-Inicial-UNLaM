/* 2.6 Una empresa de aviación vende pasajes en clase turista y en primera clase, cuyo costo es un
30% más caro que clase turista. Se pide al usuario ingresar el importe de cada pasaje de clase
turista, la cantidad de pasajes vendidos de clase turista y la cantidad vendida de primera clase.
informar la recaudación total del vuelo. Incluir mensajes aclaratorios.*/

#include <stdio.h>

int main()
{
    int cantidadturista, cantidadprimera;
    float claseturista, valorprimera, costoturista, costoprimera, recaudaciontotal;
    
    printf("Ingrese el costo del pasaje en Clase Turista: $");
    scanf("%f", &claseturista);

    printf("Ingrese la cantidad de pasajes vendidos en Clase Turista: ");
    scanf("%d", &cantidadturista);
    printf("Ingrese la cantidad de pasajes vendidos en Primera Clase: ");
    scanf("%d", &cantidadprimera);
    
    costoturista = claseturista * cantidadturista;
    valorprimera = (claseturista * 0.30) + claseturista;
    costoprimera = valorprimera* cantidadprimera;
    recaudaciontotal = costoturista + costoprimera;
    
    printf("\nLa recaudación total es de: $%.2f\n", recaudaciontotal);
    
    return 0;
}