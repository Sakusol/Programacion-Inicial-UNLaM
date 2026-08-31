/*2.11 Confeccionar un programa que solicite el ingreso de un número entero positivo de 4 cifras y
pueda calcular e informar la suma de sus dígitos hasta llegar a una sola cifra. Ejemplo: 9929
→ 2*/

#include <stdio.h>

int main()
{
    int numero, suma;

    printf("Ingrese un número entero positivo de 4 cifras: ");
    scanf("%d", &numero);

   
    suma = (numero / 1000) + ((numero / 100) % 10) + ((numero / 10) % 10) + (numero % 10); //Se descomponen y se suman las 4 cifras

    suma = (suma / 10) + (suma % 10); //Se reduce el resultado a 1 sola cifra

    printf("\nLa suma de los dígitos hasta llegar a una sola cifra es: %d", suma);

    return 0;
}