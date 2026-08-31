/* 4.6 Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e
informe si lo ingresado corresponde a una vocal, con el mensaje “VOCAL”. y su
correspondiente valor numérico en ASCII.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char caracter;

    // Solicitar al usuario que ingrese un carácter
    printf("Ingrese un carácter alfanumérico: ");
    scanf(" %c", &caracter);

    // Convertir el carácter a minúscula para simplificar la comparación
    caracter = tolower(caracter);

    // Verificar si el carácter es una vocal
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
    {
        printf("\nVOCAL");
        printf("\nValor ASCII: %d", (int)caracter);
    } else {
        printf("\nNo es una vocal.");
        printf("\nValor ASCII: %d", (int)caracter);
    }

    return 0;
}