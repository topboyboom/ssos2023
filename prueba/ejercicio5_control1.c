//Realizar un algoritmo que pruebe si una palabra ingresada por el usuario es o no
//palíndromo. Una palabra es palíndroma cuando se lee igual de derecha a izquierda que de
//izquierda a derecha. Por ejemplo: ana, radar, oso, etc.
#include <stdio.h>
#include <string.h>

void invertirCadena(char *cadena) 
{
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud / 2; i++) 
    {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - 1 - i];
        cadena[longitud - 1 - i] = temp;
    }
}

int main() 
{
    char cadena[] = "Oso";    
    printf("Cadena original: %s\n", cadena);
    invertirCadena(cadena);
    printf("Cadena invertida: %s\n", cadena);
    return 0;

        if (invertirCadena(cadena)== cadena);
    {
        printf("la palabra es palindromo\n");
    } 
    else
    {
        printf("la palabra no es palindromo\n");
    } 
    return 0;
}