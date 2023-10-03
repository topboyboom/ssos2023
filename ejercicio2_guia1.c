#include <stdio.h>
#include <string.h>

void invertirCadena(char *cadena) {
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud / 2; i++) {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - 1 - i];
        cadena[longitud - 1 - i] = temp;
    }
}

int main() {
    char cadena[] = "LEUNA";
    
    printf("Cadena original: %s\n", cadena);
    invertirCadena(cadena);
    printf("Cadena invertida: %s\n", cadena);

    return 0;
}
