// Soma dos dígitos de um número usando recursão

#include <stdio.h>

int sumOfDigits(int n){
    if (n < 10) {
        return n;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

int main(){
    int n = 12345;

    printf("%i", sumOfDigits(n));

    return 0;
}