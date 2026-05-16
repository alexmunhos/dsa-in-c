// Percorra um array usando apenas aritmética de ponteiros (sem índice [i])

#include <stdio.h>

int main(){
    int arr[5] = {18, 25, 55, 13, 72};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        printf("%i\n", *(arr + i));
    }

    return 0;
}