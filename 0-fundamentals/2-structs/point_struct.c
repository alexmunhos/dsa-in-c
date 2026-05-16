// Crie uma struct Ponto {x, y} e uma função que calcula distância entre dois pontos

#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

float distance(struct Point p1, struct Point p2){
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    return sqrt((dx * dx) + (dy * dy));
}

int main(){
    struct Point p1 = {5, 4};
    struct Point p2 = {1, 0};

    printf("Distancia: %f", distance(p1, p2));

    return 0;
}