//write a program to read array of N elements anfd search for an element using binary search algorithm
#include <stdio.h>


int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;


        if (arr[mid] == key) {
            return mid;
        }


        if (arr[mid] < key) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    return -1; // Return -1 if key is not present in array
}

int main() {
    int arr[100]; // Assuming maximum size of array is 100
    int n, key;

    // Input number of elements in array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);


    printf("Enter %d integers in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Enter element to search for: ");
    scanf("%d", &key);


    int index = binarySearch(arr, 0, n - 1, key);


    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

