#include <stdio.h>
void add(int a, int b) {
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

int main() {
    int x , y;
    printf ("enter two number");
    scanf(" %d %d", &x,&y);
    add(x, y);
    return 0;
}