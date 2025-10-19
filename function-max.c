#include <stdio.h>
void max (int a,int b)
{
    int compare= (a>b)?a:b;
    printf("maximum no. %d", compare); 
}
int main ()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    max(x, y);
    return 0;
}