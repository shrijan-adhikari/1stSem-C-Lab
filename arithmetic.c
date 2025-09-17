#include <stdio.h>
int main()
{
    int a = 10, b = 17, sum, multiply, subs;
    float div;
    sum = a + b;
    subs = a - b;
    multiply = a * b;
    div = (float) a / b;
    printf("sum =%d", sum);
    printf("\n subs=%d", subs);
    printf("\nmultiply=%d", multiply);
    printf("\ndiv=%f", div);
    return 0;
}