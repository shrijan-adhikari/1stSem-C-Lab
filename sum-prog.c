#include <stdio.h>
int main()
// programe to take two no. form user and print their sum
{
    int a, b, c;
    printf("enter first number:-\t");
    scanf("%d", &a);
    printf("\n enter second no.:-\t");
    scanf("%d", &b);
    c = a + b;
    printf("\nsum=%d", c);
    return 0;
}