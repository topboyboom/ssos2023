#include <stdio.h>
#include <math.h>

int main() 
{
    int a, b, c;

    printf("Ingrese la longitud del primer lado del triangulo: ");
    scanf("%d", &a);

    printf("Ingrese la longitud del segundo lado del triangulo: ");
    scanf("%d", &b);

    printf("Ingrese la longitud del tercer lado del triangulo: ");
    scanf("%d", &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) 
    {
        printf("Estos lados no forman un triangulo valido.\n");
    } 
    else 
    {
        // Calculo del perimetro
        int perimetro = a + b + c;

        // Cálculo del semiperimetro
        double semiperimetro = (double)perimetro / 2.0;

        // formula de Heron

        double area = sqrt(semiperimetro * (semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c));

        printf("El triangulo es ");
        if (a == b && b == c) {
            printf("equilatero ");
        } else if (a != b && b != c && a != c) {
            printf("escaleno ");
        } else {
            printf("isosceles ");
        }
        printf("y su perimetro es %d, su semiperimetro es %.2lf y su area es %.2lf.\n", perimetro, semiperimetro, area);
    }

    return 0;
}
