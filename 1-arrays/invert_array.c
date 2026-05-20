// Inverta um array in-place (sem criar outro array)

#include <stdio.h>
#include <stdlib.h>

int main(){
    int length = 6;
    int *arr = malloc(length * sizeof(int));

    for (int i = 0; i < length; i++) {
        arr[i] = i;
        printf("%i ", arr[i]);
    }

    int start = 0;
    int end = 5;
    while (start < end) {
        int aux = arr[start];
        arr[start] = arr[end];
        arr[end] = aux;

        start = start + 1;
        end = end - 1;
    }

    printf("\n");

    for (int i = 0; i < length; i++) {
        printf("%i ", arr[i]);
    }

    return 0;
}