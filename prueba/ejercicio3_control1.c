//Crear un programa en c que permita contar la cantidad de veces que se ingresan números pares
//y la cantidad de números impares hasta que se ingrese un número negativo. El cero no se
//cuenta.
#include <stdio.h>
int main() 
{
    int numero;
    int pares = 0;
    int impares = 0;

    printf("Ingrese números (ingrese un número negativo para finalizar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero < 0) {
            break; 
        } else if (numero == 0) {
            continue; 
        } else if (numero % 2 == 0) {
            pares++; 
        } else {
            impares++; 
        }
    }

    printf("Cantidad de números pares: %d\n", pares);
    printf("Cantidad de números impares: %d\n", impares);

    return 0;
}


