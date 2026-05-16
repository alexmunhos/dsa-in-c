// Crie uma struct Pessoa {nome, idade} e ordene um array delas por idade

#include <stdio.h>

struct Person{
    char name[20];
    int age;
};

int main(){
    struct Person arr[] = {
        {"Sabrina", 23},
        {"Lucimar", 50},
        {"Pedro", 54},
        {"Alex", 22},
        {"Tina", 78},
        {"Domingos", 81},
        {"Andre", 27}
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].age > arr[j + 1].age) {
                struct Person aux = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = aux;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        printf("Nome: %s - Idade: %i\n", arr[i].name, arr[i].age);
    }

    return 0;
}