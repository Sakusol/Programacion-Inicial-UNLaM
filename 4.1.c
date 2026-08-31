/*4.1 Se ingresan tres números enteros distintos. Determinar e informar el mayor de los tres
números*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, mayor;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        mayor = num1;
    }
    else
        {
        if (num2 > num1 && num2 > num3)
        {
        mayor = num2;
        }
        else
        {
        mayor = num3;
        }
        }
    printf("\nEl mayor de los tres números es: %d", mayor);

    return 0;
}