//program to read array of 10 elements and display in reverse order
#include <stdio.h>

int main() {
    int arr[10];
    int i;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


