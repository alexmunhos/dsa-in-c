#include <stdio.h>

int main(){
    int n = 5;
    int value = 1;
    
    for (int i = 1; i <= n; i++) {
        value = value * i;
    }

    printf("%d", value);

    return 0;
}