#include <stdio.h>
#include <stdbool.h>

int main(){
    int n = 49;
    bool isPrimeNumber = true;

    if (n < 2) {
        printf("Não é um numero primo!");
        return 0;
    }

    for(int i = 2; i < n; i++){
        if (n % i == 0) {
            isPrimeNumber = false;
            break;
        }
    }

    printf(isPrimeNumber == true ? "É um numero primo!": "Não é um numero primo!");
    return 0;
}