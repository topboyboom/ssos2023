#include <stdio.h>
#include <math.h>

int main()
{
    float nota1,nota2,nota3,nota4;

    printf("Ingrese la primer nota: ");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);
    printf("Ingrese la ultima nota: ");
    scanf("%f", &nota4);

    float suma;
    suma=nota1+nota2+nota3+nota4;

    float promedio=suma/4.0;

    printf("la suma es:%.2lf ",suma);
    printf("el promedio es: %.2lf",promedio);
}
