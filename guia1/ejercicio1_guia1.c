#include <stdio.h>

int main() {
    int suma = 0;
    int contador = 1; // Empezamos en el primer numero impar, que es 1.
    int numeros_impares = 0;
    while (numeros_impares < 100) {
        suma += contador;
        contador += 2; // Pasamos al siguiente numero impar sumando 2.
        numeros_impares++;
    }
    printf("La suma de los primeros 100 numeros impares es: %d\n", suma);
    return 0;
}
