/* 2.1 Confeccionar un programa que pueda ingresar 2 números enteros y calcule e informe con
mensajes aclaratorios la suma, el producto, el cociente y el resto. Precondición: el segundo
número es distinto de cero. */

#include <stdio.h>

int main()
{
    int num1, num2, suma, producto, resto;
    float cociente;

    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número entero (distinto de cero): ");
    scanf("%d", &num2);

    suma = num1 + num2;
    producto = num1 * num2;
    cociente = (float)num1 / num2;
    resto = num1 % num2;

    printf("\nLa suma de los números es: %d", suma);
    printf("\nEl producto de los números es: %d", producto);
    printf("\nEl cociente de los números es: %.2f", cociente);
    printf("\nEl resto de los números es: %d", resto);

    return 0;
}