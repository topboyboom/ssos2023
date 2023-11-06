#include <stdio.h>

int main() 
{
    int a, b, c;
    printf("Ingrese la longitud del primer lado del triangulo: ");
    scanf("%d", &a);
    printf("Ingrese la longitud del segundo lado del triangulo: ");
    scanf("%d", &b);
    printf("Ingrese la longitud del tercer lado del triangulo: ");
    scanf("%d", &c);

    if (a ==b && b == c) 
    {
        printf("El triangulo es equilatero.\n");
    } 
    else if 
       (a != b && b != c && a != c) 
       {
        printf("El triangulo es escaleno.\n");
       } 
    else 
    {
        printf("El triangulo es isosceles.\n");
    }
    return 0;
}
