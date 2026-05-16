#include <stdio.h>
#include <stdbool.h>

int main(){
    int n = 123456;
    int invert = 0;

    while (n > 0) {
        int rest = n % 10;
        invert = (invert * 10) + rest;
        n = n / 10;
    }

    printf("%d", invert);

    return 0;
}