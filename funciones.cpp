#include <stdio.h>

//declarar funcion
int sumar(int a, int b);
int numeromagico();
void mostrarEdad(int edad);
void mensaje();
int resultado;

int main () {
resultado=sumar(56,78);
    printf("El resultado es %d\n" , resultado);
    printf("El numero magico es %d\n" , numeromagico());
    mostrarEdad(18);

    return 0;
}
//funcion con parametros y retorno
int sumar(int a, int b) {
    int suma;
    suma=a+b;
    return suma;
}
//sin parametros y con retorno
int numeromagico() {
    int numero=69;
    return numero;

}
//con parametros y sin retorno
void mostraredad(int edad) {
    printf("Tu edad es %d años\n" , edad);
}

//sin parametros y sin retorno
void mensaje() {
    printf("ctm ivan");

}