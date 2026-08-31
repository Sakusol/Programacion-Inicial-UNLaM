/*4.3 Confeccionar un programa que pueda determinar de tres números enteros que se ingresan
por teclado, si alguno de ellos es igual a la suma de los otros dos. Informar con leyenda
aclaratoria.*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    if (num1 == num2 + num3)
    {
        printf("\nEl primer número es igual a la suma de los otros dos.");
    }
    else if (num2 == num1 + num3)
    {
        printf("\nEl segundo número es igual a la suma de los otros dos.");
    }
    else if (num3 == num1 + num2)
    {
        printf("\nEl tercer número es igual a la suma de los otros dos.");
    }
    else
    {
        printf("\nNingún número es igual a la suma de los otros dos.");
    }

    return 0;
}