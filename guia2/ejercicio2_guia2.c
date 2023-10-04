#include <stdio.h>
#include <string.h>


struct Producto 
{
    int codigo;
    char descripcion[100]; // Se asume una descripción de hasta 100 caracteres
    float precio;
};

int main() {
    // Declarar dos variables de tipo Producto
    struct Producto producto1, producto2;

    // Cargar los datos del primer producto
    producto1.codigo = 1;
    strcpy(producto1.descripcion, "Producto A");
    producto1.precio = 10.99;

    // Cargar los datos del segundo producto
    producto2.codigo = 2;
    strcpy(producto2.descripcion, "Producto B");
    producto2.precio = 15.49;

    // Determinar cuál de los dos productos tiene el precio más alto
    if (producto1.precio > producto2.precio) {
        printf("El producto con mayor precio es: %s\n", producto1.descripcion);
    } else if (producto2.precio > producto1.precio) {
        printf("El producto con mayor precio es: %s\n", producto2.descripcion);
    } else {
        printf("Ambos productos tienen el mismo precio.\n");
    }

    return 0;
}
