#include <stdio.h>

int main()
{
    int a = 5;
    int b;
    b = a; 
    printf("b = %d\n", b);
    b += 3; 
    printf("b += 3: %d\n", b);
    b -= 2;
    printf("b -= 2: %d\n", b);
    b *= 4; 
    printf("b *= 4: %d\n", b);
    b /= 3; 
    printf("b /= 3: %d\n", b);
    b %= 2; 
    printf("b %%= 2: %d\n", b);
    return 0;
}