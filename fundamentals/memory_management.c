#include <stdio.h>
#include <stdlib.h>

void useMalloc(){
    int* ptr = malloc(5 * (sizeof(int)));

    for (int i = 0; i < 5; i++) {
        ptr[i] = i;
    }

    for (int i = 0; i < 5; i++){
        printf("%d", ptr[i]);
    }

    free(ptr);
    printf("\n");
};

void useRealloc(int* ptr){
    ptr = realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
        ptr[i] = i;
    }

    for (int i = 0; i < 10; i++){
        printf("%d", ptr[i]);
    }
    
    free(ptr);
    printf("\n");
};

void useCalloc(){
    int* ptr = calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("%d", ptr[i]);
    }
    printf("\n");

    useRealloc(ptr);
};

int main(){
    useMalloc();
    useCalloc();

    return 0;
}