#include <stdio.h>

int main() {
    char nombres[3][50];
    float notas[3][4];
    int i, j, opcion;

    do {
        printf("\n1. Ingresar datos\n");
        printf("2. Ver matriz\n");
        printf("3. Promedio estudiante: \n");
        printf("4. Promedio materia: \n");
        printf("5. Nota mas alta: \n");
        printf("6. Salir: \n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {

            case 1:
                for(i = 0; i < 3; i++) {
                    printf("Nombre: ");
                    scanf("%s", nombres[i]);

                    for(j = 0; j < 4; j++) {
                        printf("Materia %d: ", j+1);
                        scanf("%f", &notas[i][j]);
                    }
                }
                break;

            case 2:
                printf("\nNombre\tM1\tM2\tM3\tM4\n");
                for(i = 0; i < 3; i++) {
                    printf("%s\t", nombres[i]);
                    for(j = 0; j < 4; j++) {
                        printf("%.1f\t", notas[i][j]);
                    }
                    printf("\n");
                }
                break;


            case 3:
                for(i = 0; i < 3; i++) {
                    float suma = 0;
                    for(j = 0; j < 4; j++) suma += notas[i][j];
                    printf("%s: %.2f\n", nombres[i], suma/4);
                }
                break;


            case 4:
                for(j = 0; j < 4; j++) {
                    float suma = 0;
                    for(i = 0; i < 3; i++) suma += notas[i][j];
                    printf("Materia %d: %.2f\n", j+1, suma/3);
                }
                break;


            case 5:
                float max = notas[0][0];
                int est = 0, mat = 0;

                for(i = 0; i < 3; i++) {
                    for(j = 0; j < 4; j++) {
                        if(notas[i][j] > max) {
                            max = notas[i][j];
                            est = i;
                            mat = j;
                        }
                    }
                }

                printf("Mayor: %.2f (%s, M%d)\n", max, nombres[est], mat+1);
                break;
        }

    }
    while(opcion != 6);

    return 0;
}