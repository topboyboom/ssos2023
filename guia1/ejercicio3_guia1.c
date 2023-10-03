#include <stdio.h>

int main() {
    int lado1, lado2, lado3;
    printf("Ingrese la longitud del primer lado del triangulo: ");
    scanf("%d", &lado1);
    printf("Ingrese la longitud del segundo lado del triangulo: ");
    scanf("%d", &lado2);
    printf("Ingrese la longitud del tercer lado del triangulo: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado2 == lado3) 
    {
        printf("El triangulo es equilatero.\n");
    } else if 
       (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) 
       {
        printf("El triangulo es escaleno.\n");
       } 
    else 
    {
        printf("El triangulo es isosceles.\n");
    }
    return 0;
}
