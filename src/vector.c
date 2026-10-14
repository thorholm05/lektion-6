#include <stdio.h>

// Funktionsprototype
void add(double u1, double u2, double v1, double v2,
         double *w1, double *w2);

int main(void) {
    double u1, u2, v1, v2;
    double w1, w2;

    // Indlæs første vektor
    printf("Indtast u1 og u2: ");
    scanf("%lf %lf", &u1, &u2);

    // Indlæs anden vektor
    printf("Indtast v1 og v2: ");
    scanf("%lf %lf", &v1, &v2);

    // Kald funktionen og gem resultatet i w1 og w2
    add(u1, u2, v1, v2, &w1, &w2);

    // Udskriv resultatet
    printf("Resultat: (%.2f, %.2f)\n", w1, w2);

    return 0;
}

// Funktion der lægger to vektorer sammen
void add(double u1, double u2, double v1, double v2,
         double *w1, double *w2) {

    *w1 = u1 + v1;
    *w2 = u2 + v2;
}
