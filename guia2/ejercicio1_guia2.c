#include <stdio.h>
#include <math.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenar(int arr[], int n) {
    int i, j, minIndex;

    // Recorrer todo el arreglo
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        intercambiar(&arr[i], &arr[minIndex]);
    }
}

int main() 
{
    int arr[5];
    int i;

    printf("Ingrese 5 elementos del arreglo:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    ordenar(arr, 5);
    printf("Arreglo ordenado:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}