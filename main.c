#include <stdio.h>
#include <math.h>

int main() {

    // Dichiarazione delle variabili
    float lato, r1, r2, C1, A1, C2, A2;
    float pi = 3.14159;

    // INPUT
    lato = 10;

    // CALCOLI

    // Cerchio inscritto
    r1 = lato / 2;
    C1 = 2 * pi * r1;
    A1 = pi * r1 * r1;

    // Cerchio circoscritto
    r2 = sqrt(lato * lato + lato * lato) / 2;
    C2 = 2 * pi * r2;
    A2 = pi * r2 * r2;

    // OUTPUT
    printf("Cerchio inscritto:\n");
    printf("Circonferenza = %.2f\n", C1);
    printf("Area = %.2f\n", A1);

    printf("\nCerchio circoscritto:\n");
    printf("Circonferenza = %.2f\n", C2);
    printf("Area = %.2f\n", A2);

    return 0;
}