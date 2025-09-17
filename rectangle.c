#include<stdio.h>
int main() {
    int a,b,c,d,e,f,g,h,i;
    printf("enter length of rectangle A =");
    scanf("%d",&a);
    printf("enter breadth of rectangle A =");
    scanf("%d",&b);
     printf("enter length of rectangle B =");
    scanf("%d",&c);
    printf("enter breadth of rectangle B =");
    scanf("%d",&d);
     printf("enter length of rectangle C =");
    scanf("%d",&e);
    printf("enter breadth of rectangle C =");
    scanf("%d",&f);
   g=2*(a+b);
   h=2*(c+d);
   i=2*(e+f);
   g>h && g>i ? printf("A rectangle has the largest perimeter\n "):printf("A rectangle has not the largest perimeter\n ");
   h>g && h>i ? printf("B rectangle has the largest perimeter\n "):printf("B rectangle has not the largest perimeter\n ");
   i>g && i>h ? printf("C rectangle has the largest perimeter\n "):printf("C rectangle has not the largest perimeter\n ");
    return 0;
}