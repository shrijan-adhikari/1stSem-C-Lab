#include <stdio.h>

int main() {
    int a = 5, b = 7;

    printf("a = %d, b = %d\n", a, b);

    // Logical AND
    printf("and = %d\n", a && b);

    // Logical OR
    printf("or = %d\n", a || b);
    // Logical XOR 
    printf("xor = %d\n", (a || b) && !(a && b));

    return 0;
}