/*2.2 Se ingresan la cantidad de horas trabajadas y el valor en pesos por hora de un empleado.
Determinar el sueldo de dicho empleado con leyendas aclaratorias.*/

#include<stdio.h>

int main()
{
    float horastrabajadas, valorhora, sueldo;

    printf("Ingrese la cantidad de horas trabajadas por el empleado: ");
    scanf("%f", &horastrabajadas);

    printf("Ingrese el valor en pesos por hora: $");
    scanf("%f", &valorhora);

    sueldo = horastrabajadas * valorhora;

    printf("\nEl sueldo del empleado es: $%.2f", sueldo);

    return 0;
}