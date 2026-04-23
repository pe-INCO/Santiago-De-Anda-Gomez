#include <stdio.h>

int main() {
    int i, j, key, n;
    int arreglo[] = {50,26,7,9,15,27};

    n = sizeof(arreglo) / sizeof(arreglo[0]);

    for (i = 1; i < n; i++) {
        key = arreglo[i];
        j = i - 1;

        while (j >= 0 && arreglo[j] > key) {
            arreglo[j + 1] = arreglo[j];
            j--;
        }

        arreglo[j + 1] = key;
    }

    printf("Arreglo ordenado:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}