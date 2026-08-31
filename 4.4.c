/*4.4 Se ingresan tres números enteros por teclado. Informarlos en orden creciente (de menor a
mayor).*/

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

if (num1 <= num2 && num1 <= num3)
{
    if (num2 <= num3)
    {
    printf("Orden creciente: %d, %d, %d\n", num1, num2, num3);
    }
    else
    {
    printf("Orden creciente: %d, %d, %d\n", num1, num3, num2);
    }
}
        else
        if (num2 <= num1 && num2 <= num3)
            {
                if (num1 <= num3)
                {
                printf("Orden creciente: %d, %d, %d\n", num2, num1, num3);
                }
                else
                {
                printf("Orden creciente: %d, %d, %d\n", num2, num3, num1);
                }
            }
                    else
                    {
                    if (num1 <= num2)
                    {
                    printf("Orden creciente: %d, %d, %d\n", num3, num1, num2);
                    }
                        else 
                        {
                        printf("Orden creciente: %d, %d, %d\n", num3, num2, num1);
                        }
                    }
    return 0;
}

