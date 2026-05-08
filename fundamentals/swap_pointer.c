#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    printf("a: %i - b: %i\n", a, b);
    swap(&a, &b);
    printf("a: %i - b: %i\n", a, b);

    return 0;
}