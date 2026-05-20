// Remova duplicatas de um array não-ordenado

#include <stdio.h>
#include <stdbool.h>

bool isInNewArr(int newArr[], int newArrLength, int n) {
    for (int i = 0; i < newArrLength; i++) {
        if (n == newArr[i]) {
            return true;
        }
    }

    return false;
}

int main(){
    int arr[] = {50,17,31,99,50,17,22,31};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    int newArr[arrLength];
    int newArrLength = 0;

    for (int i = 0; i < arrLength; i++) {
        if (!isInNewArr(newArr, newArrLength, arr[i])) {
            newArr[newArrLength] = arr[i];
            newArrLength++;
        }
    }

    for (int i = 0; i < newArrLength; i++) {
        printf("%i ", newArr[i]);
    }

    return 0;
}