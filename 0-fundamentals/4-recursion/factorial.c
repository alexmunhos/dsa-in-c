// Fatorial iterativo vs recursivo

#include <stdio.h>

int factorialInterative(int n){
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }

    return result;
}

int factorialRecursive(int n){
    if (n == 0) {
        return 1;
    }
    
    return n * factorialRecursive(n - 1);
}

int main(){
    int n = 0;
    printf("Interative: %i\n", factorialInterative(n));
    printf("Recursive: %i\n", factorialRecursive(n));
    return 0;
}