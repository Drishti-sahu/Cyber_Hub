#include <stdio.h>

int main() {
    // To swap the numbers
    int a = 5, b = 10; // Given two numbers
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value of a will be: %d\n",a);
    printf("Value of b will be: %d",b);

    return 0;
}