#include<stdio.h>
void even(int a)
{
   int check= (a%2==0)? printf("no. is even"):printf("no. is odd");

}
int main ()
{   int x;
    printf("enter required no.: \t");
    scanf("%d", &x);
    even(x);
    return 0;
}
