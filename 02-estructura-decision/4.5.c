/*4.5 Confeccionar un programa que permita ingresar cuatro números enteros por teclado, de a
uno por vez, y determine el menor valor y su número de orden. Informe los valores ingresados
e identifique al menor con mensaje aclaratorio.*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    int menor, orden;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero entero: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto numero entero: ");
    scanf("%d", &num4);

    // Determinar el menor valor y su orden
    menor = num1;
    orden = 1;

    if (num2 < menor)
    {
        menor = num2;
        orden = 2;
    }
    if (num3 < menor)
    {
        menor = num3;
        orden = 3;
    }
    if (num4 < menor)
    {
        menor = num4;
        orden = 4;
    }

    // Mostrar los valores ingresados
    printf("\nValores ingresados:\n");
    printf("\nNúmero 1: %d", num1);
    printf("\nNúmero 2: %d", num2);
    printf("\nNúmero 3: %d", num3);
    printf("\nNúmero 4: %d", num4);

    // Informar el menor valor y su orden
    printf("\nEl menor valor es: %d, ingresado en la posición: %d\n", menor, orden);

    return 0;
}
