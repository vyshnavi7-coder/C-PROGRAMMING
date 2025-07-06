//linear search on the arrays which contains duplicate elements
#include <stdio.h>
#define MAX_SIZE 100
void linearSearch(int arr[], int size, int key) {
    int found = 0;

    printf("Indices where %d is found: ", key);
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("Not found");
    }
    printf("\n");
}
int main() {
    int arr[MAX_SIZE];
    int size, key;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);

    linearSearch(arr, size, key);
    return 0;
}

