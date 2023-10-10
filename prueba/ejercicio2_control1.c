//Desarrollar un programa que lea los valores de los catetos de un triángulo rectángulo y
//calcule cuál es la hipotenusa, el área y el perímetro del triángulo mediante las siguientes
//expresiones:
#include <stdio.h>
#include <math.h>
int main() 
{
    int cateto1,cateto2;

    printf("Ingrese el valor del cateto 1: ");
    scanf("%d", &cateto1);

    printf("Ingrese el valor del cateto 2: ");
    scanf("%d", &cateto2);
    
    {
        // Calculo de la hipotenusa
        double hipotenusca = sqrt((cateto1*2)+ (cateto2*2));

        // Cálculo del area
        double area = cateto1*cateto2 / 2.0;

        // formula del perimetro
        double perimetro= (hipotenusca+cateto1+cateto2);

        printf("el resultado la hipotenusa es:%.2lf\n ",hipotenusca);
        printf("el area del triangulo es:%.2lf\n ",area);
        printf("el perimetro del triangulo es:%.2lf\n ",perimetro);
        
    }

    return 0;
}