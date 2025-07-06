//program to dynamic memory allocation example

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    *ptr = 123;

    printf("Value stored at allocated memory: %d\n", *ptr);
    free(ptr);
}
