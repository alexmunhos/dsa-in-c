// Encontre o maior e menor elemento

#include <stdio.h>
#include <limits.h>

int main(){
    int arr[] = {-30,1,2,3,4,5,6};
    int bigger = INT_MIN;
    int smaller = INT_MAX;

    for (int i = 0; i < 7; i++) {
        if (arr[i] > bigger) {
            bigger = arr[i];
        }
        if (arr[i] < smaller) {
            smaller = arr[i];
        }
    }

    printf("O maior numero é: %i\n", bigger);
    printf("O menor numero é: %i\n", smaller);

    return 0;
}