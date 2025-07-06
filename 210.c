//program to fill the array of 10 elements with random numbers and find the maximum and minimum elements
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[SIZE];

    srand(time(NULL));

    printf("Array elements:\n");
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    printf("\n");

    int max = findMax(arr, SIZE);
    int min = findMin(arr, SIZE);

    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}

