// Criar uma struct ArrayDinamico com dados, tamanho, capacidade
// Implementar: criar, inserir, remover, buscar, destruir

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct DynamicArray {
    int *data;
    int length;
    int capacity;
};

struct DynamicArray* criar(int capacity){
    struct DynamicArray *dynamicArrayInit = malloc(sizeof(struct DynamicArray));
    dynamicArrayInit->data = malloc(capacity * sizeof(int));
    dynamicArrayInit->length = 0;
    dynamicArrayInit->capacity = capacity;
    return dynamicArrayInit;
}

void inserir(struct DynamicArray *dynamicArr, int n){
    dynamicArr->data[dynamicArr->length] = n;
    dynamicArr->length++;
}

int busca_sequencial(struct DynamicArray *dynamicArr, int n) {
    for (int i = 0; i < dynamicArr->length; i++) {
        if (dynamicArr->data[i] == n) {
            return i;
        }
    }

    return -1;
}

void remover(struct DynamicArray *dynamicArr, int n){
    dynamicArr->data[n] = -1;
    for (int i = n; i < dynamicArr->length - 1; i++) {
        dynamicArr->data[i] = dynamicArr->data[i + 1];
    }
    dynamicArr->data[dynamicArr->length - 1] = -1;
    dynamicArr->length--;
}

void destruir(struct DynamicArray *dynamicArr){
    free(dynamicArr);
    free(dynamicArr->data);
}

void mostrar(struct DynamicArray *dynamicArr){
    for (int i = 0; i < dynamicArr->length; i++) {
        printf("%i ", dynamicArr->data[i]);
    }
}

int main(){
    struct DynamicArray *dynamicArr = criar(5);

    inserir(dynamicArr, 5);
    inserir(dynamicArr, 4);
    inserir(dynamicArr, 3);
    inserir(dynamicArr, 2);
    inserir(dynamicArr, 1);

    printf("%i\n", busca_sequencial(dynamicArr, 1));

    remover(dynamicArr, 2);

    mostrar(dynamicArr);

    destruir(dynamicArr);

    return 0;
}