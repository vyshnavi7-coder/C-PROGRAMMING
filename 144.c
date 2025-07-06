//program with a count visitors() function that uses a static storage class
#include <stdio.h>
void countVisitors() {
    static int totalVisitors = 0;
    totalVisitors++;
    printf("Visitor count: %d\n", totalVisitors);
}
int main() {
    for (int i = 0; i < 10; i++) {
        countVisitors();
    }
    return 0;
}

