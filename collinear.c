#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    int det;
    printf("Type 1st point (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Type 2nd point (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Type 3rd point (x3 y3): ");
    scanf("%d %d", &x3, &y3);
    det = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (det == 0)
    {
        printf("The points are collinear\n");
    }
    else
    {
        printf("The points are not collinear\n");
    }
    return 0;
}