//program to read values in 2 array, add them and store the result in the 3 array
#include <stdio.h>

#define SIZE 5
void addArrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr1[SIZE], arr2[SIZE], result[SIZE];
    printf("Enter %d integers for array 1:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d integers for array 2:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr2[i]);
    }
    addArrays(arr1, arr2, result, SIZE);
    printf("Result array after addition:\n");
    displayArray(result, SIZE);
}

