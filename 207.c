//program to print the following series 1,2,4,7,11,16,..100
#include <stdio.h>

int main() {
    int current = 1;
    int next_difference = 1;

    while (current <= 100) {
        printf("%d ", current);
        current += next_difference;
        next_difference++;
    }

    printf("\n");

    return 0;
}

