// Implemente uma função que cria e retorna um array dinâmico

#include <stdio.h>
#include <stdlib.h>

int *createArray(int length){
    return calloc(length, sizeof(int));
}

int main(){
    int *firstArray = createArray(5);
    int *secondArray = createArray(3);

    printf("firstArray:\n");
    for (int i = 0; i < 5; i++){
        printf("%i ", firstArray[i]);
    }
    free(firstArray);

    printf("\nsecondArray:\n");
    for (int i = 0; i < 3; i++){
        printf("%i ", secondArray[i]);
    }
    free(secondArray);
    
    return 0;
}
