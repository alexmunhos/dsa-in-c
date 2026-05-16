// Aloque um array de inteiros dinamicamente, preencha e libere

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = malloc(5 * sizeof(5));

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        printf("%i\n", arr[i]);
    }

    free(arr);

    return 0;
}