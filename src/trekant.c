#include <stdio.h>
#include <math.h>

// Funktionsprototyper
void get_input(double *p1_x, double *p1_y,
               double *p2_x, double *p2_y,
               double *p3_x, double *p3_y);

double compute_sum_of_length(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y);
double compute_side_length(double a_x, double a_y, double b_x, double b_y);
void print_sum(double sum);

int main(void) {
    double p1_x, p2_x, p3_x,
           p1_y, p2_y, p3_y;

    // Hent input fra brugeren
    get_input(&p1_x, &p1_y, &p2_x, &p2_y, &p3_x, &p3_y);

    // Beregn trekantens omkreds
    double total_length = compute_sum_of_length(
        p1_x, p1_y, p2_x, p2_y, p3_x, p3_y
    );

    // Udskriv resultat
    print_sum(total_length);

    return 0;
}

// Funktion til at hente koordinater
void get_input(double *p1_x, double *p1_y,
               double *p2_x, double *p2_y,
               double *p3_x, double *p3_y) {

    printf("Write the first point:\n");
    scanf("%lf %lf", p1_x, p1_y);

    printf("Write the second point:\n");
    scanf("%lf %lf", p2_x, p2_y);

    printf("Write the third point:\n");
    scanf("%lf %lf", p3_x, p3_y);
}

// Beregn summen af trekantens sider
double compute_sum_of_length(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y) {
    double side1, side2, side3;

    side1 = compute_side_length(p1_x, p1_y, p2_x, p2_y);
    side2 = compute_side_length(p2_x, p2_y, p3_x, p3_y);
    side3 = compute_side_length(p3_x, p3_y, p1_x, p1_y);

    return side1 + side2 + side3;
}

// Beregn afstand mellem to punkter
double compute_side_length(double a_x, double a_y, double b_x, double b_y) {
    double delta_x = a_x - b_x;
    double delta_y = a_y - b_y;

    return sqrt(delta_x * delta_x + delta_y * delta_y);
}

// Udskriv omkredsen
void print_sum(double sum) {
    printf("Sum of sides: %lf\n", sum);
}
