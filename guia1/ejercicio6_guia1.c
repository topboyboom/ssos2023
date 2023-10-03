#include <stdio.h>
#include <math.h>
int main() 
{
    float nota1, nota2, nota3;
    float promedio;
    printf("Ingrese la nota 1: ");
    scanf("%f", &nota1);
    printf("Ingrese la nota 2: ");
    scanf("%f", &nota2);
    printf("Ingrese la nota 3: ");
    scanf("%f", &nota3);
    promedio = (nota1 * 0.4) + (nota2 * 0.3) + (nota3 * 0.3);

    if (promedio < 3.95) 
    {
        printf("El estudiante ha reprobado la asignatura.\n");
    } 
    else if (promedio >= 3.95 && promedio <= 4.94) 
    {
        printf("El estudiante va a examen.\n");
    } 
    else 
    {
        printf("El estudiante se exime de la asignatura.\n");
    }
    printf("Promedio ponderado: %.2f\n", promedio);
    return 0;
}
