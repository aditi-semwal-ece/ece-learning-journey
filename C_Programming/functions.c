#include <stdio.h>

int add(int a, int b);   // function declaration

int main() {
    int sum = add(5, 3);
    printf("Sum = %d", sum);
    return 0;
}

int add(int a, int b) {  // function definition
    return a + b;
}
