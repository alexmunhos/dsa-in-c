// Escreva uma função swap(int *a, int *b) sem usar variável auxiliar

#include <stdio.h>

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a = 10;
    int b = 20;

    printf("a: %i - b: %i\n", a, b);
    swap(&a, &b);
    printf("a: %i - b: %i\n", a, b);

    return 0;
}