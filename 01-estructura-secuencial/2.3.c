/* 2.3 Se ingresan las notas de dos evaluaciones de un alumno de una materia. Determinar la nota
promedio del alumno. */

#include <stdio.h>

int main()
{
    int nota1, nota2, promedio;

    printf("Ingrese nota 1: ");
    scanf("%d", &nota1);
    printf("Ingrese nota 2: ");
    scanf("%d", &nota2);

    promedio = (nota1 + nota2) / 2;

    printf("\nLa nota promedio del alumno es: %d", promedio);

    return 0;
}