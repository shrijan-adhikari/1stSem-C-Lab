#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max1, max2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("You must enter at least two numbers.\n");
        return 0;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max1 and max2
    max1 = arr[0];
    max2 = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    if (max1 == max2) {
        printf("No second largest number (all are equal).\n");
    } else {
        printf("Second largest number is: %d\n", max2);
    }

    return 0;
}
