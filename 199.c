//program to count frequency of each elements in an array
#include <stdio.h>

#define MAX_SIZE 100
void countFrequency(int arr[], int size) {
    int freq[MAX_SIZE];
    int visited[MAX_SIZE];
    int i, j;


    for (i = 0; i < size; i++) {
        freq[i] = 0;
        visited[i] = 0;
    }

    for (i = 0; i < size; i++) {
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        freq[i] = count;
    }
    printf("Element\t\tFrequency\n");
    for (i = 0; i < size; i++) {
        if (visited[i] == 1) {
            continue;
        }
        printf("%d\t\t%d\n", arr[i], freq[i]);
    }
}

main()
{
    int arr[MAX_SIZE];
    int size;
    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    countFrequency(arr, size);
}

