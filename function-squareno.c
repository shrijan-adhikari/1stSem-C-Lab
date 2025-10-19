#include <stdio.h>
void square(int a)
{
    int sq= a*a;
    printf ("square of the number %d", sq);
}
int main ()
{
    printf("enter a number");
    int x;
    scanf ("%d",&x);
    square(x);
    return 0;
}