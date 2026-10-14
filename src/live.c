#include <stdio.h>

void scale(int* length, int* width, int factor);
void get_input(int* length, int* width, int* factor);

int main(void) {
    int length, width, factor;

    get_input(&length, &width, &factor);

    scale(&length, &width, factor);


    /* Udskriv gamle og nye dimensioner på skærmen. */
    //printf("Original length %d\n", original_length);
    //printf("Original width %d\n", original_width);
    printf("New length %d\n", length);
    printf("New width %d\n", width);

    return 0;
}


void get_input(int* length, int* width, int* factor) {
    printf("Indtast laengde, bredde og faktor\n");
    scanf("%d %d %d", length, width, factor);
}

void scale(int* length, int* width, int factor){
    *length = *length * factor;
    *width = *width * factor;
}