/*4.2 Ingresar por teclado tres números enteros. Determinar e informar con un mensaje si el primer
número ingresado es menor que los otros dos.*/
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

    if (num1 < num2 && num1 < num3)
    {
        printf("\nEl primer número ingresado es menor que los otros dos.");
    }
    else
    {
        printf("\nEl primer número ingresado no es menor que los otros dos.");
    }

    return 0;
}
