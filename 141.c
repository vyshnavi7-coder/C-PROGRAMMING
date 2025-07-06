//program to swap the values of two variables using function
#include <stdio.h>
void swap(int *x, int *y);
int main() {
int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

