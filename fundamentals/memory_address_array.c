#include <stdio.h>

int main() {
    int arr[5] = {18, 25, 55, 13, 72};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        printf("%p\n", &arr[i]);
    }

    return 0;
}