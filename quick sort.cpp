#include <stdio.h>

int main() {
    int arreglo[] = {50,26,7,9,15,27};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    int stack[n];
    int top = -1;

    int low = 0;
    int high = n - 1;

    stack[++top] = low;
    stack[++top] = high;

    while (top >= 0) {
        high = stack[top--];
        low = stack[top--];

        int pivote = arreglo[high];
        int i = low - 1;
        int temp;

        for (int j = low; j < high; j++) {
            if (arreglo[j] < pivote) {
                i++;
                temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
            }
        }

        temp = arreglo[i + 1];
        arreglo[i + 1] = arreglo[high];
        arreglo[high] = temp;

        int pi = i + 1;

        if (pi - 1 > low) {
            stack[++top] = low;
            stack[++top] = pi - 1;
        }

        if (pi + 1 < high) {
            stack[++top] = pi + 1;
            stack[++top] = high;
        }
    }

    printf("Arreglo ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}