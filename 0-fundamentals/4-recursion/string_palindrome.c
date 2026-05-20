// Verifique se uma string é palíndromo recursivamente

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPallindrome(char word[], int start, int end){
    if (start >= end) {
        return true;
    }

    if (word[start] != word[end]) {
        return false;
    }

    return isPallindrome(word, start + 1, end - 1);
}

int main(){
    char word[] = "alexela";
    int length = strlen(word);

    if (isPallindrome(word, 0, length - 1)) {
        printf("É um palindromo");
    } else {
        printf("Não é um palindromo");
    }

    return 0;
}