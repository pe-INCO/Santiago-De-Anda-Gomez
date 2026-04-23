#include <stdio.h>

int main() {
    int opcionSistema, opcionMenu;
    int arreglo[5];
    int inicio = 0, fin = -1;   // Para FIFO
    int top = -1;               // Para LIFO
    int i, dato;

    printf("Selecciona el sistema:\n");
    printf("1. FIFO (Cola)\n");
    printf("2. LIFO (Pila)\n");
    scanf("%d", &opcionSistema);

    do {
        printf("\nMenu:\n");
        printf("1. Encolar / Push\n");
        printf("2. Desencolar / Pop\n");
        printf("3. Mostrar\n");
        printf("4. Salir\n");
        scanf("%d", &opcionMenu);

        switch(opcionMenu) {

            case 1: // Insertar
                if (opcionSistema == 1) { // FIFO
                    if (fin == 4) {
                        printf("La cola esta llena\n");
                    } else {
                        printf("Ingresa dato: ");
                        scanf("%d", &dato);
                        fin++;
                        arreglo[fin] = dato;
                    }
                } else { // LIFO
                    if (top == 4) {
                        printf("La pila esta llena\n");
                    } else {
                        printf("Ingresa dato: ");
                        scanf("%d", &dato);
                        top++;
                        arreglo[top] = dato;
                    }
                }
                break;

            case 2: // Eliminar
                if (opcionSistema == 1) { // FIFO
                    if (inicio > fin) {
                        printf("La cola esta vacia\n");
                    } else {
                        printf("Dato eliminado: %d\n", arreglo[inicio]);
                        inicio++;
                    }
                } else { // LIFO
                    if (top == -1) {
                        printf("La pila esta vacia\n");
                    } else {
                        printf("Dato eliminado: %d\n", arreglo[top]);
                        top--;
                    }
                }
                break;

            case 3: // Mostrar
                if (opcionSistema == 1) { // FIFO
                    if (inicio > fin) {
                        printf("La cola esta vacia\n");
                    } else {
                        printf("Elementos:\n");
                        for (i = inicio; i <= fin; i++) {
                            printf("%d ", arreglo[i]);
                        }
                        printf("\n");
                    }
                } else { // LIFO
                    if (top == -1) {
                        printf("La pila esta vacia\n");
                    } else {
                        printf("Elementos:\n");
                        for (i = top; i >= 0; i--) {
                            printf("%d ", arreglo[i]);
                        }
                        printf("\n");
                    }
                }
                break;

            case 4:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida\n");
        }

    } while (opcionMenu != 4);

    return 0;
}