// Calcule a média e mediana

#include <stdio.h>

int main(){
    int arr[] = {10,16,33,47,81,103};
    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    
    for (int i = 0; i < length; i++) {
        sum+= arr[i];
    }

    float median;
    if (length % 2 == 0) {
        median = (arr[(length / 2) - 1] + arr[length / 2]) / 2;
    } else {
        median = arr[length / 2];
    }

    float mean = (float) sum / length;
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f", median);

    return 0;
}