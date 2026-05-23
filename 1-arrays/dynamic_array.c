// Criar uma struct ArrayDinamico com dados, tamanho, capacidade
// Implementar: criar, inserir, inserir_em_posicao, remover, buscar, destruir

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
    if (dynamicArr->length >= dynamicArr->capacity) {
        dynamicArr->capacity = dynamicArr->capacity * 2;
        dynamicArr->data = realloc(dynamicArr->data, dynamicArr->capacity * sizeof(int));
    }
    dynamicArr->data[dynamicArr->length] = n;
    dynamicArr->length++;
}

void inserir_em_posicao(struct DynamicArray *dynamicArray, int pos, int n) {
    if (dynamicArray->length >= dynamicArray->capacity) {
        dynamicArray->capacity = dynamicArray->capacity * 2;
        dynamicArray->data = realloc(dynamicArray->data, dynamicArray->capacity * sizeof(int));
    }

    if (pos < 0 || pos > dynamicArray->length) {
        printf("Posição invalida\n");
        return;
    }

    for (int i = dynamicArray->length; i > pos; i--) {
        dynamicArray->data[i] = dynamicArray->data[i-1];
    }
    dynamicArray->data[pos] = n;
    dynamicArray->length++;
}

int busca_sequencial(struct DynamicArray *dynamicArr, int n) {
    for (int i = 0; i < dynamicArr->length; i++) {
        if (dynamicArr->data[i] == n) {
            return i;
        }
    }

    return -1;
}

void remover(struct DynamicArray *dynamicArr, int pos){
    if (pos < 0 || pos >= dynamicArr->length) {
        printf("Posição invalida\n");
        return;
    }

    for (int i = pos; i < dynamicArr->length - 1; i++) {
        dynamicArr->data[i] = dynamicArr->data[i + 1];
    }
    dynamicArr->length--;
}

void destruir(struct DynamicArray *dynamicArr){
    free(dynamicArr->data);
    free(dynamicArr);
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